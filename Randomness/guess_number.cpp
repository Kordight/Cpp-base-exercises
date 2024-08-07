/* Task: Write. a program that Wy selects a number from 1 to 100 and then lets the user guess it.
The program should suggest whether the number indicated by the user is too low, too high, or correct.
Extra: Write a program that solves the guess from task #2. How many questions does your program need to guess the number drawn?
*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int random_number_in_range(int range_min, int range_max)
{
    return range_min + std::rand() % (range_max - range_min + 1);
}
bool is_number_in_range(int number, int range_min, int range_max)
{
    return (number <= range_max) && (number >= range_min);
}

void guess_number_human()
{
    int random_number = 1 + std::rand() % (100 - 1 + 1);
    int user_given_number = 0;

    do
    {
        cout << "Guess a number:\n";
        cin >> user_given_number;
        if (user_given_number == random_number)
        {
            cout << "You won!\n";
            break;
        }
        else if (user_given_number > random_number)
        {
            cout << "Your number is to great!\n";
        }
        else if (user_given_number < random_number)
        {
            cout << "Your number is to small\n";
        }
    } while (user_given_number != random_number);
    cout << "You won! The number was: " << random_number << endl;
}
void guess_number_computer()
{
    int user_given_number, answer, computer_number, attempts = 0;
    int range_min = 1;
    int range_max = 100;

    cout << "Preparation.\n";
    do
    {
        cout << "Please give number in range 1-100\n";
        cin >> user_given_number;
    } while (!is_number_in_range(user_given_number, 1, 100));

    cout << "Provided number: " << user_given_number << endl;
    cout << "The game has started!\n";

    do
    {
        computer_number = random_number_in_range(range_min, range_max);
        cout << "Reminder: Number provided by user = " << user_given_number << endl;
        cout << "Search range: (" << range_min << "-" << range_max << ").\n";
        cout << "Is your number: " << computer_number << "?\n";

        attempts++;
        do
        {
            cout << "Options\n 1 - Yes\n 2 - Too big\n 3 - Too small\n";
            cin >> answer;
        } while (!is_number_in_range(answer, 1, 3));

        switch (answer)
        {
        case 1:
            break;
        case 2:
            cout << "Adjusting range...\n";
            range_max = computer_number - 1;
            break;
        case 3:
            cout << "Adjusting range...\n";
            range_min = computer_number + 1;
            break;
        default:
            break;
        }
    } while (computer_number != user_given_number);

    cout << "Game over!\n"
         << "I won in " << attempts << " attempts!\n";
}
int main()
{
    srand(time(NULL));
    int function_to_run = 0;
    cout << "Which function to run?\n 1 - guess_number_human\n 2 - guess_number_computer\n";
    cin >> function_to_run;
    switch (function_to_run)
    {
    case 1:
        guess_number_human();
        break;
    case 2:
        guess_number_computer();
        break;
    default:
        guess_number_human();
        break;
    }

    return 0;
}