#makefile for data-analysis

CC = g++
OPENCV = `pkg-config --cflags --libs opencv`
FLAGS = -Wall -g

data-analysis: data-analysis.cpp data-analysis.h
	${CC} ${FLAGS} ${OPENCV} -o data-analysis data-analysis.cpp

#g++ -g `pkg-config --cflags --libs opencv` -o data-analysis data-analysis.cpp
