// Task:Write a program that provides a menu allowing the user to choose from various options. If the user's response does not match any of the options, display the menu again.
#include <iostream>
#include <string>
#include <limits>

using namespace std;
void showMenu()
{
    std::cout << "What to display?\n 1 - Hello \n 2 - World\n";
}
int checkInstruction(int minimum_operation_number, int maximum_operation_number, int instruction)
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
            showMenu();
            cin >> instruction;
        }
    }
    return (instruction);
}
int main()
{
    string outMessage;
    showMenu();
    int instruction;
    cin >> instruction;
    instruction = checkInstruction(1, 2, instruction);
    switch (instruction)
    {
    case 1:
        outMessage = "Hello";
        break;
    case 2:
        outMessage = "World";
        break;
    default:
        cout << "Something went wrong\n";
        break;
    }
    cout << "Out message is: " << outMessage << " Instruction is: " << instruction << endl;
    return 0;
}
