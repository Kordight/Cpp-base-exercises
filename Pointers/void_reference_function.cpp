#include <iostream>
#include <cstdint>

using namespace std;

void add_and_multiply(int &number_a, int &number_b, int *sum, int *multiply)
{
    *sum = number_a + number_b;
    *multiply = number_a * number_b;
}

int main()
{
    int number_a, number_b, sum, multiply;
    int *p_sum, *p_multiply;
    p_sum = &sum;
    p_multiply = &multiply;

    cout << "Enter number A:\n";
    cin >> number_a;
    cout << "Enter number B:\n";
    cin >> number_b;
    add_and_multiply(number_a, number_b, &sum, &multiply);
    cout << "Result: " << *p_sum << "," << *p_multiply << endl;
    cout << "Address of 'p_sum' in decimal: " << reinterpret_cast<uintptr_t>(&p_sum) << endl;
    cout << "Address of 'p_multiply' in decimal: " << reinterpret_cast<uintptr_t>(&p_multiply) << endl;

    return 0;
}