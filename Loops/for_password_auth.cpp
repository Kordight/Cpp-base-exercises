// Task:  Write a password verification program that gives the user only a few chances to enter the correct password, making it difficult to use a password cracker.
#include <iostream>
#include <string>
using namespace std;

int main()
{
    // Config these
    int tries = 5;
    string password = "qwerty";
    cout << "Enter your password:";
    for (int i = 0; i <= tries; i++)
    {

        string userInput;
        cin >> userInput;
        if (password == userInput)
        {
            cout << "Password is valid.\n";
            return 0;
        }
        else
        {
            if ((tries - i) > 0)
            {
                cout << "Invalid password!" << tries - i << " tries remain!";
            }
            else
            {
                cout << "All tries has been used!\n";
            }
        }
    }
    return 0;
}