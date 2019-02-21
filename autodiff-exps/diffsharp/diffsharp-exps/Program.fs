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

let vector_max_d (vec: D[]): D = 
    vec |> Array.max

let vector_mults_d (vec: D[]) (s: D): D[] = 
    vec |> Array.map (fun a -> a * s)

let matrix_sum_d (matrix: D[,]): D = 
    matrix |> Seq.cast<D> |> Seq.sum

let vector_add_d (v1: _[]) (v2: _[]): _[] =
    Array.map2 (fun a b -> a + b) v1 v2

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
#elif DOT
      let vres = grad (fun v -> vector_dot_d v vec2) vec1
      total <- total + (vres |> vector_sum_d)
#elif MAX
      let vres = grad (vector_max_d) vec1
      total <- total + (vres |> vector_sum_d)
#else
      let vres = jacobian (fun v -> vector_mults_d vec1 (v.[0] * v.[0])) [| vec2.[0] |]
      total <- total + (vres.[0, *] |> vector_sum_d)
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
