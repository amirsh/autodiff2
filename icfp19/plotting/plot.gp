set terminal pdf color dashed enhanced size 10,8
set datafile separator ','

pull_color = "#a6cee3"
push_color = "#fb9a99"
stream_s_color = "#cfb7c3"
stream_v_color = "#b2df8a"
pull_inter00_color = "#1f78b4"
pull_inter03_color = "#4C91C4"
pull_c_color = "#668ea3"
push_c_color = "#bb5a59"
stream_v_c_color = "#729f4a"
theano_color = "#CCC174"
df_motion = "#FCB164"

set style line 1 lc rgb push_color lw 6 pt 3
set style line 2 lc rgb pull_color lw 6 pt 3
set style line 3 lc rgb stream_s_color lw 6 pt 3
set style line 4 lc rgb stream_v_color lw 2 pt 12
set style line 5 lc rgb push_c_color lw 6 pt 3
set style line 6 lc rgb pull_c_color lw 6 pt 3
set style line 7 lc rgb theano_color lw 6 pt 3
set style line 8 lc rgb df_motion lw 2 pt 12
set style line 9 lc rgb "#fb5a59" lw 2 pt 12
set style line 10 lc rgb "#b68ea3" lw 6 pt 3

TapenadeR = "Tapenade (R)"
TapenadeF = "Tapenade (F)"
TapenadeRFused = "Tapenade (R) + Fused"
TapenadeFFused = "Tapenade (F) + Fused"
DiffSmooth = "dF\\~"
DiffSmoothMotionNN = "dF\\~ + CM"
DiffSmoothMotion = "dF\\~ + CM++"
DiffSmoothMotionDPS = "dF\\~ + CM++ + DPS"
DiffSmoothDPS = "dF\\~ + DPS"
Theano = "Theano"
DiffSharpF = "DiffSharp (F)"
DiffSharpR = "DiffSharp (R)"

# --- start common commands ---
set border 1+2
set xlabel font ", 24"
set ylabel font ", 24"
set title font ", 32"
set xtics font ", 24"
set ytics font ", 24"
set key font ", 24"
set ytics nomirror
set xtics nomirror
set rmargin at screen 0.975
set lmargin at screen 0.05
# --- end common commands ---

set key inside left top spacing 2 vertical maxrows 4 Left reverse opaque
#Left reverse horizontal maxcols 1 at screen 1.01, 0.96 opaque
#set boxwidth 0.8 relative

#set style data histogram 
#set style histogram cluster gap 1 

set ylabel "Run Time (ms)" offset 0,0
set xlabel "Vector Dimension"
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

set output 'add.pdf' 

set title "Jacobian of Vector Addition w.r.t. the First Vector"

plot 'data/add.csv' every ::1 using ($1):($8) title DiffSharpR ls 5, \
   'data/add.csv' every ::1 using ($1):($7) title DiffSharpF ls 6, \
   'data/add.csv' every ::1 using ($1):($2) title TapenadeR ls 1, \
   'data/add.csv' every ::1 using ($1):($3) title TapenadeF ls 2, \
   'data/add.csv' every ::1 using ($1):($6) title Theano ls 7, \
   'data/add.csv' every ::1 using ($1):($4) title DiffSmooth ls 3, \
   'data/add.csv' every ::1 using ($1):($5) title DiffSmoothDPS ls 4

set output 'mults.pdf' 

set title "Gradient of Vector-Scalar Multiplication w.r.t. Scalar"

plot 'data/mults.csv' every ::1 using ($1):($8) title DiffSharpR ls 5, \
   'data/mults.csv' every ::1 using ($1):($7) title DiffSharpF ls 6, \
   'data/mults.csv' every ::1 using ($1):($2) title TapenadeR ls 1, \
   'data/mults.csv' every ::1 using ($1):($3) title TapenadeF ls 2, \
   'data/mults.csv' every ::1 using ($1):($6) title Theano ls 7, \
   'data/mults.csv' every ::1 using ($1):($4) title DiffSmooth ls 3, \
   'data/mults.csv' every ::1 using ($1):($5) title DiffSmoothDPS ls 4


set output 'dot.pdf' 

set title "Gradient of Vector Dot Product w.r.t. the First Vector"

