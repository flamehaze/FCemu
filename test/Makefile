HOME = `pwd`
OUTDIR = $(HOME)/../build/test
INCLUDE = $(HOME)/../include
CC = gcc
LINK = gcc -o
CFLAGS = -I$(INCLUDE) -c -o
OBJECTS = $(OUTDIR)/t1.o

all: $(OUTDIR) t1

$(OUTDIR):
	mkdir -p $@

t1: $(OBJECTS)
	$(LINK) $(OUTDIR)/$@ $(OBJECTS)

$(OUTDIR)/%.o: %.c
	$(CC) $(CFLAGS) $@ $<

.PHONEY:clean run
clean:
	@echo "clean test"
	rm -f $(OUTDIR)/*.o

run:
	$(OUTDIR)/t1
