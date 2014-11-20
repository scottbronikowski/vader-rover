# Makefile for darpa-collaboration/ideas
# --------------------------------------

all: error$(ERROR_OK) dsci

VERSION ?= debug
OPTFLAGS=-g3
ifeq "$(VERSION)" "release"
OPTFLAGS=-O2 -DRELEASE
endif
ifeq "$(VERSION)" "compile"
OPTFLAGS=-O0
endif

OPTIONS=-DV4L2_S2C_BACKTRACES
# -DQOBISCHEME_XFLUSH
# -DV4L2_S2C_JPEG_ERROR_FATAL

# Site configuration
# ------------------
INSTALLDIR  = $(QINSTALLDIR)
ARCHITECTURE_PATH = $(QARCHITECTURE_PATH)
INSTALLLIB  = $(INSTALLDIR)/lib
INSTALLLIBA = $(INSTALLLIB)/$(ARCHITECTURE_PATH)
INSTALLBIN  = $(INSTALLDIR)/bin
INSTALLBINA = $(INSTALLBIN)/$(ARCHITECTURE_PATH)

RELEASE_VERSION = 0.1
RELEASE_FILE = darpa-collaboration-$(RELEASE_VERSION)
TARGET = \
	dsci \

ZIP_CFLAGS = $(shell pkg-config libzip --cflags)
ZIP_LDFLAGS = $(shell pkg-config libzip --libs)

VADER = /home/sbroniko/vader-rover
FLYINCLUDE = -I${VADER}/include
FLYLIBS = -L${VADER}/lib -lflycapture${D}


OPENCV = -I ~/darpa-collaboration/include/`architecture-path`/ \
	-I. `pkg-config --libs --cflags opencv`\
	-L ~/darpa-collaboration/lib/`architecture-path`/ \
	-L. `pkg-config --cflags --libs opencv`
#	-L /usr/lib/x86_64-linux-gnu -ljpeg
#	-L. $(shell pkg-config --cflags --libs opencv) \
#	-I. $(shell pkg-config --cflags --libs opencv) \
	${FLYINCLUDE} ${FLYLIBS}
OPENCV_I = -I${HOME}/darpa-collaboration/include/`architecture-path`/ `pkg-config opencv --cflags`

GAMEPAD = -L${VADER}/lib -lgamepad

NLOPT_CFLAGS =
NLOPT_LDFLAGS = -lnlopt_cxx

ADOLC_CFLAGS =
ADOLC_LDFLAGS = -ladolc

OPENMP_CFLAGS = -fopenmp
OPENMP_LDFLAGS = -fopenmp  # This can be empty if runtime lib is not needed (schedule)

LD_Q =  -L~/lib/$(QARCHITECTURE_PATH)/ \
	~/QobiScheme-nojpeg/QobiScheme-AD.a \
	~/lib/$(QARCHITECTURE_PATH)/scxl.a -lX11 -lXext -lz -lgmp -lgsl
	#~/lib/$(QARCHITECTURE_PATH)/QobiScheme-AD.a  \
	~/lib/$(QARCHITECTURE_PATH)/scxl.a -lX11 -lXext -lz -lgmp -lgsl

FFMPEG_LDFLAGS = -lavutil -lavformat -lavcodec -lz -lavutil -lm -lswscale

#DEBUG = $(OPTFLAGS) -ggdb -gdwarf-2

C_SRC = \
	hmm-control.c \
	hmm-data.c \
	hmm-def.c \
	hmm-features.c \
	hmm-rand.c \
	hmm.c \
	idealib-c.c \
	pipeline-gui-c.c \
	toollib-c.c \
	toollib-hack-track-c.c \
	toollib-utils.c \
	toollib-v4l2-c.c \
	toollib-hog-c.c \
	toollib-farneback-c.c \
	toollib-gamepad-c.c \

CPP_SRC = \
	idealib-cpp.cpp \
	toollib-rover-cpp.cpp \
	mGPSInfo.cpp \
	mNMEAParser.cpp

# All of these files must be prefixed with toollib-
SC_SRC = \
	easy-ffi.sc \
	hmm-train-classify.sc \
	hmm-wbm.sc \
	idealib-hash-table.sc \
	idealib-matplotlib.sc \
	idealib-pregexp.sc \
	idealib-tracks.sc \
	idealib-stuff.sc \
	toollib-c-bindings.sc \
	toollib-camera.sc \
	toollib-image-processing.sc \
	toollib-misc.sc \
	toollib-nlopt.sc \
	toollib-gsl.sc \
	toollib-hog.sc \
	toollib-rover.sc \
	toollib-gamepad.sc \
	learning-mess.sc \
	toollib-ad.sc \
	sentence-to-trace-from-learned-models.sc \

# removed because they don't compile
#	toollib-hack-track-drawable.sc \
	toollib-hack-track.sc \


OBJ = $(SC_SRC:.sc=.o) $(C_SRC:.c=.o) $(CPP_SRC:.cpp=.o)
SCH = $(SC_SRC:.sc=.sch)
TARGET_SRC = $(TARGET:=.sc)
TARGET_SCH = $(TARGET_SRC:.sc=.sch)
CFILES = $(SC_SRC:.sc=.c)

