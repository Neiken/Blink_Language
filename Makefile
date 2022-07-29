BLOI_OUTPUT=bloi

BLOI_MAIN=bloi.c

CFILES=$(wildcard source/*.c)
OFILES=$(CFILES:source/%.c=source/objects/%.o)

COMPILER=clang

FLAGS=
OFLAGS=

all: $(BLOI_OUTPUT)
	@ mv $< ~/../usr/bin/

%.o: ../%.c
	@ $(COMPILER) -c $< -o $@ $(OFLAGS)

$(BLOI_OUTPUT): $(BLOI_MAIN) $(OFILES)
	$(COMPILER) $< -o $@ $(OFILES) $(FLAGS)
