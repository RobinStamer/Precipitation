include Makefile.inc

all: gui
	cd src; $(MAKE) $(MFLAGS)

gui:
	cd src/gui; qmake; make