plot 'data/dot.csv' every ::1 using ($1):($8) title DiffSharpR ls 5, \
   'data/dot.csv' every ::1 using ($1):($7) title DiffSharpF ls 6, \
   'data/dot.csv' every ::1 using ($1):($2) title TapenadeR ls 1, \
   'data/dot.csv' every ::1 using ($1):($3) title TapenadeF ls 2, \
   'data/dot.csv' every ::1 using ($1):($6) title Theano ls 7, \
   'data/dot.csv' every ::1 using ($1):($4) title DiffSmooth ls 3, \
   'data/dot.csv' every ::1 using ($1):($5) title DiffSmoothDPS ls 4

set output 'max.pdf' 

set title "Gradient of Vector Max w.r.t. the Input Vector"

plot 'data/max.csv' every ::1 using ($1):($8) title DiffSharpR ls 5, \
   'data/max.csv' every ::1 using ($1):($7) title DiffSharpF ls 6, \
   'data/max.csv' every ::1 using ($1):($2) title TapenadeR ls 1, \
   'data/max.csv' every ::1 using ($1):($3) title TapenadeF ls 2, \
   'data/max.csv' every ::1 using ($1):($6) title Theano ls 7, \
   'data/max.csv' every ::1 using ($1):($4) title DiffSmooth ls 3, \
   'data/max.csv' every ::1 using ($1):($5) title DiffSmoothDPS ls 4

set output 'ba.pdf' 

set title "Jacobian of Project in Bundle Adjustment"

plot 'data/ba.csv' every ::1 using ($1):($10) title DiffSharpR ls 5, \
   'data/ba.csv' every ::1 using ($1):($9) title DiffSharpF ls 6, \
   'data/ba.csv' every ::1 using ($1):($2) title TapenadeR ls 1, \
   'data/ba.csv' every ::1 using ($1):($3) title TapenadeF ls 2, \
   'data/ba.csv' every ::1 using ($1):($8) title Theano ls 7, \
   'data/ba.csv' every ::1 using ($1):($4) title DiffSmooth ls 3, \
   'data/ba.csv' every ::1 using ($1):($5) title DiffSmoothMotionNN ls 9, \
   'data/ba.csv' every ::1 using ($1):($6) title DiffSmoothMotion ls 8, \
   'data/ba.csv' every ::1 using ($1):($7) title DiffSmoothMotionDPS ls 4, \

set xlabel "Dimension (K)"

set output 'nmf_1.pdf' 

set title "Non-Negative Matrix Factorization -- Dimension of A: 100 x K"

plot 'data/nmf.csv' every ::1::6 using ($1):($10) title DiffSharpR ls 5, \
   'data/nmf.csv' every ::1::6 using ($1):($9) title DiffSharpF ls 6, \
   'data/nmf.csv' every ::1::6 using ($1):($2) title TapenadeR ls 1, \
   'data/nmf.csv' every ::1::6 using ($1):($3) title TapenadeF ls 2, \
   'data/nmf.csv' every ::1::6 using ($1):($8) title Theano ls 7, \
   'data/nmf.csv' every ::1::6 using ($1):($4) title DiffSmooth ls 3, \
   'data/nmf.csv' every ::1::6 using ($1):($5) title DiffSmoothMotionNN ls 9, \
   'data/nmf.csv' every ::1::6 using ($1):($6) title DiffSmoothMotion ls 8, \
   'data/nmf.csv' every ::1::6 using ($1):($7) title DiffSmoothMotionDPS ls 4

set output 'nmf_2.pdf' 

set title "Non-Negative Matrix Factorization -- Dimension of A: K x 100"

plot 'data/nmf.csv' every ::7 using ($1):($10) title DiffSharpR ls 5, \
   'data/nmf.csv' every ::7 using ($1):($9) title DiffSharpF ls 6, \
   'data/nmf.csv' every ::7 using ($1):($2) title TapenadeR ls 1, \
   'data/nmf.csv' every ::7 using ($1):($3) title TapenadeF ls 2, \
   'data/nmf.csv' every ::7 using ($1):($8) title Theano ls 7, \
   'data/nmf.csv' every ::7 using ($1):($4) title DiffSmooth ls 3, \
   'data/nmf.csv' every ::7 using ($1):($5) title DiffSmoothMotionNN ls 9, \
   'data/nmf.csv' every ::7 using ($1):($6) title DiffSmoothMotion ls 8, \
   'data/nmf.csv' every ::7 using ($1):($7) title DiffSmoothMotionDPS ls 4