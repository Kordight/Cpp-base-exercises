/*
Task: Write a program that provides an option to sum the results of a survey in which there can be three different values.
    The input entered into the program is a survey question and three possible answers.
    The first answer is assigned a value of 1,
    the second is assigned a value of 2,
    and the third is assigned a value of 3.
    The answers are summed until the user enters then the program should show the results of the survey.
    Try to generate a bar chart, showing the results scaled to fit on the screen regardless of the number of answers given.

Possible solution: i < ( ( var * scale ) / max )
    chart object expresion (var * scale) / max
    var - current value
    scale - How much squares should be generated
    max - maximum value in survey
    max will always get n-scale amount.
*/

// TO DO Later
#include <iostream>
#include <limits>
#include <algorithm>
#include <string>

using namespace std;
void draw_chart(int var, int scale, int max, const string &chartName)
{
    cout << chartName << "     ";
    for (int i = 0; i < ((var * scale) / max); i++)
    {
        cout << "[]";
    }
    cout << endl;
}
void showMenu()
{
    cout << "Survey options \n 1 - Option A \n 2 - Option B \n 3 - Option C\n";
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
    int instruction;
    int scale_paramater = 10;
    int option_a = 0, option_b = 0, option_c = 0;
    showMenu();
    do
    {
        cin >> instruction;
        instruction = checkInstruction(0, 3, instruction);
        switch (instruction)
        {
        case 1:
            cout << "Voted for option A\n";
            option_a++;
            break;
        case 2:
            cout << "Voted for option B\n";
            option_b++;
            break;
        case 3:
            cout << "Voted for option C\n";
            option_c++;
            break;
        default:
            cout << "Something went wrong!\n Instruction is: " << instruction << endl;
            break;
        }
    } while (instruction != 0);
    int max_variable = max({option_a, option_b, option_c});
    cout << "Survey have ended!\n Results:\nOption A: " << option_a << endl
         << "Option B: " << option_b << endl
         << "Option C: " << option_c << endl
         << "Max variable is: " << max_variable << endl;
    draw_chart(option_a, scale_paramater, max_variable, "Option A");
    draw_chart(option_b, scale_paramater, max_variable, "Option B");
    draw_chart(option_c, scale_paramater, max_variable, "Option C");
    return 0;
}