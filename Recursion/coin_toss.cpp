#include <iostream>
#include <string>

using namespace std;

void toss_coin(int n, int &counter, string coin_side = "")
{
    if (n == 0)
    {
        cout << coin_side << endl;
        counter++;
    }
    else
    {
        toss_coin(n - 1, counter, coin_side + "O");
        toss_coin(n - 1, counter, coin_side + "R");
    }
}

int main()
{
    int coin_toss_counter = 0;
    toss_coin(4, coin_toss_counter);
    cout << "Recursion had: " << coin_toss_counter << " iterations. \n";
    return 0;
}