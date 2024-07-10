#include <bits/stdc++.h>
using namespace std;

class MyStack
{
public:
    queue<int> q1, q2;

    void push(int x)
    {
        q2.push(x);
        while (!q1.empty())
        {
            q2.push(q1.front());
            q1.pop();
        }
        swap(q1, q2);
    }

    int pop()
    {
        int x = q1.front();
        q1.pop();

        return x;
    }

    int top()
    {
        return q1.front();
    }
    bool empty()
    {
        return q1.empty();
    }
};

int main(){
    MyStack st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    cout<<st.top()<<endl;
    cout<<st.pop()<<endl;
    cout<<st.top()<<endl;
    cout<<st.pop()<<endl;
}
