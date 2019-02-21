// Learn more about F# at http://fsharp.org

open System
open System.Diagnostics
open System.IO
#if REV_MODE
open DiffSharp.AD.Reverse
#else
open DiffSharp.AD.Forward
#endif

let matrix_fill_d (rows: int) (cols: int) (value: double): D[][] =
    [| for i=1 to rows do 
       yield (
         [| for j=1 to cols do 
            yield D value |]
       )
    |]

let vector_fill_d (rows: int) (value: double): D[] =
    (matrix_fill_d 1 rows value).[0];

let vector_sum_d (vec: D[]): D = 
    vec |> Array.sum

let vector_dot_d (v1: D[]) (v2: D[]): D = 
    let mutable sum = D 0.0
    for i = 0 to v1.Length - 1 do
        sum <- sum + v1.[i] * v2.[i]
    sum

let vector_norm_sq (vec: D[]): D = 
    vector_dot_d vec vec

let vector_max_d (vec: D[]): D = 
    vec |> Array.max

let vector_mults_d (vec: D[]) (s: D): D[] = 
    vec |> Array.map (fun a -> a * s)

let matrix_sum_d (matrix: D[,]): D = 
    matrix |> Seq.cast<D> |> Seq.sum

let vector_add_d (v1: _[]) (v2: _[]): _[] =
    Array.map2 (fun a b -> a + b) v1 v2

let vector_sub_d (v1: _[]) (v2: _[]): _[] =
    Array.map2 (fun a b -> a - b) v1 v2


let N_CAM_PARAMS = 11
let ROT_IDX = 0
let CENTER_IDX = 3
let FOCAL_IDX = 6
let X0_IDX = 7
let RAD_IDX = 9

let radial_distort (rad_params:D[]) (proj:D[]) =
    let rsq = vector_norm_sq proj
    let L = 1. + rad_params.[0] * rsq + rad_params.[1] * rsq * rsq
    vector_mults_d proj L

let proj (X:D[]) = [| X.[0] / X.[2];X.[1] / X.[2] |]

let cross (a:D[]) (b:D[]) =
      [|a.[1]*b.[2] - a.[2]*b.[1]; a.[2]*b.[0] - a.[0]*b.[2]; a.[0]*b.[1] - a.[1]*b.[0];|]

let rodrigues_rotate_point (rot:D[]) (X:D[]): D[] =
    let sqtheta = vector_norm_sq rot
    let theta = sqrt sqtheta
    let costheta = cos theta
    let sintheta = sin theta
    let theta_inv = D 1. / theta

    let w = vector_mults_d rot theta_inv
    let w_cross_X = cross w X    
    let tmp = (vector_dot_d w X) * (D 1. - costheta)

    vector_add_d (vector_add_d (vector_mults_d X costheta) (vector_mults_d w_cross_X sintheta)) (vector_mults_d w tmp)

let project (cam:D[]) (X:D[]) =
    let rot = cam.[ROT_IDX..(ROT_IDX+2)]
    let translation = cam.[CENTER_IDX..(CENTER_IDX+2)]
    let kappa = cam.[RAD_IDX..(RAD_IDX+1)]
    let principal_point = cam.[X0_IDX..(X0_IDX+1)]
    let focal_length = cam.[FOCAL_IDX]

    let Xcam = rodrigues_rotate_point rot (vector_sub_d X translation)
    let distorted = radial_distort kappa (proj Xcam)
    vector_add_d principal_point (vector_mults_d distorted focal_length)

let projall (n: int) (xs: D[]): D[] = 
    let cam = xs.[0..10]
    [| for i = 0 to ((n - 11) / 3 - 1) do  
        let x = xs.[11 + 3 * i .. (13 + 3 * i)] 
        yield project cam x
    |] |> Array.concat

let benchmark_micro (dim: int) (iters: int) = 
    let rng = 42
    let rand = System.Random(rng)
    let dist (f: int) = D (rand.NextDouble())
    let vec1 = vector_fill_d dim 0.
    let vec2 = vector_fill_d dim 0.
    let vec3 = vector_fill_d dim 0.

    for k = 0 to dim - 1 do 
      vec1.[k] <- dist(rng)
      vec2.[k] <- dist(rng)
      vec3.[k] <- dist(rng)

    let mutable total = D 0.0
    let t = Stopwatch.StartNew()
    for i = 0 to iters - 1 do
      vec1.[0] <- 1.0 / (2.0 + vec1.[0])
      vec2.[1] <- 1.0 / (2.0 + vec2.[1])
#if ADD
      let vres = jacobian (fun v -> vector_add_d v vec2) vec1 
      total <- total + (vres |> matrix_sum_d)
#else
#if DOT
      let vres = grad (fun v -> vector_dot_d v vec2) vec1
      total <- total + (vres |> vector_sum_d)
#else 
#if MAX
      let vres = grad (vector_max_d) vec1
      total <- total + (vres |> vector_sum_d)
#else 
#if MULTS
      let vres = jacobian (fun v -> vector_mults_d vec1 (v.[0] * v.[0])) [| vec2.[0] |]
      total <- total + (vres.[0, *] |> vector_sum_d)
#else 
#if BA
      let vres = jacobian (projall dim) vec1
      total <- total + (vres |> matrix_sum_d)
#else
      total <- D 42.0
#endif
#endif
#endif
#endif
#endif
      

    let totalv = float total

    t.Stop()
    printfn "total =%f, time per call = %f ms" (totalv) (float t.ElapsedMilliseconds / (float)iters)



[<EntryPoint>]
let main argv =
    let dim = Int32.Parse argv.[0]
    let iters = Int32.Parse argv.[1]
    benchmark_micro dim iters
    0 // return an integer exit code
