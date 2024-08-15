// Task: Write a program that allows the user to fill the structure with the name, address and phone number of one person.

#include <iostream>
#include <string>

using namespace std;

struct simple_contact_form
{
    string first_name;
    string surname;
    int phone_number;
    string address;
};

int main()
{
    simple_contact_form form;
    cout << "Please enter first name:\n";
    cin >> form.first_name;
    cout << "Please enter surname:\n";
    cin >> form.surname;
    cout << "Please enter the phone number:\n";
    cin >> form.phone_number;
    cout << "Please enter the address:\n";
    cin >> form.address;
    cout << "Displaying data: \n";
    cout << "Name:" << form.first_name << endl
         << "Surname: " << form.surname << endl
         << "Phone number: " << form.phone_number << endl
         << "Address: " << form.address << endl;
    return 0;
}