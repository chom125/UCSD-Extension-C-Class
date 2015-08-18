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
#include <iomanip>
using namespace std;

void *SafeMalloc(size_t size)
{
   void *vp;

   if ((vp = malloc(size)) == NULL)
   {
      fputs("Out of memory\n", stderr);
      exit(EXIT_FAILURE);
   }
   return(vp);
}

void ListHex(ifstream &inFile, int bytesPerLine)
{
   //Set fill to 0
   char *buffer = (char*)SafeMalloc((size_t)bytesPerLine);
   cout << setfill('0') << hex;
   inFile.read(buffer, bytesPerLine);
   for (; *buffer != ; inFile.read(buffer, bytesPerLine))
   {
      char *end = buffer + (size_t)inFile.gcount();
      for (int byteCount = 0; buffer < end; ++buffer, byteCount++)
      {
         cout << setw(2) << (int)(unsigned char)*buffer << ' ';
      }
      cout << '\n';
   }
   free(buffer);
}
