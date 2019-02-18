declare -a files=(
	# "./mults_tap_rev.exe" "./mults_tap_for.exe" "./mults_diff.exe" "./mults_diff_dps.exe" 
	# "./add_tap_rev.exe" "./add_tap_for.exe" "./add_diff.exe" "./add_diff_dps.exe" 
	# "./dot_tap_rev.exe" "./dot_tap_for.exe" "./dot_diff.exe" "./dot_diff_dps.exe"
	# "./max_tap_rev.exe" "./max_tap_for.exe" "./max_diff.exe" "./max_diff_dps.exe"
	# "./lse_tap_rev.exe" "./lse_tap_for.exe" "./lse_tap_fused_rev.exe" "./lse_tap_fused_for.exe" 
	# "./lse_diff.exe" "./lse_diff_dps.exe"
	# "./ba_rod_tap_rev.exe" "./ba_rod_tap_for.exe" #"./ba_rod_diff_fused_nounroll.exe" 
	# "./ba_rod_diff_fused_nomotion.exe" "./ba_rod_diff_fused.exe" "./ba_rod_diff_fused_dps.exe"
	"./ba_proj_tap_rev.exe" "./ba_proj_tap_for.exe"
	"./ba_proj_diff_fused_nomotion.exe" "./ba_proj_diff_fused.exe" "./ba_proj_diff_fused_dps.exe"
	)

declare -a params=(
	# "800" "1600" "3200" "6400" "12800" "25600" "51200"  # MULTS & DOT & MAX & LSE
	# "200" "400" "800" "1600" "3200" "6400" "12800" # ADD
	# "102400" "204800" "409600" "819200" "1638400" # nothing
	"86" "161" "311" "611" "1211" "2411" "4811" "9611" # BA_PROJ
	)

for p in "${params[@]}"
do
	echo "$p"
	for f in "${files[@]}"
	do
		echo "$f"
		eval "$f $p 10"
		# eval "gtimeout 10 $f $p 10" #LSE
	done
done
