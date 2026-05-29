#include <iostream>
using namespace std;

class Animal
{

public:
    virtual void Speak() 
    {
        cout << " Speaking animals." << endl;
    }
};

class Horse : public Animal
{
public:
    void Speak()
    {
        cout << " Hekh cheekh, heck cheekh." << endl; // here it's virtual functions
    }
};

int main()
{
    Animal *a = new Horse();
    a->Speak();
    delete a;

    return 0;
}