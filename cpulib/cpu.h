#pragma once

#include "../imglib/img.h"
#include "../standlib/stdCu.h"


void gaussianKernelCPU(const int gaussLength, const float gaussSigma, float *outkernel);
// Generates a gaussian kernel of length gaussLength and sigma gaussSigma

void setTiling(const int width, const int height, int *dimTilesX, int *dimTilesY);
// Sets the tiling for the convolution


/* DEPRECATED FUNCTIONS */

void convCPU(char *input, char *output, char *kernel, const int width, const int heigth);
// Debug function for convolution on CPU

void zero_order_zoomingCPU(unsigned char *img, unsigned char *zoomed_out, int dimZoomX, int dimZoomY, int x, int y, int width, int height, int outDim);
// Debug function for zero order zooming on CPU
