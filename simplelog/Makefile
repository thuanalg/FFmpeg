CFLAGS+=-g -fPIC -shared -Wall -Wl,--out-implib,libsimplelog.lib -D__SIMPLE_STATIC_LOG__ -static-libgcc
CFLAGS_R+=-fPIC -shared -Wall -Wl,--out-implib,libsimplelog.lib -D__SIMPLE_STATIC_LOG__ -static-libgcc
SRC=src/simplelog.c
INCL=-I./include
CC=gcc
TARGET=libsimplelog.dll
debug:
	${CC} -o ${TARGET} ${CFLAGS} ${INCL}
release:
	${CC} -o ${TARGET} ${CFLAGS_R} ${INCL}
clean:
	rm -f *.lib *.dll