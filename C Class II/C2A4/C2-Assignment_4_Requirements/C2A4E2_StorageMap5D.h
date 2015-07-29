/*
 *Craig Ricker, U06369876
 *lucke.pirate@gmail.com
 *_SP15_OL: C/C++ Programming II : Fundamental Programming Concepts, 109824, Ray Mitchell
 *7/1/15
 *C2A4E2_StorageMap5D.h
 *Win7
 *Visual C++ 11.0
 *
 *User created storage map equation
 *Uses the start of the index, adds elements, to allow the user to point anywhere in the array
 *Email title: C2A4E2_U06369876
 */
#ifndef C2A4E2_STORAGEMAP5D_H
#define C2A4E2_STORAGEMAP5D_H
#define StorageMap5D(ptr, idx0, idx1, idx2, idx3, idx4, dim1, dim2, dim3, dim4)(*((ptr) \
+ (idx0) * (dim1) * (dim2) * (dim3) * (dim4) + (idx1) * (dim2) * (dim3) * (dim4) \
+ (idx2) * (dim3) * (dim4)+ (idx3) * (dim4) + (idx4)))
#endif
