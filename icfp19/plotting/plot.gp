set terminal pdf color dashed enhanced size 10,8
set datafile separator ','

TapenadeF_color = "#a6cee3"
TapenadeR_color = "#fb9a99"
DiffSmooth_color = "#cfb7c3"
DiffSmoothDPS_color = "#b2df8a"
pull_inter00_color = "#1f78b4"
pull_inter03_color = "#4C91C4"
DiffSharpF_Color = "#668ea3"
DiffSharpR_Color = "#bb5a59"
stream_v_c_color = "#729f4a"
Theano_color = "#CCC174"
DiffSmoothMotion_color = "#FCB164"
DiffSmoothMotionNN_color = "#ab0610"
DiffSmoothFusion_color = "#228822"
Futhark_color = "#222299"
Tensorflow_color = "#9b3a9b"

set style line 1 lc rgb TapenadeR_color lw 4 pt 12
set style line 2 lc rgb TapenadeF_color lw 4 pt 12
set style line 3 lc rgb DiffSmooth_color lw 6 pt 12 #dashtype 2
set style line 4 lc rgb DiffSmoothDPS_color lw 4 pt 3
set style line 5 lc rgb DiffSharpR_Color lw 4 pt 3
set style line 6 lc rgb DiffSharpF_Color lw 4 pt 3
set style line 7 lc rgb Theano_color lw 4 pt 3
set style line 8 lc rgb DiffSmoothMotion_color lw 6 pt 12 #dashtype 2
set style line 9 lc rgb DiffSmoothMotionNN_color lw 6 pt 12 #dashtype 4
set style line 10 lc rgb DiffSmoothFusion_color lw 6 pt 12 #dashtype 2
set style line 11 lc rgb Futhark_color lw 4 pt 3
set style line 12 lc rgb Tensorflow_color lw 4 pt 3

TapenadeR = "Tapenade (R)"
TapenadeF = "Tapenade (F)"
DiffSmooth = "dF\\~"
DiffSmoothFusion = "dF\\~ + LF"
DiffSmoothMotionNN = DiffSmoothFusion." + LICM"
DiffSmoothMotion = DiffSmoothMotionNN." + LN"
DiffSmoothMotionDPS = DiffSmoothMotion." + DPS"
DiffSmoothDPS = "dF\\~ + DPS"
DiffSmoothOptDPS = "dF\\~ (Opt) + DPS"
DiffSmoothOpt = "dF\\~ (Opt)"
Theano = "Theano"
Futhark = "Futhark"
DiffSharpF = "DiffSharp (F)"
DiffSharpR = "DiffSharp (R)"
Tensorflow = "TensorFlow"

# --- start common commands ---
set border 1+2
set xlabel font ", 32"
set ylabel font ", 32"
set title font ", 48"
set xtics font ", 32"
set ytics font ", 32"
set key font ", 28"
set ytics nomirror
set xtics nomirror
set rmargin at screen 0.975
set lmargin at screen 0.05
set format y "10^{%L}"
# --- end common commands ---

set key inside left top spacing 2 vertical maxrows 4 Left reverse opaque
#Left reverse horizontal maxcols 1 at screen 1.01, 0.96 opaque
#set boxwidth 0.8 relative

#set style data histogram 
#set style histogram cluster gap 1 

set ylabel "Run Time (ms)" offset -5,0
set xlabel "Vector Dimension" offset 0,-2
set xtics auto
set ytics auto
set logscale y
set logscale x
set autoscale fix

set grid ytics
unset mytics
set lmargin at screen 0.06
set rmargin at screen 0.98

set bmargin at screen 0.1
set tmargin at screen 0.9

#set style fill solid noborder


set style data linespoints

set output 'dot.pdf' 

set title "Gradient of Vector Dot Product w.r.t. the First Vector"

