/*
 *Craig Ricker, U06369876
 *lucke.pirate@gmail.com
 *_SP15_OL: C/C++ Programming II : Fundamental Programming Concepts, 109824, Ray Mitchell
 *7/1/15
 *C2A3E2_TestDeclarations.cpp
 *Win7
 *Visual C++ 11.0
 *
 *Explore type casting and declarations
 *Email title: C2A3E2_U06369876
 */
const int ARRAYSIZE = 9;
void TestDeclarations()
{
   //One is below
   void *vp = 0;
   //Two is below
   int fcnA(int val);
   //Three is below
   float (**ppa)[ARRAYSIZE];
   //Four is below
   float (**&rppa)[ARRAYSIZE] = ppa;
   //Five is below
   ppa = (float (**)[ARRAYSIZE])vp;
}
