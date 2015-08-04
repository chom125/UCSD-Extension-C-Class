/*
 *Craig Ricker, U06369876
 *lucke.pirate@gmail.com
 *_SP15_OL: C/C++ Programming II : Fundamental Programming Concepts, 109824, Ray Mitchell
 *7/1/15
 *C2A4E3_pointerArray4D.cpp
 *Win7
 *Visual C++ 11.0
 *
 *Creates a 4D pointer array from the methods in 13.26 and 13.17
 *Email title: C2A4E3_U06369876
 */
extern const int DIM0 = 2, DIM1 = 3, DIM2 = 4, DIM3 = 5;
//Made external so can be referenced elsewhere
static float ixa[DIM3], ixb[DIM3], ixc[DIM3], ixd[DIM3];
static float iya[DIM3], iyb[DIM3], iyc[DIM3], iyd[DIM3];
static float iza[DIM3], izb[DIM3], izc[DIM3], izd[DIM3];
static float jxa[DIM3], jxb[DIM3], jxc[DIM3], jxd[DIM3];
static float jya[DIM3], jyb[DIM3], jyc[DIM3], jyd[DIM3];
static float jza[DIM3], jzb[DIM3], jzc[DIM3], jzd[DIM3];
static float *ix[DIM2] = {ixa, ixb, ixc, ixd};
static float *iy[DIM2] = {iya, iyb, iyc, iyd};
static float *iz[DIM2] = {iza, izb, izc, izd};
static float *jx[DIM2] = {jxa, jxb, jxc, jxd};
static float *jy[DIM2] = {jya, jyb, jyc, jyd};
static float *jz[DIM2] = {jza, jzb, jzc, jzd};
static float **iArray[DIM1] = {ix, iy, iz};
static float **jArray[DIM1] = {jx, jy, jz};
float ***pointerArray4D[DIM0] = {iArray, jArray};
