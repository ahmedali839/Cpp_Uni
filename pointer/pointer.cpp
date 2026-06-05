#include <iostream>
using namespace std;

class Student
{
};

int main()
{
    int t = 1;
    int *p = &t;

    cout << "t: " << t << endl;
    cout << "t: " << &t << endl;
    cout << "p: " << p << endl;
    cout << "p: " << *p << endl;
}