.SECONDEXPANSION:

background_gmm: background_gmm.cpp
	$(CC) $(CFLAGS) $(OPECV) background_gmm.cpp -o background_gmm

${SCH}: $$(basename $$@).sc $$(SC_SRC) | in-port
	sch $(basename $@) $(SC_SRC)
	touch $(basename $@).sch

${TARGET_SCH}: $$(basename $$@).sc | in-port
	sch -main $(basename $@) $(SC_SRC)
	touch $(basename $@).sch

# -Ot -Ob -Og $(OPTFLAGS)
${TARGET}: $$(basename $$@).sc $$(basename $$@).sch $$(SCH) $(OBJ) $$@.o | environment
	scc-color -cc $(CC) $@.o $(SCCFLAGS) $(CFLAGS) $(DEBUG) $(ZIP_CFLAGS) $(OPTFLAGS)  -DGL_GLEXT_PROTOTYPES $(OBJ) -o $@ $(OPENCV) $(GAMEPAD) `imlib2-config --cflags --libs` $(LD_Q) $(FFMPEG_LDFLAGS) -lfftw3 $(ZIP_LDFLAGS) $(NLOPT_LDFLAGS) ${EXTRA_LDFLAGS} ${ADOLC_LDFLAGS} ${OPENMP_LDFLAGS}

%.o: %.sc %.sch toollib-c-macros.sch | environment
	scc-color -cc $(CC) -sch 500 -scmh 800 $(SCCFLAGS) $(DEBUG) -I. -I ~/include $< -c $(CFLAGS) $(ZIP_CFLAGS) $(OPTFLAGS) `imlib2-config --cflags` $(OPENCV_I) $(ADOLC_CFLAGS)

%.o: %.c | environment
	$(CC) $(DEBUG) $(CFLAGS) -Wall -DGL_GLEXT_PROTOTYPES -I ~/lib/$(ARCHITECTURE_PATH) -I. $(ZIP_CFLAGS) -std=gnu99 -c $< $(OPTFLAGS) `imlib2-config --cflags` $(OPENCV_I) ${OPENMP_CFLAGS}

%.o: %.cpp | environment
	g++ $(DEBUG) $(CFLAGS) -Wall -DGL_GLEXT_PROTOTYPES -I. -c $< $(OPTFLAGS) `imlib2-config --cflags` $(ZIP_CFLAGS) $(OPENCV_I) ${ADOLC_CFLAGS} ${OPENMP_CFLAGS}

environment:
	@if [ -z "${MATLAB}" ]; then \
		echo "Environment variables not set, prefix darpa-wrap to command"; \
		false; \
	fi;

in-port:
	@if [ ideas = `basename \`pwd\`` ]; then \
		echo "You cannot build ideas in the base directory, you must run make port and cd into the resulting directory first"; \
		false; \
	fi;

tags: $(SC_SRC) $(C_SRC)
	etags -l c *.c -l scheme *.sc

# To add a new architecture, add architecture specific lines.
# The line prefix should be '#`architecture-path` ', see examples below.
port:
	-rm -rf $(ARCHITECTURE_PATH)
	mkdir $(ARCHITECTURE_PATH)
	cd $(ARCHITECTURE_PATH); csh -cf "ln -s ../*.{sc,c,cpp,h,S,sch} ."
	$(MAKE) port-makefile

port-makefile:
	echo "# This file was generated automatically.  Do not edit." >\
		$(ARCHITECTURE_PATH)/makefile
	echo "# ----------------------------------------------------" >>\
		$(ARCHITECTURE_PATH)/makefile
	echo ARCHITECTURE_PATH = $(ARCHITECTURE_PATH) >>\
		$(ARCHITECTURE_PATH)/makefile
	echo ERROR_OK = _no_error >> $(ARCHITECTURE_PATH)/makefile
	grep "^#$(ARCHITECTURE_PATH)" makefile | \
		sed "s/#$(ARCHITECTURE_PATH) //" >>\
			$(ARCHITECTURE_PATH)/makefile
	echo include ../makefile >> $(ARCHITECTURE_PATH)/makefile

error:
	@echo "Do 'make port' to create an architecture specific directory."
	@exit 1

error_no_error:

# Architecture specific variables
# -------------------------------
#x86_64-Linux-2.6.34.7-56.fc13.x86_64 CC = gcc
#x86_64-Linux-2.6.34.7-56.fc13.x86_64 CFLAGS = -O2 -DLINUX $(OPTIONS)
#x86_64-Linux-2.6.34.7-56.fc13.x86_64 SCCFLAGS = -O2

#x86_64-Gentoo-2.0.3 CC = clang -Wall
#x86_64-Gentoo-2.0.3 CFLAGS = -O2 -DLINUX $(OPTIONS)
#x86_64-Gentoo-2.0.3 SCCFLAGS = -O2

#i686-Linux-2.6.26-2-686 CC = gcc
#i686-Linux-2.6.26-2-686 CFLAGS = -O2 -DLINUX $(OPTIONS)
#i686-Linux-2.6.26-2-686 SCCFLAGS = -O2

