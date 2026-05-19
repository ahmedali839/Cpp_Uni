#include <iostream>
using namespace std;

class Number
{
    int value;

public:
    Number(int a)
    {
        value = a;
        cout << "Constructor" << endl;
    }
    Number(Number &b)
    {
        value = b.value;
        cout << "Copy Constructor" << endl;
    }
    void display()
    {
        cout << "Display Value: " << value;
    }
};

int main()
{
    Number n1(100);
    Number n2 = n1; // COpy Constructor

    n2.display();
}