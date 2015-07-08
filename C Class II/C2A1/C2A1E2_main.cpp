/*
 *Craig Ricker, U06369876
 *lucke.pirate@gmail.com
 *_SP15_OL: C/C++ Programming II : Fundamental Programming Concepts, 109824, Ray Mitchell
 *7/1/15
 *C2A1E2_main.cpp
 *Win7
 *Visual C++ 11.0
 *
 *Purpose of this program is to demonstrate basic C++ abilities
 *Email title: C2A1E2_U06369876
 */
#include <iostream>
#include <cstdlib>
using namespace std;

struct PersonInfo
{
private:
    int age;
protected:
    bool error;
    void DoNothing(double **ppDbl);
public:
    int GetAge(const int *pInt) const { return age + int(pInt); }  
};

PersonInfo *DeclareCppStruct()
{
    //creaites an instnace of personinfo and returns it
    static struct PersonInfo person;
    return(&person);
}

void PrintSomething(double param = 0)
{
    //Function for overloading, takes place if a double or nothing is passed
    cout << param;
}

void PrintSomething(float param)
{
    //Function overloading, float instance
    cout << param;
}

void PrintSomething(const char *param)
{
    //Function overloading, pointer to a char instance
    cout << param;
}

void TestPrintSomething()
{
    const double DOUBLEV = 23.4;
    const float FLOATV = 1825e-1;
    PrintSomething();
    PrintSomething(DOUBLEV);
    PrintSomething(FLOATV);
    PrintSomething("Hello world!");
}

long DisplayBases(double value)
{
    //Prints out value in different formats
    long intPart = int(value) / 1;
    cout << int(intPart) << '\n' << oct << int(intPart) << '\n' << hex << int(intPart);
    return(intPart);
}

void DisplayCharValues()
{
    //Prints out the integer value of three characters
    const char ALPHA = 'A';
    const char BETA = 'B';
    const char ZETA = 'Z';
    cout << int(ALPHA) << int(BETA) << int(ZETA);
}

int main()
{
    //Main program, prints and returns successful
    cout << "Assignment 1 Exercise 2 Complete!";
    return(EXIT_SUCCESS);
}
