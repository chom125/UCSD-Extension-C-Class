//
//  C1A7E1_main.cpp
//  Class Test
//
//  Created by Craig Ricker on 6/1/15.
//  Copyright (c) 2015 Jortssports. All rights reserved.
//

#include <iostream>
#include <iomanip>
#include "C1A7E1_MyTime.h"
using namespace std;

MyTime *DetermineElapsedTime(const MyTime *tp1, const MyTime *tp2);
int main()
{
//    for (int loop_count = 0; loop_count < 3; loop_count++)
//    {
//        cout << "Enter time point one, space separated:\n";
//        cin >> tm1.hours >> tm1.minutes >> tm1.seconds;
//        cout << "Enter time point one, space separated:\n";
//        cin >> tm2.hours >> tm2.minutes >> tm2.seconds;
//        cout << "entering function!";
//        DetermineElapsedTime(const tm1, const tm2);
//    }
    const MyTime tm1 = { 2, 0, 0};
    const MyTime tm2 = { 0, 0, 0};
    MyTime time_dif = *DetermineElapsedTime(&tm1, &tm2);
    cout << "The time elapsed from ";
    cout << setfill('0') << setw(2) << tm1.hours << ":";
    cout << setfill('0') << setw(2) << tm1.minutes << ":";
    cout << setfill('0') << setw(2) << tm1.seconds;
    cout << " to ";
    cout << setfill('0') << setw(2) << tm2.hours << ":";
    cout << setfill('0') << setw(2) << tm2.minutes << ":";
    cout << setfill('0') << setw(2) << tm2.seconds;
    cout << " is ";
    cout << time_dif.hours << ":" << time_dif.minutes << ":" << time_dif.seconds << "\n";
}
