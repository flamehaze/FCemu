HOME = `pwd`
OUTDIR = $(HOME)/../build
INCLUDE = $(HOME)/../include
INCLUDE_FILES = $(wildcard *.h)
CC = gcc
LINK = gcc -o
MAKE = make
CFLAGS = -I$(INCLUDE) -c -o
TARGET = $(OUTDIR)/FCemu
THIS_OBJECTS = $(OUTDIR)/common.o $(OUTDIR)/initcall.o $(OUTDIR)/main_wraper.o $(OUTDIR)/mainloop.o
OBJECTS = $(shell find ${OUTDIR} -maxdepth 1 -name *.o)

all: $(OUTDIR) pre $(TARGET)

$(OUTDIR):
	mkdir -p $@


pre: $(THIS_OBJECTS)
	$(MAKE) -C ALU

	
$(TARGET): $(OBJECTS)
	$(LINK) $(TARGET) $(OBJECTS)
	echo "DONE."	


# ======== This directory objects ========
$(OUTDIR)/%.o: %.c $(INCLUDE_FILES)
	$(CC) $(CFLAGS) $@ $<


.PHONEY:clean run
clean:
	@echo "clean test"
	rm -f $(OUTDIR)/*.o

run:
	$(OUTDIR)/FCemu
