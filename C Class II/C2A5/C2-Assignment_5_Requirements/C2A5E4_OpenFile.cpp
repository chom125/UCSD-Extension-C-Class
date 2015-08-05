//
//  C2A5E4_OpenFile.cpp
//  Class Test
//
//  Created by Craig Ricker on 8/4/15.
//  Copyright (c) 2015 Jortssports. All rights reserved.
//
#include <cstdlib>
#include <fstream>
#include <iomanip>
#include <iostream>
using namespace std;

#include "C2A5E4_StatusCode-Driver.h"

void OpenFile(const char *fileName, ifstream &inFile)
{
   inFile.open(fileName);
   if (!inFile.is_open())
   {
      cerr << "Couldn't open file " << fileName << '\n';
      exit(EXIT_FAILURE);
   }
}