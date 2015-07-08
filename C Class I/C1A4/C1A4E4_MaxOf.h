/*
 *Craig Ricker, U06369876
 *lucke.pirate@gmail.com
 *_SP15_OL: C/C++ Programming I : Fundamental Programming Concepts, 106644, Ray Mitchell *4/21/15
 *C1A4E4_MaxOf.h
 *Win7
 *Visual C++ 11.0
 *
 *This wil explore function like macros and inline functions
 */
#ifndef C1A4E4_MAXOF_H
#define C1A4E4_MAXOF_H
#define mMaxOf2(max_c1, max_c2) ((max_c1) > (max_c2) ? (max_c1) : (max_c2))
#define mMaxOf3(max_c1, max_c2, max_c3) (mMaxOf2((max_c3), mMaxOf2((max_c1),(max_c2))))
inline double fMaxOf2(double max_c1, double max_c2)
{
   return max_c1 > max_c2 ? max_c1 : max_c2;          //same as mMaxof2 but inline function 
}
inline double fMaxOf3(double max_c1, double max_c2, double max_c3)
{
   return fMaxOf2(fMaxOf2(max_c1, max_c2), max_c3);   //Uses fmaxof2 twice to calculate 3 values' max
}
#endif
