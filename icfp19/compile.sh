cd src

function compileFs {
	eval "fsharpc -r ../DiffSharp Program.fs --define:$1 $2 -o ../$3"
}

cd diffsharp

compileFs "NMF" "" "nmf_fsharp_for.exe"
compileFs "NMF" "--define:REV_MODE" "nmf_fsharp_rev.exe"
compileFs "BA" "" "ba_fsharp_for.exe"
compileFs "BA" "--define:REV_MODE" "ba_fsharp_rev.exe"
compileFs "ADD" "" "add_fsharp_for.exe"
compileFs "ADD" "--define:REV_MODE" "add_fsharp_rev.exe"
compileFs "DOT" "" "dot_fsharp_for.exe"
compileFs "DOT" "--define:REV_MODE" "dot_fsharp_rev.exe"
compileFs "MAX" "" "max_fsharp_for.exe"
compileFs "MAX" "--define:REV_MODE" "max_fsharp_rev.exe"
compileFs "MULTS" "" "mults_fsharp_for.exe"
compileFs "MULTS" "--define:REV_MODE" "mults_fsharp_rev.exe"

cd ..

make -B

cd ..