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

let nmf_exp H W AA =
  (matrixSum ((linalg_matrixAdd (matrixLog ((linalg_matrixMult W) H)))
              ((matrixElemDiv AA) ((linalg_matrixMult W) H))))

-- ==
-- random input { [100][1]f32 [100][1]f32 [100][100]f32 }
-- random input { [200][1]f32 [100][1]f32 [100][200]f32 }
-- random input { [400][1]f32 [100][1]f32 [100][400]f32 }
-- random input { [800][1]f32 [100][1]f32 [100][800]f32 }
-- random input { [1600][1]f32 [100][1]f32 [100][1600]f32 }
-- random input { [3200][1]f32 [100][1]f32 [100][3200]f32 }
-- random input { [100][1]f32 [200][1]f32 [200][100]f32 }
-- random input { [100][1]f32 [400][1]f32 [400][100]f32 }
-- random input { [100][1]f32 [800][1]f32 [800][100]f32 }
-- random input { [100][1]f32 [1600][1]f32 [1600][100]f32 }
-- random input { [100][1]f32 [3200][1]f32 [3200][100]f32 }

let main H W AA = 
  let H' = map (map (f32_dual.inject)) H
  let AA' = map (map (f32_dual.inject)) AA
  let R = length W
  in tabulate R (\i ->
    let dW = tabulate R (\j -> tabulate 1 (\x -> f32.bool(i == j)))
  	let W' = map2 (map2 f32_dual.make_dual) W dW
  	in nmf_exp H' W' AA'
  )
