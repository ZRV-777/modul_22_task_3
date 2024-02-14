#include <iostream>
#include <map>
#include <string>

using namespace std;

bool is_anagramm (string &word_1, string &word_2)
{
    if (word_1.length() != word_2.length())
    {
        return false;
    }

    map <char, int> word_1_map;
    map <char, int> word_2_map;
    for (int i = 0; i < word_1.length(); i++)
    {
        if (word_1_map.find(word_1[i]) == word_1_map.end())
        {
            word_1_map[word_1[i]] = 1;
        }
        else
        {
            word_1_map[word_1[i]]++;
        }
    }

    for (int i = 0; i < word_2.length(); i++)
    {
        if (word_2_map.find(word_2[i]) == word_2_map.end())
        {
            word_2_map[word_2[i]] = 1;
        }
        else
        {
            word_2_map[word_2[i]]++;
        }
    }

    if (word_1_map == word_2_map) return true;

    return false;
}

int main()
{
    string word_1;
    string word_2;

    cout << "Enter word 1: ";
    cin >> word_1;

    cout << "Enter word 2: ";
    cin >> word_2;

    is_anagramm(word_1, word_2) ? cout << "Anagramm!" : cout << "Not anagramm";
}