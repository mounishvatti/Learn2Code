#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

// using recursion

bool checkPalindrome(int i, string &str){
    if(i>=str.length()/2){
        return true;
    }
    if(str[i] != str[str.length()-i-1])
        return false;

    return checkPalindrome(i+1, str);
}

int main(){
    string str = "MADAM";
    cout << checkPalindrome(0, str) << endl;
    //reverse(str.begin(), str.end());
    //cout << str;
}