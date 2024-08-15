#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

int random_number_in_range(int range_min, int range_max)
{
    return range_min + std::rand() % (range_max - range_min + 1);
}
int sum_table(int table[])
{
    int sum = 0;
    for (size_t i = 0; i < 5; i++)
    {
        sum += table[i];
    }
    return sum;
}
void print_separated_lines(int length = 6, bool new_line = true)
{
    string sep_line(length, '_');
    cout << sep_line;

    if (new_line)
    {
        cout << endl;
    }
}
int main()
{
    srand(time(NULL));
    int num_table[5];

    // Fill table with numbers
    for (size_t i = 0; i < 5; i++)
    {
        num_table[i] = random_number_in_range(-5, 5);
    }
    // Read numbers from table
    for (size_t i = 0; i < 5; i++)
    {
        cout << "ID: " << i << " Value: " << num_table[i] << endl;
    }
    print_separated_lines();
    // Return max value from table
    int max_val = num_table[0];
    for (size_t i = 0; i < 5; i++)
    {
        if (max_val < num_table[i])
        {
            max_val = num_table[i];
        }
    }
    cout << "Max value is: " << max_val << endl;
    print_separated_lines();
    // Return min value from table
    int min_val = num_table[0];
    for (size_t i = 0; i < 5; i++)
    {
        if (min_val > num_table[i])
        {
            min_val = num_table[i];
        }
    }
    cout << "Min value is: " << min_val << endl;
    print_separated_lines();
    // Sum table
    cout << "Table sum is: " << sum_table(num_table) << endl;
    print_separated_lines();
    return 0;
}