#include <iostream>
using namespace std;

// using backtracking

void func1(int i, int n)
{ // 1 -> N
    if (i < 1)
    {
        return;
    }
    func1(i - 1, n);
    cout << i << endl;
}

void func2(int i, int n)
{ // N -> 1
    if (i > n)
    {
        return;
    }
    func2(i + 1, n);
    cout << i << endl;
}

int main()
{
    func1(5, 5);
    cout << endl;
    func2(1, 5);
}