Autodiff Experimentation
===

Installation
---
Make sure that you have adept installed in the folder `adept-1.1`.

In order to compile the files, run `make`. Then run the produced executable files.


Compilation
---
In order to compile the DiffSharp files, you have to make sure that:
* fsharpc is installed. 
* DLL files for DiffSharp, FsAlg, and FSharpQuotationEvaluator are in place.

Afterwards, run the following command in the `diffsharp` directory:
```
./compile.sh
```

Then, move to the `micro` directory, and make sure that the previously mentioned DLL files are in this directory as well.
Run the following command in order to compile the C code:
```
make
```

Finally, properly modify the `run.sh` script and run the experiments that you are interested in.
 