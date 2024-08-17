#include <iostream>

using namespace std;

int main()
{
    int x; 
    int *p_int;

    p_int = &x; 
    cout << "Enter number" << endl;
    cin >> x;
    cout << *p_int << endl;
    *p_int = 10;
    cout << x;
}