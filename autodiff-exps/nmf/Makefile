REV_FOLDER=../tapanade/ADFirstAidKit
FLIB=-L /usr/local/lib/gcc/7/ -lgfortran $(REV_FOLDER)/adBuffer.c $(REV_FOLDER)/adStack.c
OPTS=-O3 -DBUMP -lm

all : 
	clang $(OPTS) nmf-main.c -o nmf_diff.exe
	clang $(OPTS) nmf-main.c -DDPS -o nmf_diff_dps.exe
	clang $(OPTS) nmf-main.c -DTAPENADE ../tapanade/submitted/3/default_d-all.c -o nmf_tap_for.exe
	clang $(OPTS) nmf-main.c -DTAPENADE -DREV_MODE $(FLIB) ../tapanade/submitted/3/default_b-all.c -o nmf_tap_rev.exe
	clang $(OPTS) nmf-main.c -DTAPENADE ../tapanade/submitted/4/default_d-all.c -o nmf_tap_for_unf.exe
	clang $(OPTS) nmf-main.c -DTAPENADE -DREV_MODE $(FLIB) ../tapanade/submitted/4/default_b-all.c -o nmf_tap_rev_unf.exe
	# clang $(OPTS) nmf-main.c -DTAPENADE -DREV_MODE -o nmf_tap_rev.exe
	# clang $(OPTS) nmf-main.c -DPOISSON -o nmf_poisson_diff.exe
	# clang $(OPTS) nmf-main.c -DDPS -DPOISSON -o nmf_poisson_diff_dps.exe
	# clang $(OPTS) nmf-main.c -DPOISSON -DTAPENADE ../tapanade/submitted/3/default_d-all.c -o nmf_poisson_tap_for.exe
	# clang $(OPTS) nmf-main.c -DPOISSON -DTAPENADE -DREV_MODE $(FLIB) ../tapanade/submitted/3/default_b-all.c -o nmf_poisson_tap_rev.exe