#include <iostream>
#include <map>
using namespace std;

int main()
{
    string s;
    cout << "Enter a string: ";
    cin >> s;

    // using map datastructure to count the number of occurances of each character in a string

    map<char, int> charmap;

    for (int i = 0; i < s.length(); i++)
    {
        charmap[s[i]]++;
    }

    cout << "Using a map" << endl;

    for (auto it : charmap)
    {
        cout << it.first << "->" << it.second << endl;
    }

    // doing the same but with the help of an array

    cout << "Using an array" << endl;

    int chararr[26] = {0};

    for (int i = 0; i < s.length(); i++)
    {
        chararr[s[i]]++;
    }

    for (int i = 0; i < s.length(); i++)
    {
        cout << s[i] << "->" << chararr[s[i]] << endl;
    }

    return 0;
}