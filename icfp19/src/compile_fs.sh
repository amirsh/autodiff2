cd diffsharp
fsharpc -r ../DiffSharp Program.fs --define:NMF -o ../nmf_fsharp_for.exe
fsharpc -r ../DiffSharp Program.fs --define:NMF --define:REV_MODE -o ../nmf_fsharp_rev.exe
fsharpc -r ../DiffSharp Program.fs --define:BA -o ../ba_fsharp_for.exe
fsharpc -r ../DiffSharp Program.fs --define:BA --define:REV_MODE -o ../ba_fsharp_rev.exe
fsharpc -r ../DiffSharp Program.fs --define:ADD -o ../add_fsharp_for.exe
fsharpc -r ../DiffSharp Program.fs --define:ADD --define:REV_MODE -o ../add_fsharp_rev.exe
fsharpc -r ../DiffSharp Program.fs --define:DOT -o ../dot_fsharp_for.exe
fsharpc -r ../DiffSharp Program.fs --define:DOT --define:REV_MODE -o ../dot_fsharp_rev.exe
fsharpc -r ../DiffSharp Program.fs --define:MAX -o ../max_fsharp_for.exe
fsharpc -r ../DiffSharp Program.fs --define:MAX --define:REV_MODE -o ../max_fsharp_rev.exe
fsharpc -r ../DiffSharp Program.fs --define:MULTS -o ../mults_fsharp_for.exe
fsharpc -r ../DiffSharp Program.fs --define:MULTS --define:REV_MODE -o ../mults_fsharp_rev.exe
cd ..