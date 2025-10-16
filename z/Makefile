SRC=/D/x/algorithms_net/xffmpeg/src/FFWrapper.c
INC=-I/D/x/algorithms_net/xffmpeg/src/
INC+=-I/usr/local/include -I../ 
INC+=-I/mingw64/include/SDL2
CFLAGS = -O2 -Wall -Wno-incompatible-pointer-types -DEXPORT_DLL_API_FF_WRAPPER 
LIBS=-L/usr/local/lib
LIBS+= -lavcodec -lavdevice -lavutil -lavformat -lswscale -lsimplelog -lswresample -lavfilter -L/mingw64/lib/ -lSDL2 -lSDL2main
BSRC=/D/x/algorithms_net/xffmpeg/src/audio_video_record.c
VK_WSRC=/D/x/algorithms_net/xffmpeg/src/ffwr_vk_windows.c
LIBTARGET=FFWrapper


all:
#	gcc -g -c $(SRC) -o $(LIBTARGET).o $(INC) $(CFLAGS)
#	gcc -g -shared -o lib$(LIBTARGET).dll $(LIBTARGET).o -Wl,--out-implib,lib$(LIBTARGET).dll.a $(LIBS)
#	gcc -g -o audio_video_record $(BSRC) -L./ -l$(LIBTARGET) $(LIBS)
	#gcc -g -o test-mux  mux.c -L./ $(LIBS) ${INC}
	gcc -g -o ffwr_vk_windows  ${VK_WSRC} -L./ $(LIBS) ${INC}

clean:
	rm -f *.o *.a *.dll audio_video_record test-mux ffwr_vk_windows
