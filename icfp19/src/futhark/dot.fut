import "ad"

module f32_dual = mk_dual f32

-- ==
-- random input { [100]f32 [100]f32 }
-- random input { [200]f32 [200]f32 }
-- random input { [400]f32 [400]f32 }
-- random input { [800]f32 [800]f32 }
-- random input { [1600]f32 [1600]f32 }
-- random input { [3200]f32 [3200]f32 }
-- random input { [6400]f32 [6400]f32 }
-- random input { [12800]f32 [12800]f32 }

let main v1 v2 = 
  let v2' = map f32_dual.inject v2
  let jac = grad (\v -> map2 (f32_dual.*) v v2' |> f32_dual.sum) v1
  in jac |> f32_dual.sum |> f32_dual.get_deriv