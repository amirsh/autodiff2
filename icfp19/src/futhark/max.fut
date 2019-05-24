import "ad"

module f32_dual = mk_dual f32

-- ==
-- random input { [800]f32 }
-- random input { [1600]f32 }
-- random input { [3200]f32 }
-- random input { [6400]f32 }
-- random input { [12800]f32 }
-- random input { [25600]f32 }
-- random input { [51200]f32 }

let main v1 = 
  let jac = grad (f32_dual.maximum) v1
  in jac |> f32_dual.sum |> f32_dual.get_deriv