# First itteration of the flycapture2 makefile
# To compile the debug verison need to overwrite CXXFLAGS variable to include -ggdb

# version of the software
MAJOR_VERSION = 2
MINOR_VERSION = 2
# 0 Alpha, 1 Beta, 2 RC, 3 Public release
RELEASE_TYPE = 1
RELEASE_BUILD = 8
VERSION_NUMBER = ${MAJOR_VERSION}.${MINOR_VERSION}.${RELEASE_TYPE}.${RELEASE_BUILD}

ifeq ($(PLATFORM),arm)
	CC = /work/netcdrom/CodeSourcery/Sourcery_G++_Lite/bin/arm-none-linux-gnueabi-g++
else
	CC = g++
endif

ifeq ($(PLATFORM),arm)
	STRIP = /work/netcdrom/CodeSourcery/Sourcery_G++_Lite/bin/arm-none-linux-gnueabi-strip
else
	STRIP = strip
endif

LDFLAGS = -Wl,-z,defs,-soname,${SONAME}

LINKNAME = libflycapturegui${D}.so
SONAME = libflycapturegui${D}.so.${MAJOR_VERSION}
REALNAME = libflycapturegui${D}.so.${VERSION_NUMBER}
GCHNAME = Precompiled.h.gch

ifeq ($(PLATFORM),arm)
	GCH_INCLUDES = -I../../include \
	-I/work/rang/ForMat/ARM/usr/include \
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
	GCH_INCLUDES = -I../../include -I/usr/include/flycapture `pkg-config --cflags gtkmm-2.4` `pkg-config --cflags giomm-2.4` `pkg-config --cflags libglademm-2.4` 
endif

INCLUDES = ${GCH_INCLUDES}

ifeq ($(PLATFORM),arm)
LIBS = -L../../lib -lflycapture${D} -L/work/rang/ForMat/ARM/usr/lib -latkmm-1.6 -lcairomm-1.0 -lgdkmm-2.4 -lglibmm-2.4 -lgtkmm-2.4 -lglademm-2.4 -lpangomm-1.4 -lsigc-2.0 -lgiomm-2.4\
-L/work/rang/ForMat/ARM/usr/lib/arm-linux-gnueabi -lgthread-2.0 -lglib-2.0 -lgio-2.0 -lgtk-x11-2.0
else
LIBS = -L../../lib -lflycapture${D} `pkg-config --libs gtkmm-2.4` `pkg-config --libs giomm-2.4` `pkg-config --libs libglademm-2.4` `pkg-config --libs gthread-2.0`
endif

OUTDIR = ../../lib

OBJS = FlyCapture2GUI.o CamSelection.o CamControl.o BasePage.o \
	   	Format7Page.o DCAMFormatsPage.o CamSettingsPage.o CamInfoPage.o \
		RegisterPage.o GPIOPage.o AdvCameraSettingsPage.o HDRPage.o LUTPage.o \
		FrameBufferPage.o DataFlashPage.o  \
		SystemInfoPage.o BusTopologyPage.o HelpSupportPage.o LadybugSettingsPage.o \
        Format7DrawingArea.o BusTopologyDrawingArea.o NodeSurface.o

all: ${GCHNAME} ${REALNAME} glade

${GCHNAME}: Precompiled.h
	@echo Creating precompiled header...
	@${CC} ${CFLAGS} ${GCH_INCLUDES} -D_REENTRANT -Wall -fPIC -c Precompiled.h

${REALNAME}: ${OBJS}
	@echo Linking...
	@${CC} ${LDFLAGS} -shared -o ${REALNAME} ${OBJS} ${LIBS} -lc
ifneq (${D}, d)
	@echo Stripping unneeded symbols...
	@${STRIP} --strip-unneeded ${REALNAME}
endif
	@echo Changing permissions...
	@chmod 0644 ${REALNAME}
	@echo Running ldconfig...
	@ldconfig -v -n .
	@echo Creating links...
	@ln -sf ${SONAME} ${LINKNAME}
	@echo Moving to destination...
	@mv ${LINKNAME}* ${OUTDIR}

%.o: %.cpp	
	@${CC} ${CFLAGS} ${INCLUDES} -D_REENTRANT -Winvalid-pch -Wall -fPIC -c $*.cpp

glade:
	@echo Copying glade files...
	@cp *.glade ../../bin
	
install:
	cp ../../lib/libflycapturegui* /usr/lib
	
uninstall:
	rm /usr/lib/libflycapturegui*
	
clean_obj:
	@rm -f ${OBJS} Precompiled.h.gch

clean:
	@rm -f ${OUTDIR}/${REALNAME} ${OUTDIR}/${SONAME} ${OUTDIR}/${LINKNAME} ${OBJS} Precompiled.h.gch