plot 'data/dot.csv' every ::1 using ($1):($8) title DiffSharpR ls 5, \
   'data/dot.csv' every ::1 using ($1):($7) title DiffSharpF ls 6, \
   'data/dot.csv' every ::1 using ($1):($2) title TapenadeR ls 1, \
   'data/dot.csv' every ::1 using ($1):($3) title TapenadeF ls 2, \
   'data/dot.csv' every ::1 using ($1):($6) title Theano ls 7, \
   'data/dot.csv' every ::1 using ($1):($10) title Tensorflow ls 12, \
   'data/dot.csv' every ::1 using ($1):($9) title Futhark ls 11, \
   'data/dot.csv' every ::1 using ($1):($4) title DiffSmoothOpt ls 3, \
   'data/dot.csv' every ::1 using ($1):($5) title DiffSmoothOptDPS ls 4

unset key

set output 'add.pdf' 

set title "Jacobian of Vector Addition w.r.t. the First Vector"

plot 'data/add.csv' every ::1 using ($1):($8) title DiffSharpR ls 5, \
   'data/add.csv' every ::1 using ($1):($7) title DiffSharpF ls 6, \
   'data/add.csv' every ::1 using ($1):($2) title TapenadeR ls 1, \
   'data/add.csv' every ::1 using ($1):($3) title TapenadeF ls 2, \
   'data/add.csv' every ::1 using ($1):($6) title Theano ls 7, \
   'data/add.csv' every ::1 using ($1):($10) title Tensorflow ls 12, \
   'data/add.csv' every ::1 using ($1):($9) title Futhark ls 11, \
   'data/add.csv' every ::1 using ($1):($4) title DiffSmoothOpt ls 3, \
   'data/add.csv' every ::1 using ($1):($5) title DiffSmoothOptDPS ls 4

set output 'mults.pdf' 

set title "Gradient of Vector-Scalar Multiplication w.r.t. Scalar"

plot 'data/mults.csv' every ::1 using ($1):($8) title DiffSharpR ls 5, \
   'data/mults.csv' every ::1 using ($1):($7) title DiffSharpF ls 6, \
   'data/mults.csv' every ::1 using ($1):($2) title TapenadeR ls 1, \
   'data/mults.csv' every ::1 using ($1):($3) title TapenadeF ls 2, \
   'data/mults.csv' every ::1 using ($1):($6) title Theano ls 7, \
   'data/mults.csv' every ::1 using ($1):($10) title Tensorflow ls 12, \
   'data/mults.csv' every ::1 using ($1):($9) title Futhark ls 11, \
   'data/mults.csv' every ::1 using ($1):($4) title DiffSmoothOpt ls 3, \
   'data/mults.csv' every ::1 using ($1):($5) title DiffSmoothOptDPS ls 4

set output 'max.pdf' 

set title "Gradient of Vector Max w.r.t. the Input Vector"

plot 'data/max.csv' every ::1 using ($1):($8) title DiffSharpR ls 5, \
   'data/max.csv' every ::1 using ($1):($7) title DiffSharpF ls 6, \
   'data/max.csv' every ::1 using ($1):($2) title TapenadeR ls 1, \
   'data/max.csv' every ::1 using ($1):($3) title TapenadeF ls 2, \
   'data/max.csv' every ::1 using ($1):($6) title Theano ls 7, \
   'data/max.csv' every ::1 using ($1):($10) title Tensorflow ls 12, \
   'data/max.csv' every ::1 using ($1):($9) title Futhark ls 11, \
   'data/max.csv' every ::1 using ($1):($4) title DiffSmoothOpt ls 3, \
   'data/max.csv' every ::1 using ($1):($5) title DiffSmoothOptDPS ls 4

set key on

set yrange [0.001:1000000];

set output 'ba.pdf' 

set title "Jacobian of Project in Bundle Adjustment"

plot 'data/ba.csv' every ::1 using ($1):($11) title DiffSharpR ls 5, \
   'data/ba.csv' every ::1 using ($1):($10) title DiffSharpF ls 6, \
   'data/ba.csv' every ::1 using ($1):($2) title TapenadeR ls 1, \
   'data/ba.csv' every ::1 using ($1):($3) title TapenadeF ls 2, \
   'data/ba.csv' every ::1 using ($1):($9) title Theano ls 7, \
   'data/ba.csv' every ::1 using ($1):($13) title Tensorflow ls 12, \
   'data/ba.csv' every ::1 using ($1):($12) title Futhark ls 11, \
   'data/ba.csv' every ::1 using ($1):($8) title DiffSmoothOptDPS ls 4, \

