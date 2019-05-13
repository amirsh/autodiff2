-- Bundle Adjustment from https://github.com/awf/autodiff

import "ad"

let N_CAM_PARAMS: i32 = 11
let ROT_IDX: i32 = 0
let CENTER_IDX: i32 = 3
let FOCAL_IDX: i32 = 6
let X0_IDX: i32 = 7
let RAD_IDX: i32 = 9

module fs (M: real) = {
  type real = M.t
  type vector = [] M.t
  let scale s v = map (\x -> x M.* s) v
  let (v1: vector) - (v2: vector) = map2 (M.-) v1 v2
  let (v1: vector) + (v2: vector) = map2 (M.+) v1 v2
  let dot (v1: vector) (v2: vector) = (map2 (M.*) v1 v2) |> M.sum
  let quadrance (v: vector) = dot v v
  let cross (v1: vector) (v2: vector) = 
      M.([v1[1]*v2[2]-v1[2]*v2[1], v1[2]*v2[0]-v1[0]*v2[2], v1[0]*v2[1]-v1[1]*v2[0]])
  let rodrigues_rotate_point (rot: vector) (X: vector) =
      let sqtheta = quadrance rot
      let theta = M.sqrt sqtheta
      let costheta = M.cos theta
      let sintheta = M.sin theta
      let theta_inv = M.(i32 1 / theta)

      let w = scale theta_inv rot
      let w_cross_X = cross w X
      let tmp = M.(dot w X * (i32 1 - costheta))

      in (scale costheta X) +
              (scale sintheta w_cross_X) +
              (scale tmp w)

--  let radial_distort (rad_params: point_2d) (proj: point_2d) =
--    let rsq = v2d.quadrance proj
--    let L = M.(i32 1 + rad_params.x * rsq + rad_params.y * rsq * rsq)
--    in v2d.scale L proj

--  let project cam X =
--    let Xcam = rodrigues_rotate_point
--               (point_3d cam[ROT_IDX:ROT_IDX+3])
--               (X v3d.- (point_3d cam[CENTER_IDX:CENTER_IDX+3]))
--    let distorted = radial_distort (point_2d cam[RAD_IDX:RAD_IDX+2])
--                                   (v2d.scale M.(i32 1/Xcam.z) {x=Xcam.x, y=Xcam.y})
--    in point_2d cam[X0_IDX:X0_IDX+2] v2d.+
--       v2d.scale cam[FOCAL_IDX] distorted
  let project (cam: vector) (X: vector) =
      let Xcam = rodrigues_rotate_point cam cam --(cam[ROT_IDX:(ROT_IDX+3)])
                  --(X - cam[CENTER_IDX:CENTER_IDX+3])
      in Xcam

  let project_all (n: i32) (xs: []real) (cam: []real) = 
    flatten (tabulate n (\i -> 
      let x = xs[(3*i):(3+3*i)]
      let res = project cam x
      in res
    ))
}

module f32_dual = mk_dual f32

module fs_f32_dual = fs f32_dual

-- ==
-- random input { [29]f32 }
-- random input { [47]f32 }
-- random input { [86]f32 }
-- random input { [161]f32 }
-- random input { [311]f32 }
-- random input { [611]f32 }
-- random input { [1211]f32 }
-- random input { [2411]f32 }

let main vec1 = 
  let dim = length vec1
  let n = (dim - 11) / 3
  let vec1' = map f32_dual.inject vec1
  let cam = vec1[0:11]
  in tabulate 11 (\i -> 
    let camd = tabulate 11 (\j -> f32.bool(i == j))
    let cam' = map2 (f32_dual.make_dual) cam camd
    in fs_f32_dual.project_all n vec1' cam'
  )
