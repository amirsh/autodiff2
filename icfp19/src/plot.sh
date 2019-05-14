cd ../plotting
scala ExtractCSV.scala add.txt > data/add.csv
scala ExtractCSV.scala max.txt > data/max.csv
scala ExtractCSV.scala dot.txt > data/dot.csv
scala ExtractCSV.scala mults.txt > data/mults.csv
scala ExtractCSV.scala ba.txt > data/ba.csv
scala ExtractCSV.scala nmf.txt > data/nmf.csv
gnuplot plot.gp
cd ../src