set output 'ba_df.pdf' 

set title "Jacobian of Project in Bundle Adjustment"

plot 'data/ba.csv' every ::1 using ($1):($4) title DiffSmooth ls 3, \
   'data/ba.csv' every ::1 using ($1):($5) title DiffSmoothFusion ls 10, \
   'data/ba.csv' every ::1 using ($1):($6) title DiffSmoothMotionNN ls 9, \
   'data/ba.csv' every ::1 using ($1):($7) title DiffSmoothMotion ls 8, \
   'data/ba.csv' every ::1 using ($1):($8) title DiffSmoothMotionDPS ls 4, \

set xlabel "Dimension (K)"

unset key

set yrange [0.01:100000];

set output 'nmf_1.pdf' 

set title "Non-Negative Matrix Factorization -- Dimension of A: 100 x K"

plot 'data/nmf.csv' every ::1::6 using ($1):($11) title DiffSharpR ls 5, \
   'data/nmf.csv' every ::1::6 using ($1):($10) title DiffSharpF ls 6, \
   'data/nmf.csv' every ::1::6 using ($1):($2) title TapenadeR ls 1, \
   'data/nmf.csv' every ::1::6 using ($1):($3) title TapenadeF ls 2, \
   'data/nmf.csv' every ::1::6 using ($1):($9) title Theano ls 7, \
   'data/nmf.csv' every ::1::6 using ($1):($13) title Tensorflow ls 12, \
   'data/nmf.csv' every ::1::6 using ($1):($12) title Futhark ls 11, \
   'data/nmf.csv' every ::1::6 using ($1):($8) title DiffSmoothOptDPS ls 4

set output 'nmf_1_df.pdf' 

set title "Non-Negative Matrix Factorization -- Dimension of A: 100 x K"

plot 'data/nmf.csv' every ::1::6 using ($1):($4) title DiffSmooth ls 3, \
   'data/nmf.csv' every ::1::6 using ($1):($5) title DiffSmoothFusion ls 10, \
   'data/nmf.csv' every ::1::6 using ($1):($6) title DiffSmoothMotionNN ls 9, \
   'data/nmf.csv' every ::1::6 using ($1):($7) title DiffSmoothMotion ls 8, \
   'data/nmf.csv' every ::1::6 using ($1):($8) title DiffSmoothMotionDPS ls 4

set key on

set yrange [0.1:1000000];

set output 'nmf_2.pdf' 

set title "Non-Negative Matrix Factorization -- Dimension of A: K x 100"

plot 'data/nmf.csv' every ::7 using ($1):($11) title DiffSharpR ls 5, \
   'data/nmf.csv' every ::7 using ($1):($10) title DiffSharpF ls 6, \
   'data/nmf.csv' every ::7 using ($1):($2) title TapenadeR ls 1, \
   'data/nmf.csv' every ::7 using ($1):($3) title TapenadeF ls 2, \
   'data/nmf.csv' every ::7 using ($1):($9) title Theano ls 7, \
   'data/nmf.csv' every ::7 using ($1):($13) title Tensorflow ls 12, \
   'data/nmf.csv' every ::7 using ($1):($12) title Futhark ls 11, \
   'data/nmf.csv' every ::7 using ($1):($8) title DiffSmoothOptDPS ls 4

set output 'nmf_2_df.pdf' 

set title "Non-Negative Matrix Factorization -- Dimension of A: K x 100"

plot 'data/nmf.csv' every ::7 using ($1):($4) title DiffSmooth ls 3, \
   'data/nmf.csv' every ::7 using ($1):($5) title DiffSmoothFusion ls 10, \
   'data/nmf.csv' every ::7 using ($1):($6) title DiffSmoothMotionNN ls 9, \
   'data/nmf.csv' every ::7 using ($1):($7) title DiffSmoothMotion ls 8, \
   'data/nmf.csv' every ::7 using ($1):($8) title DiffSmoothMotionDPS ls 4
