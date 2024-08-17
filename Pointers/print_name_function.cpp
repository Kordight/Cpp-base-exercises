#include <iostream>
#include <string>

using namespace std;

void ask_name_and_surname(string *name, string *surname)
{
    cout << "Enter name: \n";
    cin >> *name;
    if (*surname != NULL)
    {
        cout << "Enter surname: \n";
        cin >> *surname;
    }
}
void ref_ask_name_and_surname(string &name, string &surname)
{
    cout << "Enter name: \n";
    cin >> name;
    cout << "Enter surname: \n";
    cin >> surname;
}
int main()
{
    string name;
    string surname;
    ask_name_and_surname(&name, &surname);
    cout << "Name: " << name << endl;
    cout << "Surname: " << surname << endl;
    cout << "Running reference based void." << endl;
    ref_ask_name_and_surname(name, surname);
    cout << "Name: " << name << endl;
    cout << "Surname: " << surname << endl;
    return 0;
}