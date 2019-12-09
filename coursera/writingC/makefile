# https://www.gnu.org/software/make/manual/

CFLAGS=-std=gnu99 -pedantic -Wall
myProgram: oneFile.o anotherFile.o
	gcc -o myProgram.exe oneFile.o anotherFile.o
#oneFile.o: oneFile.c oneHeader.h someHeader.h
#	gcc $(CFLAGS) -c oneFile.c
#anotherFile.o: anotherFile.c anotherHeader.h someHeader.h
#	gcc $(CFLAGS) -c anotherFile.c
# Simplify:
%.o: %.c
	gcc $(CFLAGS) -c $<
oneFile.o: oneHeader.h someHeader.h
anotherFile.o: anotherHeader.h someHeader.h

.PHONY: clean
clean:
	rm -f myProgram.exe *.o *.c~ *.h~



# more advanced
CC=gcc
CFLAGS=-std=gnu99 -pedantic -Wall
SRCS=$(wildcard *.c)
OBJS=$(patsubst %.c,%.o,$(SRCS))
myProgram: $(OBJS)
	gcc -o $@ $(OBJS)
.PHONY: clean depend
clean:
	rm -f myProgram.exe *.o *.c~ *.h~
depend:
	makedepend $(SRCS)
# DO NOT DELETE
anotherFile.o: anotherHeader.h someHeader.h
oneFile.o: oneHeader.h someHeader.h



# even more advanced
CC=gcc
CFLAGS=-std=gnu99 -pedantic -Wall -O3
DBGFLAGS=-std=gnu99 -pedantic -Wall -ggdb3 -DDEBUG
SRCS=$(wildcard *.c)
OBJS=$(patsubst %.c,%.o,$(SRCS))
DBGOBJS=$(patsubst %.c, %.dbg.o,$(SRCS))
.PHONY: clean depend all
all: myProgram myProgram-debug
myProgram: $(OBJS)
	gcc -o $@ -O3 $(OBJS)
myProgram-debug: $(DBGOBJS)
	gcc -o $@ -ggdb3 $(DBGOBJS)
%.dbg.o: %.c
	gcc $(DBGFLAGS) -c -o $@ $<
clean:
	rm -f myProgram myProgram-debug *.o *.c~ *.h~
depend:
	makedepend $(SRCS)
	makedepend -a -o .dbg.o $(SRCS)
# DO NOT DELETE
anotherFile.o: anotherHeader.h someHeader.h
oneFile.o: oneHeader.h someHeader.h
