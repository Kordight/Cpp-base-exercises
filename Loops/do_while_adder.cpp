// Task:Write a program that calculates the cumulative sum of numbers entered by the user, and terminates when the user enters 0.
#include <iostream>

using namespace std;
int main()
{
    int userInput, sum, iteration;
    sum, iteration = 0;
    cout << "Enter your numbers:\n";
    do
    {
        iteration++;
        cin >> userInput;
        if (cin.fail())
        {
            cout << "Invalid input. Please enter a number." << endl;
            cin.clear();             // Clear the error flag
            cin.ignore(10000, '\n'); // Skip bad input
            continue;                // Restart the loop
        }
        sum += userInput;
    } while (userInput != 0);
    cout << "Loop finished, user have send 0! The loop had " << iteration << " iteration(s).\n The sum is:" << sum << endl;
    return 0;
}