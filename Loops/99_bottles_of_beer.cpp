/*
Task: Write a program that prints the full lyrics of the song "99 Bottles of Beer".

Reference:
99 bottles of beer on the wall, 99 bottles of beer.
Take one down and pass it around, 98 bottles of beer on the wall.

...

No more bottles of beer on the wall, no more bottles of beer.
Go to the store and buy some more, 99 bottles of beer on the wall.

*/
#include <iostream>

using namespace std;

int main()
{
    for (int beer = 99; beer > 1; beer--)
    {
        cout << beer << " bottles of beer on the wall, " << beer << " bottles of beer.\n";
        cout << "Take one down and pass it around, " << beer - 1 << " bottles of beer on the wall.\n";
    }
    cout << "No more bottles of beer on the wall, no more bottles of beer.\n Go to the store and buy some more, 99 bottles of beer on the wall.";
    return 0;
}