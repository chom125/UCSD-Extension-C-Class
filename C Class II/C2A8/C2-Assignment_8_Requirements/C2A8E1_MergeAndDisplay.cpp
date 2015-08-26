/*
 *Craig Ricker, U06369876
 *lucke.pirate@gmail.com
 *_SP15_OL: C/C++ Programming II : Fundamental Programming Concepts, 109824, Ray Mitchell
 *8/8/15
 *C2A8E1_MergeAndDisplay.cpp
 *Win7
 *Visual C++ 11.0
 *
 *Takes an array of open ifstream objects, and alternates files to output text from
 *Email title: C2A8E1_U06369876
 */
#include <fstream>
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

void MergeAndDisplay(ifstream files[], size_t count)
{
   //Creates a buffer to readlines into
   string buffer;
   //Save the start of input array, and set end of loop
   ifstream *startSave = files, *end = files + count;
   while (count != 0)
   {
      for (files = startSave; files < end; ++files) 
      {
         if (!files->is_open())
            continue;
         //reads the next
         getline(*files, buffer);
         //Need to check if data is actually present...may not be the best way
         if (files->eof())
         {
            //File has reached the end, close and subtract one from count
            files->close();
            --count;
         }
         else
            cout << buffer << "\n";
      }
   }
   delete[] files;
}
