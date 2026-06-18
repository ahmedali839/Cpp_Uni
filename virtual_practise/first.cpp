#include <iostream>
using namespace std;

class Base
{

public:
    virtual void show()
    {
        cout << "here, Base Show function." << endl;
    };
    virtual ~Base()
    {
        cout << "here, Base Desconstructor." << endl;
    }
};

class Derived : public Base
{
public:
    void show()
    {
        cout << "here, Derived Show function." << endl;
    };
    ~Derived()
    {
        cout << "here, Derived Desconstructor." << endl;
    }
};

int main()
{
    Base *b;
    Derived obj;

    b = &obj;
    b->show();
}
