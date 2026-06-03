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

// Example of Pure Virtual Function / Abstract
// any class inlcludes pure V-func(having no body), called Abstract class
// Abstract class, not directly use but derived Cls having pure function body must
class Shape
{
public:
    virtual void size() = 0;
    virtual ~Shape()
    {
        cout << "Desconstructor Shape" << endl;
    }
};

class Circle : virtual Shape
{
public:
    virtual void size()
    {
        cout << "Size in Circle" << endl;
    };
    virtual ~Circle()
    {
        cout << "Desconstructor Circle" << endl;
    }
};

class Triangle : virtual Shape
{
public:
    virtual void size()
    {
        cout << "Size in Triangle" << endl;
    }
    virtual ~Triangle()
    {
        cout << "Desconstructor Triangle" << endl;
    }
};

// // AbstractClass to reduce duplication run copies of parent while nesteds child class inheretence
// // one parent class copy uses for lots of nested child classes
class AbstractClass
{
public:
    void show()
    {
        cout << "AbstractClass Show" << endl;
    }
    ~AbstractClass()
    {
        cout << "AbstractClass Desconstructed" << endl;
    }
};
class Child1 : virtual public AbstractClass
{
public:
    void show()
    {
        cout << "Child1 Show" << endl;
    }
    ~Child1()
    {
        cout << "Child1 Desconstructed" << endl;
    }
};
class Child2 : virtual public AbstractClass
{
public:
    void show()
    {
        cout << "Child2  Show" << endl;
    }
    ~Child2()
    {
        cout << "Child2 Desconstructed" << endl;
    }
};
class NestedChild1 : public Child1, public Child2
{
public:
    void show()
    {
        cout << "NestedChild1  Show" << endl;
    }
    ~NestedChild1()
    {
        cout << "NestedChild1 Desconstructed" << endl;
    }
};

int main()
{

    // Base *ptr;
    // // Base bas;
    // // Derived der;
    // Derived d;

    // // bas.display();
    // // der.display();

    // ptr = &d;
    // ptr->display();

    // // // // Shape s; // not accessible directly cause abstract cls
    // Circle c;
    // Triangle t;

    // c.size();
    // t.size();

    // // // Abstract classes
    NestedChild1 NChild1; // VS response below:

    // // // // With Virtual Class response:
    // // // NestedChild1 Desconstructed
    // // // Child2 Desconstructed
    // // // Child1 Desconstructed
    // // // AbstractClass Desconstructed

    // // // // WithOut Virtual Class response:
    // // // NestedChild1 Desconstructed
    // // // Child2 Desconstructed
    // // // AbstractClass Desconstructed
    // // // Child1 Desconstructed
    // // // AbstractClass Desconstructed

    return 0;
}