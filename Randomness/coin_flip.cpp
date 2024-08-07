// Task: Write a program that simulates a coin toss. Run it many times, Do the results obtained look random in your opinion?
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(time(NULL));
    for (size_t i = 0; i < 5; i++)
    {
        int coin_result = 0 + std::rand() % (1 - 0 + 1);
        cout << "Coin " << i << " result: " << coin_result << endl;
    }
    return 0;
}