#include <fstream>
#include <iostream>
#include <cstdlib>
using namespace std;

void OpenFileBinary(const char *fileName, ifstream &inFile)
{
   inFile.open(fileName, ios_base::in | ios_base::binary);
   if (!inFile.is_open()){
      cerr  << "Couldn't open file " << fileName << "\n";
      exit(EXIT_FAILURE);
   }
}
