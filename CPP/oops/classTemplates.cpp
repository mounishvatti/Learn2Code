#include <iostream>
using namespace std;

template <class T>
class mypair {
    T values [2];
  public:
    mypair (T first, T second)
    {
      values[0]=first; values[1]=second;
    }
    void display()
    {
        cout << values[0] << " " << values[1] << endl;
    }
};

int main() {
    mypair <int> p1 (1,2);
    mypair <double> p2 (1.45,2.07);

    p1.display();
    p2.display();

    return 0;
}