#include <iostream>
#include <cstring>
using namespace std;

class Base
{

public:
    virtual void show()
    {
        cout << "Base Class Show()" << endl;
    };
};

class Derived : public Base
{
public:
    void show()
    {
        cout << "Derived Class Show()" << endl;
    }
};

// Example-2 Pure Virtual function
class Shape
{
public:
    virtual void draw()
    {
        cout << "Drawing Parent(Shape)" << endl; // pure virtual function
    };
};

class Circle : public Shape
{
public:
    void draw()
    {
        cout << "Drawing Circle" << endl;
    }
};

class Rectangle : public Shape
{
public:
    void draw()
    {
        cout << "Drawing Rectangle" << endl;
    }
};

int main()
{
    Base *ptr;
    Derived d;

    ptr = &d;
    ptr->show();

    // for Example-2 Pure Virtual Functions here's
    Circle c;
    c.draw();

    // return 0;
}