#makefile for vader-rover stuff

CC = gcc
INCLUDE = 
LIBS = 
FLAGS = -Wall -g

camera-server: camera-server.o
	${CC} -o camera-server camera-server.o ${LIBS} ${COMMON_LIBS}

camera-server.o: camera-server.c
	${CC} ${FLAGS} ${INCLUDE} -c camera-server.c

clean_obj:
	rm -f camera-server.o

clean:
	rm -f camera-server.o camera-server

#gcc -Wall -g -o camera-server camera-server.c