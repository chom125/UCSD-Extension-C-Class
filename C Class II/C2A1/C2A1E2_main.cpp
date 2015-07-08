/*
 *Craig Ricker, U06369876
 *lucke.pirate@gmail.com
 *_SP15_OL: C/C++ Programming II : Fundamental Programming Concepts, 109824, Ray Mitchell
 *7/1/15
 *C2A1E2_main.c
 *Win7
 *Visual C++ 11.0
 *
 *Purpose of this program is to demonstrate basic C++ abilities
 *Email title: C2A1E2_U06369876
 */
#include <iostream>
#include <cstdlib>
using namespace std;

//class PersonInfo{
//    private int age;
//    protected bool error;
//    
//    public:
//    
//    
//};
//
//PersonInfo *DeclareCppStruct()
//{
//    //Creaites an instnace of PersonInfo and returns it
//    person = PersonInfo();
//    return(person);
//}

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

void PrintSomething(const char* param)
{
    //Function overloading, pointer to a char instance
    cout << param;
}

void TestPrintSomething()
{
    PrintSomething();
    PrintSomething(23.4);
    PrintSomething(1825e-1);
    PrintSomething(&"Hello world!");
}

long DisplayBases(double value)
{
    //Prints out value in different formats
    cout << value << oct << value << hex << value;
    return(value);
}

void DisplayCharValues()
{
    //Prints out the integer value of three characters
    const char alpha = 'a';
    const char beta = 'b';
    const char zeta = 'z';
    printf("%d\n%d\n%d\n", alpha, beta, zeta);
    
}

int main(void)
{
    //Main program, prints and returns successful
    cout << "Assignment 1 Exercise 2 Complete!";
    return(EXIT_SUCCESS);
}