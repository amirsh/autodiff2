declare -a files=(
	"./ba_tap_for_all.exe" 
	"./ba_diff.exe" "./ba_diff_fused.exe" "./ba_diff_fused_dps.exe"
	)

for f in "${files[@]}"
do
	echo "$f"
	eval "$f ../ba_instances/ ../results_ad/ ba3 1 5"
done
