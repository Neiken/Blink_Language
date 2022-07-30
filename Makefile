BLOI_OUTPUT=bloi
TEST_OUTPUT=test

BLOI_MAIN=bloi.c
TEST_MAIN=test.c

CFILES=$(wildcard source/*.c)
OFILES=$(CFILES:source/%.c=source/objects/%.o)

COMPILER=clang

FLAGS=
OFLAGS=

all: $(BLOI_OUTPUT)
	@ mv $< ~/../usr/bin/
	@ rm -rf $(OFILES)

%.o: ../%.c
	@ $(COMPILER) -c $< -o $@ $(OFLAGS)

$(BLOI_OUTPUT): $(BLOI_MAIN) $(OFILES)
	@ $(COMPILER) $< -o $@ $(OFILES) $(FLAGS)

test: $(TEST_MAIN) $(OFILES)
	@ $(COMPILER) $< -o $(TEST_OUTPUT) $(OFILES) $(FLAGS)

clean: 
	@ rm -rf $(OFILES) $(TEST_OUTPUT)
