// Very simple program that involves ENUM and switch. Nothing special.

#include <iostream>

using namespace std;

int main()
{
    enum week
    {
        MON,
        TUE,
        WEN,
        THU,
        FRI,
        SAT,
        SUN
    };
    week day_of_week = THU;
    switch (day_of_week)
    {
    case MON:
        cout << "Today is Monday!\n";
        break;
    case TUE:
        cout << "Today is Tuesday!\n";
        break;
    case WEN:
        cout << "Today is Wednesday!\n";
        break;
    case THU:
        cout << "Today is Thursday!\n";
        break;
    case FRI:
        cout << "Today is Friday!\n";
        break;
    case SAT:
        cout << "Today is Saturday!\n";
        break;
    case SUN:
        cout << "Today is Sunday!\n";
        break;
    default:
        break;
    }
    return 0;
}