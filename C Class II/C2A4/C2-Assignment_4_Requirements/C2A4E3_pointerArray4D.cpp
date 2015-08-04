//
//  C2A4E3_pointerArray4D.cpp
//  C_Class
//
//  Created by Katherine Ellis on 7/29/15.
//
//

#include <stdio.h>

extern const int DIM0 = 2, DIM1 = 3, DIM2 = 4, DIM3 = 5;
float ixa[DIM3], ixb[DIM3], ixc[DIM3], ixd[DIM3];
float iya[DIM3], iyb[DIM3], iyc[DIM3], iyd[DIM3];
float iza[DIM3], izb[DIM3], izc[DIM3], izd[DIM3];
float jxa[DIM3], jxb[DIM3], jxc[DIM3], jxd[DIM3];
float jya[DIM3], jyb[DIM3], jyc[DIM3], jyd[DIM3];
float jza[DIM3], jzb[DIM3], jzc[DIM3], jzd[DIM3];
float *ix[DIM2] = {ixa, ixb, ixc, ixd};
float *iy[DIM2] = {iya, iyb, iyc, iyd};
float *iz[DIM2] = {iza, izb, izc, izd};
float *jx[DIM2] = {jxa, jxb, jxc, jxd};
float *jy[DIM2] = {jya, jyb, jyc, jyd};
float *jz[DIM2] = {jza, jzb, jzc, jzd};
float **i[DIM1] = {ix, iy, iz};
float **j[DIM1] = {jx, jy, jz};
float ***pointerArray4D[DIM0] = {i, j};