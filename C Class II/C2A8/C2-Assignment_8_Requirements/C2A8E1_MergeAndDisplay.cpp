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
#include <string>
using namespace std;
const int BUFFERSIZE = 511;

void MergeAndDisplay(ifstream files[], size_t count)
{
   string buffer;
   ifstream *startSave = files;
   //This will run until all files are closed
   while (count != 0)
   {
      for (; *files; ++files)
      {
         //Do an initial check if the file is open, if so, skip it
         if ((*files).is_open())
            continue;
         //Read the line, write data
         //May need to change this line 1 page 2 of assignment
         getline(*files, buffer);
         cout << buffer;
         //Checks if current file has reached EOF
         if ((*files).eof())
         {
            //If file has reached EOF, close it, subtract one from count
            (*files).close();
            --count;
         }
      }
   }
}