#i686-Linux-2.6.32-5-686 CC = gcc
#i686-Linux-2.6.32-5-686 CFLAGS = -O2 -DLINUX $(OPTIONS)
#i686-Linux-2.6.32-5-686 SCCFLAGS = -O2

#i686-Debian-5.0.3 CC = gcc
#i686-Debian-5.0.3 CFLAGS = -O2 -DLINUX $(OPTIONS)
#i686-Debian-5.0.3 SCCFLAGS = -O2

#x86_64-Debian-5.0.6 CC = gcc
#x86_64-Debian-5.0.6 CFLAGS = -O2 -DLINUX $(OPTIONS)
#x86_64-Debian-5.0.6 SCCFLAGS = -O2

#x86_64-Debian CC = gcc
#x86_64-Debian CFLAGS = -O2 -DLINUX $(OPTIONS)
#x86_64-Debian SCCFLAGS = -O2

#x86_64-Linux-2.6.32-5-amd64 CC = gcc
#x86_64-Linux-2.6.32-5-amd64 CFLAGS = -O2 -DLINUX $(OPTIONS)
#x86_64-Linux-2.6.32-5-amd64 SCCFLAGS = -O2

#x86_64-Linux-3.2.0-3-amd64 CC = gcc
#x86_64-Linux-3.2.0-3-amd64 CFLAGS = -O2 -DLINUX $(OPTIONS)
#x86_64-Linux-3.2.0-3-amd64 SCCFLAGS = -O2
#x86_64-Linux-3.2.0-3-amd64 EXTRA_LDFLAGS = -lblas

#x86_64-Linux-3.2.0-4-amd64 CC = gcc
#x86_64-Linux-3.2.0-4-amd64 CFLAGS = -O2 -DLINUX $(OPTIONS)
#x86_64-Linux-3.2.0-4-amd64 SCCFLAGS = -O2
#x86_64-Linux-3.2.0-4-amd64 EXTRA_LDFLAGS = -lblas /usr/lib/libtbb.so.2

#x86_64-Debian-6.0.2 CC = gcc
#x86_64-Debian-6.0.2 CFLAGS = -O2 -DLINUX $(OPTIONS)
#x86_64-Debian-6.0.2 SCCFLAGS = -O2
#x86_64-Debian-6.0.2 EXTRA_LDFLAGS = -lblas /usr/lib/libtbb.so.2

#x86_64-Gentoo-2.1-bgc CC = clang -Wall $(OPTFLAGS) -ggdb -gdwarf-2
#x86_64-Gentoo-2.1-bgc CFLAGS = -O0 -DLINUX $(OPTIONS)
#x86_64-Gentoo-2.1-bgc SCCFLAGS = -O0

#x86_64-Gentoo-2.1-thread CC = clang -Wall $(OPTFLAGS) -ggdb -gdwarf-2
#x86_64-Gentoo-2.1-thread CFLAGS = -O2 -DLINUX $(OPTIONS)
#x86_64-Gentoo-2.1-thread SCCFLAGS = -O2

#x86_64-Gentoo-2.2 CC = gcc -Wall $(OPTFLAGS) -Wno-unused-function -Wno-unused-result -Wno-deprecated-declarations -Wno-cast-qual -g3
#x86_64-Gentoo-2.2 CFLAGS = -O2 -DLINUX $(OPTIONS)
#x86_64-Gentoo-2.2 SCCFLAGS = -O2
#x86_64-Gentoo-2.2 EXTRA_LDFLAGS = -lstdc++

#x86_64-Gentoo-2.2-thread CC = gcc -Wall $(OPTFLAGS) -Wno-unused-function -Wno-unused-result -Wno-deprecated-declarations -Wno-cast-qual -g3
#x86_64-Gentoo-2.2-thread CFLAGS = -O2 -DLINUX $(OPTIONS)
#x86_64-Gentoo-2.2-thread SCCFLAGS = -O2

#i686-Ubuntu-9.10 CC = gcc
#i686-Ubuntu-9.10 CFLAGS = -O2 -DLINUX $(OPTIONS)
#i686-Ubuntu-9.10 SCCFLAGS = -O2

#x86_64-Arch_Linux CC = gcc
#x86_64-Arch_Linux CFLAGS = -O2 -DLINUX $(OPTIONS)
#x86_64-Arch_Linux SCCFLAGS = -O2
#x86_64-Arch_Linux EXTRA_LDFLAGS = -L/lib64/ -lstdc++ -lrt -lgslcblas

install: all
	cp $(TARGETS) $(INSTALLBINA)/.

uninstall:
	cd $(INSTALLBINA); rm -rf $(TARGETS)

.PHONY: clean real-clean environment
clean:
	-rm -f $(OBJ) $(TARGET_SRC:.sc=.c) $(TARGET_SRC:.sc=.o) \
	$(TARGET_SCH) core $(CFILES) $(SCH)

real-clean: clean
	-rm -r -f $(TARGET_SRC:.sc=)

# Automatic dependencies, don't modify them
