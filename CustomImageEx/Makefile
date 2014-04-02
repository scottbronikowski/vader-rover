# CustomImageEx makefile

CC = g++
OUTPUTNAME = CustomImageEx${D}
VADER = /home/sbroniko/vader-rover
INCLUDE = -I${VADER}/include 
LIBS = -L${VADER}/lib -lflycapture${D} `imlib2-config --cflags --libs`
#INCLUDE = -I../../include -I/usr/include/flycapture -I/root/jpeg-compressor
#LIBS = -L../../lib -lflycapture${D} `imlib2-config --cflags --libs` -L/usr/local/lib -lsnappy
CFLAGS = -D__STDC_CONSTANT_MACROS #for ffmpeg??

OBJS = CustomImageEx.o jpge.o

${OUTPUTNAME}: ${OBJS}
	${CC} -o ${OUTPUTNAME} ${OBJS} ${LIBS} ${COMMON_LIBS}

%.o: %.cpp
	${CC} ${CFLAGS} ${INCLUDE} -Wall -c $*.cpp

clean_obj:
	rm -f ${OBJS}	@echo "all cleaned up!"

clean:
	rm -f ${OUTPUTNAME} ${OBJS}	@echo "all cleaned up!"
