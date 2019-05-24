PROG=$1
PARAM=$2

if [[ $PROG == "ba" || $PROG == "max" ]]; then
	RES=$(cat futhark/futhark_$PROG.txt | grep "\[$PARAM\]" | awk '{print $3}' | cut -d'μ' -f 1)
elif [[ $PROG == "add" || $PROG == "dot" || $PROG == "mults" ]]; then
	RES=$(cat futhark/futhark_$PROG.txt | grep "\[$PARAM\]" | awk '{print $4}' | cut -d'μ' -f 1)
else
	M=$(($PARAM / 10000))
	N=$(($PARAM % 10000))
	RES=$(cat futhark/futhark_$PROG.txt | grep "\[$M\]\[$N\]" | awk '{print $5}' | cut -d'μ' -f 1)
fi

RES=$(echo "scale=6 ; $RES / 1000" | bc)

echo "total =500.000000, time per call = $RES ms"