SRC=/D/x/algorithms_net/xffmpeg/src/FFWrapper.c
INC=-I/D/x/algorithms_net/xffmpeg/src/
INC+=-I/usr/local/include
CFLAGS = -O2 -Wall -Wno-incompatible-pointer-types -DEXPORT_DLL_API_FF_WRAPPER 
LIBS=-L/usr/local/lib
LIBS+= -lavcodec -lavdevice -lavutil -lavformat -lswscale -lsimplelog -lswresample -lavfilter

BSRC=/D/x/algorithms_net/xffmpeg/src/audio_video_record.c
LIBTARGET=FFWrapper
#-rw-r--r-- 1 DEll None   4741 Sep 25 16:18 avcodec-62.def
#-rw-r--r-- 1 DEll None    453 Sep 25 16:18 avdevice-62.def
#-rw-r--r-- 1 DEll None   1945 Sep 25 16:18 avfilter-11.def
#-rw-r--r-- 1 DEll None   3531 Sep 25 16:18 avformat-62.def
#-rw-r--r-- 1 DEll None  14988 Sep 25 16:18 avutil-60.def
#-rw-r--r-- 1 DEll None 120430 Sep 25 16:18 libavcodec.dll.a
#-rw-r--r-- 1 DEll None  11416 Sep 25 16:18 libavdevice.dll.a
#-rw-r--r-- 1 DEll None  46826 Sep 25 16:18 libavfilter.dll.a
#-rw-r--r-- 1 DEll None 102454 Sep 25 16:18 libavformat.dll.a
#-rw-r--r-- 1 DEll None 414886 Sep 25 16:18 libavutil.dll.a
#-rw-r--r-- 1 DEll None  10726 Sep 23 10:53 libsimplelog.dll.a
#-rw-r--r-- 1 DEll None  15964 Sep 25 16:18 libswresample.dll.a
#-rw-r--r-- 1 DEll None  26574 Sep 25 16:18 libswscale.dll.a
#drwxr-xr-x 1 DEll None      0 Sep 25 16:18 pkgconfig
#-rw-r--r-- 1 DEll None    475 Sep 25 16:18 swresample-6.def
#-rw-r--r-- 1 DEll None    888 Sep 25 16:18 swscale-9.def

all:
	gcc -g -c $(SRC) -o $(LIBTARGET).o $(INC) $(CFLAGS)
	gcc -g -shared -o lib$(LIBTARGET).dll $(LIBTARGET).o -Wl,--out-implib,lib$(LIBTARGET).dll.a $(LIBS)
	gcc -g -o audio_video_record $(BSRC) -L./ -l$(LIBTARGET) $(LIBS)
clean:
	rm -f *.o *.a *.dll audio_video_record