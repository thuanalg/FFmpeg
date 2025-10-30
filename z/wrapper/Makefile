PREFIX_SRC=/D/x/algorithms_net/xffmpeg/resource/src
INC=-I/D/x/algorithms_net/xffmpeg/resource/include
LIBS=-L/usr/local/lib -lavcodec -lavdevice -lavutil -lavformat -lswscale -lswresample -lavfilter -L/mingw64/lib/ -lSDL2main -lSDL2 -lsimplelog 
FFWR_FLAGS=-DEXPORT_DLL_API_FFWR_RENDER
SOURCES=${PREFIX_SRC}/ffwr_render.c
TARGET=libffwr_render

all:
	gcc -shared -o ${TARGET}.dll ${SOURCES} -Wl,--out-implib,${TARGET}.a  ${INC} ${FFWR_FLAGS} ${LIBS}
	gendef ${TARGET}.dll
	dlltool -d ${TARGET}.def -l ${TARGET}.lib -D ${TARGET}.dll
	mv ${TARGET}.* out
clean:
	rm -rf out/${TARGET}.*