cd diffsharp-exps
fsharpc -r DiffSharp Program.fs --define:BA -o ../../micro/ba_fsharp_for.exe
fsharpc -r DiffSharp Program.fs --define:BA --define:REV_MODE -o ../../micro/ba_fsharp_rev.exe
fsharpc -r DiffSharp Program.fs --define:ADD -o ../../micro/add_fsharp_for.exe
fsharpc -r DiffSharp Program.fs --define:ADD --define:REV_MODE -o ../../micro/add_fsharp_rev.exe
fsharpc -r DiffSharp Program.fs --define:DOT -o ../../micro/dot_fsharp_for.exe
fsharpc -r DiffSharp Program.fs --define:DOT --define:REV_MODE -o ../../micro/dot_fsharp_rev.exe
fsharpc -r DiffSharp Program.fs --define:MAX -o ../../micro/max_fsharp_for.exe
fsharpc -r DiffSharp Program.fs --define:MAX --define:REV_MODE -o ../../micro/max_fsharp_rev.exe
fsharpc -r DiffSharp Program.fs --define:MULTS -o ../../micro/mults_fsharp_for.exe
fsharpc -r DiffSharp Program.fs --define:MULTS --define:REV_MODE -o ../../micro/mults_fsharp_rev.exe