#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

using Tmessage = string;

vector<Tmessage> convert_message_to_vector(const Tmessage &message);

int main()
{
    Tmessage message_box;
    cout << "Enter text message:\n";
    getline(cin, message_box);

    vector<Tmessage> message_box_words = convert_message_to_vector(message_box);

    cout << "Words in message:\n";
    for (const auto &word : message_box_words)
    {
        cout << word << endl;
    }

    return 0;
}

vector<Tmessage> convert_message_to_vector(const Tmessage &message)
{
    vector<Tmessage> words;
    string word;
    for (char ch : message)
    {
        if (ch == ' ')
        {
            if (!word.empty())
            {
                words.push_back(word);
                word.clear();
            }
        }
        else
        {
            word += ch;
        }
    }
    if (!word.empty())
    {
        words.push_back(word);
    }
    return words;
}
vector<Tmessage> sort_words_alphabetically(const vector<Tmessage> &message_vector)
{
    vector<Tmessage> sorted_vector = message_vector;
    std::sort(sorted_vector.begin(), sorted_vector.end());
    return sorted_vector;
}