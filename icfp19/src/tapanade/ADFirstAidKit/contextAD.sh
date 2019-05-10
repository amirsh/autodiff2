#!/bin/sh

if [ ! $# -eq 1 ]
then
echo "contextAD.sh: missing file operand"
exit 1
fi

TRACE=$1

if [ ! -f $TRACE ]
then
echo "contextAD.sh: "$TRACE": No such file "
exit 1
fi

INITVAR=`grep init $TRACE | sort -u | grep of | awk '{print $3}' | awk 'BEGIN{FS=","} {print $1}' `
CONCVAR=`grep conclude $TRACE | sort -u | awk '{print $3}' | awk 'BEGIN{FS=":"} {print $1}' `

PERTURBED_RESULT=`grep perturbed $TRACE | tail -1 | awk '{print $6}' `
RESULT=`grep "Condensed result" $TRACE | tail -1 | awk '{print $5}' `
TANGENT=`grep tangent $TRACE | tail -1 | awk '{print $4}' `
ADJOINT=`grep adjoint $TRACE | tail -1 | awk '{print $4}' `


echo "PERTURBED_RESULT" $PERTURBED_RESULT
echo "PERTURBED       " $RESULT
echo "TANGENT         " $TANGENT
echo "ADJOINT         " $ADJOINT

EPSILON=`grep run $TRACE | tail -1 | grep epsilon | awk 'BEGIN{FS="="}  {print $3}'`

FEP=${PERTURBED_RESULT/[eE][+][0]/*10^}
FEP=${FEP/[eE][-][0]/*10^-}
F=${RESULT/[eE][+][0]/*10^}
F=${F/[eE][-][0]/*10^-}
TGT=${TANGENT/[eE][+][0]/*10^}
TGT=${TGT/[eE][-][0]/*10^-}
ADJ=${ADJOINT/[eE][+][0]/*10^}
ADJ=${ADJ/[eE][-][0]/*10^-}

EPS_INV=${EPSILON/[eE][-][0]/*10^}

echo "Derivatives of " $CONCVAR " with respect to " $INITVAR
echo -n "Divided differences "
echo "(("$FEP - $F")" "*" $EPS_INV ")" | bc -l

echo -n "Condensed tangent   " 
echo $TGT | bc -l

echo -n "Condensed adjoint   " 
echo $ADJ | bc -l
