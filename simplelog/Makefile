CFLAGS+=-g -fPIC -shared -Wall -Wl,--out-implib,libsimplelog.lib -D__SIMPLE_STATIC_LOG__ -static-libgcc
CFLAGS_R+=-fPIC -shared -Wall -Wl,--out-implib,libsimplelog.lib -D__SIMPLE_STATIC_LOG__ -static-libgcc
SRC=simplelog.c
CC=gcc
TARGET=libsimplelog.dll
debug:
	${CC} -o ${TARGET} ${CFLAGS}
release:
	${CC} -o ${TARGET} ${CFLAGS_R}
clean:
	rm -f *.lib *.dll