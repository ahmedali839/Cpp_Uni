#include <iostream>
#include <string>
using namespace std;

class Base
{
private:
    int x = 10;

public:
    virtual void show()
    {
        cout << "here, Base Show function." << endl;
    };
    friend class Derived;
    virtual ~Base()
    {
        cout << "here, Base Desconstructor." << endl;
    }
    Base &thisReturning()
    {

        return cout << *this << endl;
    }
};

class Derived : public Base
{
public:
    void show()
    {
        cout << "here, Derived Show function." << endl;
    };

    void ParentValueAccesing(Base b)
    {
        cout << "Base Class Private Values: " << b.x << endl;
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

    Base b2;
    b2.thisReturning();

    // b = &obj;
    // b->show();

    // obj.ParentValueAccesing(*b);
}
