# ANSI:
# CFLAGS+=-DLUA_ANSI
#
# GENERIC:
# CFLAGS+=
#
# POSIX:
# CFLAGS+=-DLUA_USE_POSIX

CC=gcc
CFLAGS=-O2 -Wall -ansi -pedantic
AR=ar rcu
RANLIB=ranlib
RM=rm -f

OBJECTS=\
	lapi.o \
	lcode.o \
	ldebug.o \
	ldo.o \
	ldump.o \
	lfunc.o \
	lgc.o \
	llex.o \
	lmem.o \
	lobject.o \
	lopcodes.o \
	lparser.o \
	lstate.o \
	lstring.o \
	ltable.o \
	ltm.o \
	lundump.o \
	lvm.o \
	lzio.o \
	lauxlib.o \
	lbaselib.o \
	ldblib.o \
	liolib.o \
	lmathlib.o \
	loslib.o \
	ltablib.o \
	lstrlib.o \
	loadlib.o \
	linit.o

all : liblua.a

liblua.a : $(OBJECTS)
	$(AR) $@ $?
	$(RANLIB) $@

clean:
	$(RM) *.o *.a

%.o : %.c
	$(CC) -o $@ -c $< $(CFLAGS)

