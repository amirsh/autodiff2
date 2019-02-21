REV_FOLDER=../tapanade/ADFirstAidKit
FLIB=-L /usr/local/lib/gcc/7/ -lgfortran $(REV_FOLDER)/adBuffer.c $(REV_FOLDER)/adStack.c
OPTS=-O3 -DBUMP -lm

all : ba_proj micro 

clean:
	rm *.exe

define micro_bench
	clang $(OPTS) micro-main.c -D$1 -o $2_diff.exe
	clang $(OPTS) micro-main.c -D$1 -DDPS -o $2_diff_dps.exe
	clang $(OPTS) micro-main.c -D$1 -DTAPENADE -o $2_tap_for.exe
	clang $(OPTS) micro-main.c -D$1 -DTAPENADE -DREV_MODE $(FLIB) -o $2_tap_rev.exe
endef

micro :
	$(call micro_bench,MULTS,mults)
	$(call micro_bench,ADD,add)
	$(call micro_bench,DOT,dot)
	$(call micro_bench,VEC_MAX,max)
	$(call micro_bench,LSE,lse)
	clang $(OPTS) micro-main.c -DLSE -DTAPENADE -DFUSED -o lse_tap_fused_for.exe
	clang $(OPTS) micro-main.c -DLSE -DTAPENADE -DFUSED -DREV_MODE $(FLIB) -o lse_tap_fused_rev.exe

ba_proj :
	clang $(OPTS) micro-main.c -DBA_PROJ -DFUSED -o ba_proj_diff_fused.exe
	clang $(OPTS) micro-main.c -DBA_PROJ -DFUSED -DNOMOTION -o ba_proj_diff_fused_nomotion.exe
	clang $(OPTS) micro-main.c -DBA_PROJ -DFUSED -DDPS -o ba_proj_diff_fused_dps.exe
	clang $(OPTS) micro-main.c -DBA_PROJ -DTAPENADE -o ba_proj_tap_for.exe
	clang $(OPTS) micro-main.c -DBA_PROJ -DTAPENADE -DREV_MODE $(FLIB) -o ba_proj_tap_rev.exe