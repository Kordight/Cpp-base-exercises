#include <iostream>

using namespace std;

int factorial(int n);

int main()
{
    int i = 4;
    cout << "Factorial of number " << i << " is equal: " << factorial(i) << endl;
}
int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}