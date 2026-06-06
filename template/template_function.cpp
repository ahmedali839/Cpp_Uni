#include <iostream>
using namespace std;

class Student
{
private:
    int x;

public:
};

template <class T>
T larger(T a, T b)
{
    if (a > b)
    {
        cout << "Bigger is: " << a << endl;
    }
    else
    {
        cout << "Bigger is: " << b << endl;
    };

    return 0;
};

int main()
{

    larger(333, 4);
}