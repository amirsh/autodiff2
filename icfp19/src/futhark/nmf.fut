import "ad"

module f32_dual = mk_dual f32

let linalg_matrixMult m1 m2 =
  map (\m1' -> map (\m2' -> map2 (f32_dual.*) m1' m2' |> f32_dual.sum) m2) m1

let linalg_matrixAdd =
  map2 (map2 (f32_dual.+))

let matrixSum m =
  flatten m |> f32_dual.sum

let matrixLog =
  map (map f32_dual.log)

let matrixElemDiv =
  map2 (map2 (f32_dual./))

let vectorOut v1 v2 = 
  map (\i -> map (\j -> i f32_dual.* j) v2) v1

let nmf_exp A v u =
  let ABar = vectorOut v u in
  (matrixSum ((linalg_matrixAdd (matrixLog ABar))
              ((matrixElemDiv A) ABar)))

-- ==
-- random input { [100]f32 [100]f32 [100][100]f32 }
-- random input { [200]f32 [100]f32 [100][200]f32 }
-- random input { [400]f32 [100]f32 [100][400]f32 }
-- random input { [800]f32 [100]f32 [100][800]f32 }
-- random input { [1600]f32 [100]f32 [100][1600]f32 }
-- random input { [3200]f32 [100]f32 [100][3200]f32 }
-- random input { [100]f32 [200]f32 [200][100]f32 }
-- random input { [100]f32 [400]f32 [400][100]f32 }
-- random input { [100]f32 [800]f32 [800][100]f32 }
-- random input { [100]f32 [1600]f32 [1600][100]f32 }
-- random input { [100]f32 [3200]f32 [3200][100]f32 }

let main u v A = 
  let v' = map (f32_dual.inject) v
  let A' = map (map (f32_dual.inject)) A
  -- let R = length W
  -- in tabulate R (\i ->
  --   let dW = tabulate R (\j -> tabulate 1 (\x -> f32.bool(i == j)))
  -- 	let W' = map2 (map2 f32_dual.make_dual) W dW
  -- 	in nmf_exp AA' H' W' 
  -- ) |> f32_dual.sum |> f32_dual.get_deriv
  ------
  let g = grad (nmf_exp A' v') u in
  g |> f32_dual.sum |> f32_dual.get_deriv
  ------
  -- let R = length u
  -- in tabulate R (\i ->
  --  let du = tabulate R (\j -> f32.bool(i == j))
  --  let u' = map2 (f32_dual.make_dual) u du
  --  in nmf_exp A' v' u'
  -- ) |> f32_dual.sum |> f32_dual.get_deriv
