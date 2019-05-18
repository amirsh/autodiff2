REV_FOLDER=tapanade/ADFirstAidKit
FLIB=-L /usr/local/lib/gcc/9/ -lgfortran $(REV_FOLDER)/adBuffer.c $(REV_FOLDER)/adStack.c
OPTS=-O3 -DBUMP -lm

all : ba micro nmf
.PHONY: all 

clean:
	rm *.exe

define micro_bench
	clang $(OPTS) micro-main.c -D$1 -o $2_diff.exe
	clang $(OPTS) micro-main.c -D$1 -DDPS -o $2_diff_dps.exe
	clang $(OPTS) micro-main.c -D$1 -DTAPENADE -o $2_tap_for.exe
	clang $(OPTS) micro-main.c -D$1 -DTAPENADE -DREV_MODE $(FLIB) -o $2_tap_rev.exe
endef

micro : micro-main.c
	$(call micro_bench,MULTS,mults)
	$(call micro_bench,ADD,add)
	$(call micro_bench,DOT,dot)
	$(call micro_bench,VEC_MAX,max)

ba : micro-main.c
	clang $(OPTS) micro-main.c -DBA_PROJ -o ba_proj_diff.exe
	clang $(OPTS) micro-main.c -DBA_PROJ -DNOFUSION -o ba_proj_diff_nofusion.exe
	clang $(OPTS) micro-main.c -DBA_PROJ -DNOMOTION -o ba_proj_diff_nomotion.exe
	clang $(OPTS) micro-main.c -DBA_PROJ -DNONMOTION -o ba_proj_diff_nonmotion.exe
	clang $(OPTS) micro-main.c -DBA_PROJ -DDPS -o ba_proj_diff_dps.exe
	clang $(OPTS) micro-main.c -DBA_PROJ -DTAPENADE -o ba_proj_tap_for.exe
	clang $(OPTS) micro-main.c -DBA_PROJ -DTAPENADE -DREV_MODE $(FLIB) -o ba_proj_tap_rev.exe

nmf : nmf-main.c
	clang $(OPTS) nmf-main.c -o nmf_diff.exe
	clang $(OPTS) nmf-main.c -DNOFUSION -o nmf_diff_nofusion.exe
	clang $(OPTS) nmf-main.c -DNOMOTION -o nmf_diff_nomotion.exe
	clang $(OPTS) nmf-main.c -DNONMOTION -o nmf_diff_nonmotion.exe
	clang $(OPTS) nmf-main.c -DDPS -o nmf_diff_dps.exe
	clang $(OPTS) nmf-main.c -DTAPENADE tapanade/submitted/3/default_d-all.c -o nmf_tap_for.exe
	clang $(OPTS) nmf-main.c -DTAPENADE -DREV_MODE $(FLIB) tapanade/submitted/3/default_b-all.c -o nmf_tap_rev.exe
	clang $(OPTS) nmf-main.c -DTAPENADE tapanade/submitted/4/default_d-all.c -o nmf_tap_for_unf.exe
	clang $(OPTS) nmf-main.c -DTAPENADE -DREV_MODE $(FLIB) tapanade/submitted/4/default_b-all.c -o nmf_tap_rev_unf.exe