// longest substring without repeating characters

#include <iostream>
#include <string>
#include <unordered_set>
#include <algorithm>
using namespace std;

int funcLongestSubstring(string st) // brute force
{
    int n = st.length();

    int len = 0;
    int maxLen = 0;

    for (int i = 0; i < n; i++)
    {
        unordered_set<char> s;
        for (int j = i; j < n; j++)
        {
            if (s.find(st[j]) != s.end())
            {
                break;
            }
            len = j - i + 1;
            maxLen = max(len, maxLen);
            s.insert(st[j]);
        }
    }
    return maxLen;
}

int main()
{
    string s = "abcabcbb";
    cout << funcLongestSubstring(s);
}