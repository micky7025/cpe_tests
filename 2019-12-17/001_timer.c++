#include <iostream>
#include <cstdio>
//                                                      
//   _____ _____ _____    _____ _____ _____ _____ _____ 
//  |     |  _  |   __|  |_   _|   __|   __|_   _|   __|
//  |   --|   __|   __|    | | |   __|__   | | | |__   |
//  |_____|__|  |_____|    |_| |_____|_____| |_| |_____|
//                                                      
//  
// CPE_TESTS
//    Taiwan CPE, Collegiate Programming Examination, Test Examples 
// Copyright (C) 2019 Randy Chen <https://randychen.tk/>
// LICENSE: WTFPL 2.0 (http://www.wtfpl.net/)

using namespace std;

int main(void)
{
    int power, time[5];
    do
    {
        scanf("%d %d %d %d", &time[0], &time[1], &time[2], &time[3]);
        power = time[0] || time[1] || time[2] || time[3];
        if (power)
        {
            if (time[2] < time[0] || (time[2] == time[0] && time[3] < time[1]))
                time[2] += 24;
            time[4] = (time[2] - time[0]) * 60 + (time[3] - time[1]);
            cout << time[4] << endl;
        }
    } while (power);
}
