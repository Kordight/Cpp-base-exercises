#include <iostream>
#include <vector>
#include <string>

using namespace std;
void print_vector(const vector<double> &numbers);
void print_text_in_frame(const string &text_to_display, const int &frame_width)
{
    int message_length = text_to_display.size() + 2 * frame_width + 4;
    string line(message_length, '*');
    string border_width(frame_width, '*');
    string message = line + "\n";
    message += border_width + "  " + text_to_display + "  " + border_width + "\n";
    message += line + "\n";
    cout << message;
}
void line_between_letters(const string &message)
{
    /*
        for (auto letter : message)
    {
        cout << letter << "-";
    }
    */
    for (size_t i = 0; i < message.size(); i++)
    {
        cout << message[i];
        if (i != message.size() - 1)
        {
            cout << "-";
        }
    }
}
int main()
{
    vector<double> numbers{3.14, 25, 35, 37.21, 23.05};
    cout << "Enter number to add" << endl;
    double number_to_add = 0;
    cin >> number_to_add;
    numbers.push_back(number_to_add);
    // Reading
    print_vector(numbers);
    // Modify
    size_t vector_index = 0;
    for (auto &num : numbers)
    {
        if (vector_index % 2 == 0)
        {
            num *= 1.2;
            cout << "Modified index: " << vector_index << endl;
        }
        vector_index++;
    }
    print_text_in_frame("Modifying vector", 3);
    print_vector(numbers);
    line_between_letters("Test");
    return 0;
}
void print_vector(const vector<double> &numbers)
{
    for (auto num : numbers)
    {
        cout << "Number: " << num << ".\n";
    }
}