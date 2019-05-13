Autodiff Experimentation
===

Installation
---
In order to compile the DiffSharp files, you have to make sure that:
* fsharpc is installed. 
* DLL files for DiffSharp, FsAlg, and FSharpQuotationEvaluator are in the `src` folder.


Compilation
---
Afterwards, run the following command in the `src` directory to compile the F# code:
```
./compile_fs.sh
```

Run the following command in order to compile the C code:
```
make
```

Finally, use the `run.sh` and `run_nmf.sh` scripts in order to run the experiments that you are interested in.
