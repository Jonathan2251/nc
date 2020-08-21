// ~/llvm/9.0.0/release/cmake_debug_build/bin/clang -target mips-unknown-linux-gnu -S llvm-ex1.c -emit-llvm -o -
extern float x1[1][3][120][120];
extern float w1[64][3][7][7];
extern float *out1;

extern float *conv(float *x, int xdim[], float *w, int wdim[]);

float *foo() {
  float *px = (float*)x1;
  int pxdim[4] = {1,3,120,120};
  float *pw = (float*)w1;
  int pwdim[4] = {64,3,7,7};
  out1 =conv(px, pxdim, pw, pwdim);
  return out1;
}
