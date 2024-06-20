// Task:Write a program that provides a menu allowing the user to choose from various options. If the user's response does not match any of the options, display the menu again.
#include <iostream>
#include <string>
#include <limits>

using namespace std;

void showMenu(bool bIsCalculator);
int checkInstruction(int minOpNum, int maxOpNum, bool bIsCalculator);
void bottlesOfBeer();
double add(double a, double b);
double subtract(double a, double b);
double multiply(double a, double b);
double divide(double a, double b);
void simpleCalculator();

void showMenu(bool bIsCalculator)
{
    if (bIsCalculator)
    {
        cout << "Possible operations\n"
             << "1 - add\n"
             << "2 - subtract\n"
             << "3 - multiply\n"
             << "4 - divide\n"
             << "5 - return to menu\n";
    }
    else
    {
        cout << "What to display?\n"
             << "1 - 99 bottles of beer\n"
             << "2 - Calculator\n";
    }
}
int checkInstruction(int minimum_operation_number, int maximum_operation_number, int instruction, const bool &bIsCalculator)
{
    while (instruction < minimum_operation_number || instruction > maximum_operation_number)
    {
        if (!cin) // or if(cin.fail())
        {
            // user didn't input a number
            cin.clear();                                              // reset failbit
            cin.ignore(numeric_limits<std::streamsize>::max(), '\n'); // skip bad input
            // next, request user re-input
        }
        else
        {
            cout << "Invalid instruction, please try again..." << endl;
            showMenu(bIsCalculator);
            cin >> instruction;
        }
    }
    return (instruction);
}

void bottles_of_beer()
{
    for (int beer = 99; beer > 1; beer--)
    {
        cout << beer << " bottles of beer on the wall, " << beer << " bottles of beer.\n";
        cout << "Take one down and pass it around, " << beer - 1 << " bottles of beer on the wall.\n";
    }
    cout << "No more bottles of beer on the wall, no more bottles of beer.\n Go to the store and buy some more, 99 bottles of beer on the wall.";
}
double add(double a, double b)
{
    double result = a + b;
    return result;
}
double subtract(double a, double b)
{
    double result = a - b;
    return result;
}
double divide(double a, double b)
{
    double result = 0;
    if (b == 0)
    {
        cout << "Cannot divide by zero.\n";
        return result;
    }
    result = a / b;
    return result;
}
double multiply(double a, double b)
{
    double result = a * b;
    return result;
}
void simple_calculator()
{
    showMenu(true);
    int instruction;
    cin >> instruction;
    instruction = checkInstruction(1, 2, instruction, false);
    double a;
    cout << "Enter number A\n";
    cin >> a;
    double b;
    cout << "Enter number B\n";
    cin >> b;
    switch (instruction)
    {
    case 1:
        cout << "Result: " << add(a, b) << endl;
        break;
    case 2:
        cout << "Result: " << subtract(a, b) << endl;
        break;
    case 3:
        cout << "Result: " << multiply(a, b) << endl;
        break;
    case 4:
        cout << "Result: " << divide(a, b) << endl;
        break;
    default:
        cout << "Invalid operation.\n";
        break;
    }
}
int main()
{
    string outMessage;
    showMenu(false);
    int instruction;
    cin >> instruction;
    instruction = checkInstruction(1, 2, instruction, false);
    switch (instruction)
    {
    case 1:
        bottles_of_beer();
        break;
    case 2:
        simple_calculator();
        break;
    default:
        cout << "Something went wrong\n";
        break;
    }
    return 0;
}
