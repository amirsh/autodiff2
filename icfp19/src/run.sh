function get_params() {
	local prog;
	prog=$1
	local params;
	if [ $prog == "MULTS" ]; then
		params=("200" "400" "800" "1600" "3200" "6400" "12800" "25600");
	elif [ $prog == "ADD" ]; then
		params=("50" "100" "200" "400" "800" "1600" "3200" "6400");
	elif [ $prog == "DOT" ]; then
		params=("100" "200" "400" "800" "1600" "3200" "6400" "12800");
	elif [ $prog == "MAX" ]; then
		params=("800" "1600" "3200" "6400" "12800" "25600" "51200");
	elif [ $prog == "BA" ]; then
		params=("29" "47" "86" "161" "311" "611" "1211" "2411");
	elif [ $prog == "NMF" ]; then
		params=("1000100" "2000100" "4000100" "8000100" "16000100" "32000100"
				"1000200" "1000400" "1000800" "1001600" "1003200");
		
	fi
	declare -p params;
	# declare -p files;
}

function get_files() {
	local prog;
	prog=$1
	local files;
	if [ $prog == "MULTS" ]; then
		files=("./mults_tap_rev.exe" "./mults_tap_for.exe" "./mults_diff.exe" "./mults_diff_dps.exe" "python micro.py mults" "mono mults_fsharp_for.exe" "mono mults_fsharp_rev.exe");
	elif [ $prog == "ADD" ]; then
		files=("./add_tap_rev.exe" "./add_tap_for.exe" "./add_diff.exe" "./add_diff_dps.exe" "python micro.py add" "mono add_fsharp_for.exe" "mono add_fsharp_rev.exe");
	elif [ $prog == "DOT" ]; then
		files=("./dot_tap_rev.exe" "./dot_tap_for.exe" "./dot_diff.exe" "./dot_diff_dps.exe" "python micro.py dot" "mono dot_fsharp_for.exe" "mono dot_fsharp_rev.exe");
	elif [ $prog == "MAX" ]; then
		files=("./max_tap_rev.exe" "./max_tap_for.exe" "./max_diff.exe" "./max_diff_dps.exe" "python micro.py max" "mono max_fsharp_for.exe" "mono max_fsharp_rev.exe");
	elif [ $prog == "BA" ]; then
		files=("./ba_proj_tap_rev.exe" "./ba_proj_tap_for.exe"
			   "./ba_proj_diff_fused_nomotion.exe" "./ba_proj_diff_fused.exe" "./ba_proj_diff_fused_dps.exe"
			   "python micro.py ba" "mono ba_fsharp_for.exe" "mono ba_fsharp_rev.exe");
	elif [ $prog == "NMF" ]; then
		files=(	"./nmf_tap_rev_unf.exe" "./nmf_tap_for_unf.exe" "./nmf_diff_unopt.exe" "./nmf_diff.exe" "./nmf_diff_dps.exe"
				"python ./NMF.py exponential" "mono nmf_fsharp_for.exe" "mono nmf_fsharp_rev.exe");
		
	fi
	declare -p files;
}

function run_bench {
	prog=$1
	echo "Running $1"
	local files;
	local params;
	eval $(get_params $prog);
	eval $(get_files $prog);
	for p in "${params[@]}"
	do
		echo "$p"
		for f in "${files[@]}"
		do
			echo "$f"
			# eval "$f $p 10"
			eval "gtimeout 60 $f $p 10"
		done
	done
}

run_bench "MULTS"
run_bench "ADD"
run_bench "DOT"
run_bench "MAX"
run_bench "BA"
run_bench "NMF"