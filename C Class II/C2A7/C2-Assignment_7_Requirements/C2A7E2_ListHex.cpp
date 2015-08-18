/*
 *Craig Ricker, U06369876
 *lucke.pirate@gmail.com
 *_SP15_OL: C/C++ Programming II : Fundamental Programming Concepts, 109824, Ray Mitchell
 *8/8/15
 *C2A7E2_ListHex.cpp
 *Win7
 *Visual C++ 11.0
 *
 *This will read a file in binary mode, and print out hex representations of the data
 *Email title: C2A7E2_U06369876
 */
#include <fstream>
#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;



void *SafeMalloc(size_t size)
{
   //Safetly allocates memory
   void *vp;
   if ((vp = malloc(size)) == NULL)
   {
      //If not enough memory, exits
      fputs("Out of memory\n", stderr);
      exit(EXIT_FAILURE);
   }
   return(vp);
}

void ListHex(ifstream &inFile, int bytesPerLine)
{
   //Set fill to 0
   cout << setfill('0');
   unsigned char curChar = inFile.get();
   for (int byteCount = 1; inFile.good(); byteCount++) {
      cout << hex << setw(2) << (int)curChar << ' ';
      if (byteCount == bytesPerLine) {
         cout << '\n';
         byteCount = 0;
      }
      curChar = inFile.get();
   }
}
