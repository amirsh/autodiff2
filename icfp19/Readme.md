Autodiff Experimentation
===

Requirements for Mac OSX
---
Make sure that you have the following software installed
* fsharpc, which is part of the mono framework (`brew install mono`)
* DLL files for DiffSharp, FsAlg, and FSharpQuotationEvaluator are in the `src` folder.
* Python 2.7 (`brew install python@2`)
* Clang (`brew install clang`)
* Theano 0.9.0 (`pip install --user theano==0.9.0`)
* Scala 2.12 (`brew install scala --devel`)

Compilation
---
Afterwards, run the following command to compile all the F# and C code:
```
./compile.sh
```

Running
---
Run the following command in order to run all the experiments.
```
./compile.sh
```

Plots
---
Finally, run the following command in order to produce the experimental results figures:

```
./plot.sh
```
