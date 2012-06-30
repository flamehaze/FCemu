HOME = `pwd`
OUTDIR = $(HOME)/../../build
INCLUDE = $(HOME)/../../include
INCLUDE_FILES = $(wildcard *.h)
CC = gcc
LINK = gcc -o
MAKE = make
CFLAGS = -I$(INCLUDE) -c -o
THIS_OBJECTS = $(OUTDIR)/alu_emu.o

all: $(THIS_OBJECTS)


# ======== This directory objects ========
$(OUTDIR)/%.o: %.c $(INCLUDE_FILES)
	$(CC) $(CFLAGS) $@ $<


