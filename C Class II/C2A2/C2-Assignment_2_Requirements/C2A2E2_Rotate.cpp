/*
 *Craig Ricker, U06369876
 *lucke.pirate@gmail.com
 *_SP15_OL: C/C++ Programming II : Fundamental Programming Concepts, 109824, Ray Mitchell
 *7/1/15
 *C2A2E2_Rotate.cpp
 *Win7
 *Visual C++ 11.0
 *
 *
 *Email title: C2A2E2_U06369876
 *Rotates bit pattern at location count, and does direction of count
 *Uses CountIntBitsF to calculate bit size of the object
 */

int CountIntBitsF(void);

unsigned Rotate(unsigned object, int count)
{
   //This will rotate object at count
   int bitSize = CountIntBitsF();
   if (count < 0)
   {
      //takes place if count is negative
      count = -count;
      return (object << count) | (object >> (bitSize - count));
   }
   else
   {
      //Right shift for if count is negative
      return (object >> count) | (object << (bitSize - count));
   }
}
