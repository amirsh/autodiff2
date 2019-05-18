PROG=$1

futhark bench $PROG.fut > futhark_$PROG.txt
