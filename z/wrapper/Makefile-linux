PREFIX_SRC=/D/x/algorithms_net/xffmpeg/resource/src
INC=-I/D/x/algorithms_net/xffmpeg/resource/include
INC+= -I/usr/local/include
INC1=-I/D/x/algorithms_net/xffmpeg/resource/include
LIBS=-L/usr/local/lib -lavcodec -lavdevice -lavutil -lavformat -lswscale -lswresample -lavfilter -L/mingw64/lib/ -lSDL2main -lSDL2 -lsimplelog 
LIB1S=-L./out -lffwr_render -lsimplelog 
FFWR_FLAGS=-DEXPORT_DLL_API_FFWR_RENDER
SOURCES=${PREFIX_SRC}/ffwr_render.c
TARGET=libffwr_render
TARGET_TEST=main

all:
	gcc -g -shared -o ${TARGET}.dll ${SOURCES} -Wl,--out-implib,${TARGET}.a  ${INC} ${FFWR_FLAGS} ${LIBS}
	gendef ${TARGET}.dll
	dlltool -d ${TARGET}.def -l ${TARGET}.lib -D ${TARGET}.dll
	mv ${TARGET}.* out
	cp -f out/${TARGET}.lib out/${TARGET}.dll /d/zz/ffmpeg-demo 
	gcc -g -o  ${TARGET_TEST} ${PREFIX_SRC}/main.c ${INC1}  ${LIB1S}
	mv ${TARGET_TEST}.exe ./out
clean:
	rm -rf out/${TARGET}.*  out/${TARGET_TEST}.exe