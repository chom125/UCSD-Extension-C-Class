//
//  C1A7E1_DetermineElapsedTime.cpp
//  Class Test
//
//  Created by Craig Ricker on 6/1/15.
//  Copyright (c) 2015 Jortssports. All rights reserved.
//

#include <iostream>
#include "C1A7E1_MyTime.h"
using namespace std;
MyTime *DetermineElapsedTime(const MyTime *tp1, const MyTime *tp2)
{
    static MyTime return_time;
    MyTime testy1, testy2;
    testy1 = *tp1;
    testy2 = *tp2;
    long time_point_dif;
    time_point_dif = (long(testy1.hours) * 3600 + long(testy1.minutes) * 60 + long(testy1.seconds)) - \
    (long(testy2.hours) * 3600 + long(testy2.minutes) * 60 + long(testy2.seconds));
    return_time.hours = int(time_point_dif / 3600);
    time_point_dif -= return_time.hours * 3600;
    return_time.minutes = int(time_point_dif / 60);
    time_point_dif -= return_time.minutes * 60;
    return_time.seconds = int(time_point_dif);
    return(&return_time);
    
}
