-- Bundle Adjustment from https://github.com/awf/autodiff

import "ad"
import "vspace"

let N_CAM_PARAMS: i32 = 11
let ROT_IDX: i32 = 0
let CENTER_IDX: i32 = 3
let FOCAL_IDX: i32 = 6
let X0_IDX: i32 = 7
let RAD_IDX: i32 = 9

module fs (M: real) = {
  module vnd = mk_vspace any_vector M

  module v3d = vnd
  type point_3d = v3d.vector
  let point_3d a: point_3d = a

  module v2d = vnd
  type point_2d = v2d.vector
  let point_2d a: point_2d = a

  let rodrigues_rotate_point (rot: point_3d) (X: point_3d) =
      let sqtheta = v3d.quadrance rot in
      let theta = M.sqrt sqtheta
      let costheta = M.cos theta
      let sintheta = M.sin theta
      let theta_inv = M.(i32 1 / theta)

      let w = v3d.scale theta_inv rot
      let w_cross_X = v3d.cross w X
      let tmp = M.(v3d.dot w X * (i32 1 - costheta))

      in v3d.(scale costheta X +
              scale sintheta w_cross_X +
              scale tmp w)

  let radial_distort (rad_params: point_2d) (proj: point_2d) =
    let rsq = v2d.quadrance proj
    let L = M.(i32 1 + rad_params[0] * rsq + rad_params[1] * rsq * rsq)
    in v2d.scale L proj

  let project cam X =
    let Xcam = rodrigues_rotate_point
               (point_3d cam[ROT_IDX:ROT_IDX+3])
               (X v3d.- (point_3d cam[CENTER_IDX:CENTER_IDX+3]))
    let distorted = radial_distort (point_2d cam[RAD_IDX:RAD_IDX+2])
                                   (v2d.scale M.(i32 1/Xcam[2]) [Xcam[0], Xcam[1]])
    in point_2d cam[X0_IDX:X0_IDX+2] v2d.+
       v2d.scale cam[FOCAL_IDX] distorted

  let project_all n xs cam = 
    flatten (tabulate n (\i -> 
      let x = point_3d xs[(3*i):(3+3*i)]
      in project cam x
    ))
}

module fs_f32 = fs f32
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
  let n = (dim - N_CAM_PARAMS) / 3
  let xs' = map f32_dual.inject vec1[N_CAM_PARAMS:dim]
  let cam = vec1[0:N_CAM_PARAMS]
  let jac = jacobian (fs_f32_dual.project_all n xs') cam
  in jac |> flatten |> f32_dual.sum |> f32_dual.get_deriv
