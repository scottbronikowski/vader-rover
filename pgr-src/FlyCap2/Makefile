# A more complex Makefile

ifeq ($(PLATFORM),arm)
	CC = /work/netcdrom/CodeSourcery/Sourcery_G++_Lite/bin/arm-none-linux-gnueabi-g++
	CFLAGS+=-DARM
else
	CC = g++
endif

ifeq ($(PLATFORM),arm)
	STRIP = /work/netcdrom/CodeSourcery/Sourcery_G++_Lite/bin/arm-none-linux-gnueabi-strip
else
	STRIP = strip
endif

GCHNAME = Precompiled.h.gch
#GCH_INCLUDES = `pkg-config --cflags gtkmm-2.4` `pkg-config --cflags libglademm-2.4` `pkg-config --cflags giomm-2.4` `pkg-config --cflags gtkglextmm-1.2`
ifeq ($(PLATFORM),arm)
	GCH_INCLUDES = -I/work/rang/ForMat/ARM/usr/include \
	-I/work/rang/ForMat/ARM/usr/include/gtkmm-2.4 \
	-I/work/rang/ForMat/ARM/usr/include/glibmm-2.4 \
	-I/work/rang/ForMat/ARM/usr/lib/glibmm-2.4/include \
	-I/work/rang/ForMat/ARM/usr/include/glib-2.0 \
	-I/work/rang/ForMat/ARM/usr/lib/glib-2.0/include \
	-I/work/rang/ForMat/ARM/usr/lib/arm-linux-gnueabi/glib-2.0/include \
	-I/work/rang/ForMat/ARM/usr/include/sigc++-2.0/sigc++ \
	-I/work/rang/ForMat/ARM/usr/include/sigc++-2.0 \
	-I/work/rang/ForMat/ARM/usr/include/gdkmm-2.4 \
	-I/work/rang/ForMat/ARM/usr/include/gtk-2.0 \
	-I/work/rang/ForMat/ARM/usr/include/gtk-2.0/gtk/gtk \
	-I/work/rang/ForMat/ARM/usr/include/cairo \
	-I/work/rang/ForMat/ARM/usr/include/pango-1.0 \
	-I/work/rang/ForMat/ARM/usr/lib/arm-linux-gnueabi/gtk-2.0/include \
	-I/work/rang/ForMat/ARM/usr/include/giomm-2.4 \
	-I/work/rang/ForMat/ARM/usr/lib/gdkmm-2.4/include \
	-I/work/rang/ForMat/ARM/usr/lib/pangomm-1.4/include \
	-I/work/rang/ForMat/ARM/usr/include/pangomm-1.4 \
	-I/work/rang/ForMat/ARM/usr/include/atk-1.0 \
	-I/work/rang/ForMat/ARM/usr/lib/cairomm-1.0/include \
	-I/work/rang/ForMat/ARM/usr/lib/gtkmm-2.4/include \
	-I/work/rang/ForMat/ARM/usr/include/atkmm-1.6 \
	-I/work/rang/ForMat/ARM/usr/include/cairomm-1.0 \
	-I/work/rang/ForMat/ARM/usr/include/freetype2 \
	-I/work/rang/ForMat/ARM/usr/include/fontconfig \
	-I/work/rang/ForMat/ARM/usr/include/gdk-pixbuf-2.0 \
	-I/work/rang/ForMat/ARM/usr/include/libglademm-2.4
else
	GCH_INCLUDES = `pkg-config --cflags gtkmm-2.4` `pkg-config --cflags giomm-2.4` `pkg-config --cflags libglademm-2.4` `pkg-config --cflags gtkglextmm-1.2`
endif

INCLUDE = -I../../include -I/usr/include/flycapture ${GCH_INCLUDES}

#LIBS = -L../../lib -lflycapture${D} -lflycapturegui${D}  ${COMMON_LIBS} `pkg-config --libs gthread-2.0` `pkg-config --libs giomm-2.4` `pkg-config gtkmm-2.4 --libs` `pkg-config libglademm-2.4 --libs` `pkg-config --libs gtkglextmm-1.2`

ifeq ($(PLATFORM),arm)
LIBS = -L../../lib -lflycapture${D} -L/work/rang/ForMat/ARM/usr/lib -latkmm-1.6 -lcairomm-1.0 -lgdkmm-2.4 -lglibmm-2.4 -lgtkmm-2.4 -lglademm-2.4 -lpangomm-1.4 -lsigc-2.0 -lgiomm-2.4\
-L/work/rang/ForMat/ARM/usr/lib/arm-linux-gnueabi -lgthread-2.0 -lglib-2.0 -lgio-2.0 -lgtk-x11-2.0
else
LIBS = -L../../lib -lflycapture${D} -lflycapturegui${D} `pkg-config --libs gtkmm-2.4` `pkg-config --libs giomm-2.4` `pkg-config --libs libglademm-2.4` `pkg-config --libs gthread-2.0` `pkg-config --libs gtkglextmm-1.2`
endif

NAME = FlyCap2${D}

XMLNAME = FlyCap2_GTKmm

OUTDIR = ../../bin

OBJS = main.o FlycapWindow.o FrameRateCounter.o ImageDrawingArea.o InformationPane.o HistogramWindow.o HistogramDrawingArea.o SaveImageFileChooserDialog.o EventStatisticsWindow.o

all: ${GCHNAME} ${NAME} glade

${GCHNAME}: Precompiled.h
	${CC} ${CFLAGS} ${GCH_INCLUDES} -Wall -c Precompiled.h

${NAME}: ${OBJS}
	${CC} -Wall -o ${NAME} ${OBJS} ${LIBS} -export-dynamic
ifneq (${D}, d)
	${STRIP} --strip-unneeded ${NAME}
endif
	mv ${NAME} ${OUTDIR}/${NAME}

%.o: %.cpp
	${CC} ${CFLAGS} ${INCLUDE} -Wall -c $*.cpp 

glade:
	cp ${XMLNAME}.glade ${OUTDIR}/${XMLNAME}.glade

clean_obj:
	rm -f ${OBJS} Precompiled.h.gch

clean:
	rm -f ${OUTDIR}/${NAME} ${OBJS} Precompiled.h.gch
