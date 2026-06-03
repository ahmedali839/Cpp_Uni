#include <iostream>
#include <cstring>
using namespace std;

class Base
{
public:
    virtual void display()
    {
        cout << "Class Base: Display()" << endl;
    }
    Base()
    {
        cout << "Base Running" << endl;
    }
};
class Derived : public Base
{
public:
    virtual void display()
    {
        cout << "Class Derived: Display()" << endl;
    }
    Derived()
    {
        cout << "Derived Running" << endl;
    }
};

int main()
{

    Base *ptr;
    Base der;
    Derived d;

    der.display();

    ptr = &d;
    ptr->display();

    return 0;
}