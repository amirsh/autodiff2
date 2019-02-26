# ./nmf_diff.exe 200  100  1 5
# ./nmf_tap_rev.exe 200  100  1 5
# ./nmf_tap_for.exe 200  100  1 5
# python ./NMF.py exponential 200  100  1 5
# ./nmf_diff.exe 400  200  1 5
# ./nmf_tap_rev.exe 400  200  1 5
# ./nmf_tap_for.exe 400  200  1 5
# python ./NMF.py exponential 400  200  1 5
# python ./NMF.py exponential 8000  4000  8 5
# python ./NMF.py exponential 12000 6000  8 5

declare -a files=(
	"./nmf_tap_rev_unf.exe" "./nmf_tap_for_unf.exe"
	"./nmf_tap_rev.exe" "./nmf_tap_for.exe" 
	"./nmf_diff.exe" "./nmf_diff_dps.exe"
	"python ./NMF.py exponential"
	"mono nmf_fsharp_for.exe" 
	"mono nmf_fsharp_rev.exe"
	# "./nmf_poisson_tap_rev.exe" "./nmf_poisson_tap_for.exe" 
	# "./nmf_poisson_diff.exe" "./nmf_poisson_diff_dps.exe" 
	)

declare -a params=(
	"1000100" "2000100" "4000100" "8000100" "16000100" "32000100"
	"1000200" "1000400" "1000800" "1001600" "1003200"
	)

for p in "${params[@]}"
do
	echo "$p"
	for f in "${files[@]}"
	do
		echo "$f"
		eval "$f $p 10"
	done
done
