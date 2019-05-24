import "ad"

module f32_dual = mk_dual f32

-- ==
-- random input { [200]f32 f32 }
-- random input { [400]f32 f32 }
-- random input { [800]f32 f32 }
-- random input { [1600]f32 f32 }
-- random input { [3200]f32 f32 }
-- random input { [6400]f32 f32 }
-- random input { [12800]f32 f32 }
-- random input { [25600]f32 f32 }

let main v1 s = 
  let v1' = map f32_dual.inject v1
  let v2 = tabulate 1 (\i -> s)
  let jac = jacobian (\a -> map (\x -> x f32_dual.* a[0]) v1') v2
  in jac |> flatten |> f32_dual.sum |> f32_dual.get_deriv