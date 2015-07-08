/*
 *Craig Ricker, U06369876
 *lucke.pirate@gmail.com
 *_SP15_OL: C/C++ Programming I : Fundamental Programming Concepts, 106644, Ray Mitchell
 *6/3/15
 *C1A8E3_main.cpp
 *Win7
 *Visual C++ 11.0
 *
 *This program allowed us to explore reading files into C, and the use of argc/argv
 *This program will print the lines from an input file, by blocks determined by the argument
 *Passed at run time.  Pass the text name and line number through the use of argv
 *Email title: C1A8E3_U06369876
 */

#include <iostream>
#include <cstdlib>
#include <cstring>
#include <fstream>
using namespace std;
const int INPUT_INDEX = 1, OUTPUT_INDEX = 2, FIND_INDEX = 3;
const int WRITE_INDEX = 4, ARGC_SIZE = 5, BUFFERSIZE = 256;


int main(int argc, char *argv[])
{
   //Initializes all variables required for the program, may need to change this.
   ifstream fIn;
   ofstream fOut; 
   char buff[BUFFERSIZE];
   char fTex[BUFFERSIZE], nTex[BUFFERSIZE];
   int nTexLen, fTexLen;
   //This copies argv into fTex and nTex, there may be a more eloquent way to do this
   strcpy(fTex, argv[FIND_INDEX]);
   strcpy(nTex, argv[WRITE_INDEX]);
   nTexLen = int(strlen(nTex));
   fTexLen = int(strlen(fTex));
   //This will check if the proper number of arguments is passed
   if (argc != ARGC_SIZE)
   {
      cout << "Wrong number of arguments passed, exiting";
      exit(EXIT_FAILURE);
   }
   //Opens the files
   fIn.open(argv[INPUT_INDEX]);
   fOut.open(argv[OUTPUT_INDEX]);
   //This checks if either of the files fails to open at one step
   if (!fIn.is_open() || !fOut.is_open())
   {
      cout << "Failed!";
      exit(EXIT_FAILURE);
   }
   //Loops through the text until EOF is reached
   while (fIn.getline(buff, sizeof(buff)))
   {
      char *cp1, *cp2;
      //Only enters the loop if strstr returns anything aka an occurrence of fTex
      for (cp1 = &buff[0]; cp2 = strstr(cp1, fTex);)
      {
         //This will write What cp1 is pointing to, until the calculated location of fTex
         fOut.write(cp1, cp2 - cp1);
         //Writes the replacement
         fOut.write(nTex, nTexLen);
         //Updates the index based on length of fTex
         cp1 = cp2 + fTexLen;
      }
      fOut << cp1 << '\n';
   }
   //This will close both files, although this occurs automatically after termination
   fIn.close();
   fOut.close();
   return 0;
}
