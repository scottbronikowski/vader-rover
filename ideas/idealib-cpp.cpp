#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <sys/mman.h>
#include <zlib.h>
#include <errno.h>

// FIXME Andrei char *bgra suffers from endianess issues
extern "C" float *bgra_to_float_greyscale(char *bgra, int width, int height) {
  float *out = (float*)malloc(sizeof(float)*width*height);
  for (int y = 0; y < height; ++y)
    for (int x = 0; x < width; ++x)
      out[x+y*width] = (0.114 * (float)bgra[4*(x+y*width)]
			+ 0.587 * (float)bgra[4*(x+y*width)+1]
			+ 0.299 * (float)bgra[4*(x+y*width)+2]) / 255;
  return out;
}

/* TODO Andrei This API is bad because it does twice the number of copies */
/* takes greyscale images of floats */
extern "C" double *flowlib_optical_flow(float *image1, float *image2,
					int width, int height) {
  fprintf(stderr, "flowlib\n");
  exit(EXIT_FAILURE);
}
