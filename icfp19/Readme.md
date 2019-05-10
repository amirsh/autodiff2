Autodiff Experimentation
===

Installation
---
In order to compile the DiffSharp files, you have to make sure that:
* fsharpc is installed. 
* DLL files for DiffSharp, FsAlg, and FSharpQuotationEvaluator are in place.


Compilation
---
Afterwards, run the following command in the `src/diffsharp` directory:
```
./compile.sh
```

Then, move to the `src` directory, and make sure that the previously mentioned DLL files are in this directory as well.
Run the following command in order to compile the C code:
```
make
```

Finally, use the `run.sh` and `run_nmf.sh` scripts in order to run the experiments that you are interested in.
 