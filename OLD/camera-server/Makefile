#makefile for vader-rover stuff

CC = gcc
CC++ = g++
VADER = /home/sbroniko/vader-rover
IMLIB = `imlib2-config --cflags --libs`  
OPENCV = `pkg-config opencv --cflags --libs`
OPENCV_CFLAGS = `pkg-config opencv --cflags`
INCLUDE = -I${VADER}/include 
LIBS = -L${VADER}/lib -lflycapture${D} ${IMLIB} ${OPENCV}
FLAGS = -Wall


camera-server: camera-server.o
	${CC++} -o camera-server camera-server.o ${LIBS} ${COMMON_LIBS} 


#-Wl,--rpath=${HOME}/vader-rover/lib/glibc/ 
#-WL,--dynamic-linker=${HOME}/vader-rover/lib/glibc/ld-linux-x86-64.so.2 
#--verbose

camera-server.o: camera-server.cpp
	${CC++} ${FLAGS} ${OPENCV_CFLAGS} ${INCLUDE} -c camera-server.cpp

# camera-server: camera-server.o
# 	${CC} -o camera-server camera-server.o ${LIBS} ${COMMON_LIBS}

# camera-server.o: camera-server.c
# 	${CC} ${FLAGS} ${INCLUDE} -c camera-server.c

clean_obj:
	rm -f camera-server.o

clean:
	rm -f camera-server.o camera-server

#gcc -Wall -g -o camera-server camera-server.c