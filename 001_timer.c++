#include <iostream>
#include <cstdio>

using namespace std;

int main(void)
{
    int power, time[5];
    do
    {
        scanf("%d %d %d %d", &time[0], &time[1], &time[2], &time[3]);
        power = time[0] + time[1] + time[2] + time[3];
        if (power)
        {
            if (time[2] <= time[0])
                time[2] += 24;
            if (time[2] <= time[0] && time[1] > time[3])
                time[3] += 60;
            time[4] = (time[2] - time[0]) * 60 + (time[3] - time[1]);
            cout << time[4] << endl;
        }
    } while (power);
}