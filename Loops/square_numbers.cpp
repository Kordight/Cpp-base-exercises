// Task: Write a program to display the first 20 square numbers.

#include <iostream>

using namespace std;

int main (){
    const int range = 20;
    for (int i = 0; i < range; i++)
    {
        int square_number = (i+1) * (i+1);
        cout << square_number << endl;
    }
    return 0;
}