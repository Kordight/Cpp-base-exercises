#include <iostream>

using namespace std;

int power(int x, int y);
int main()
{
    cout << power(2,2);
    return 0;
}


int power(int x, int y)
{
    if (y == 0)
    {
        return 1;
    }
    return x * power(x, y - 1);
}