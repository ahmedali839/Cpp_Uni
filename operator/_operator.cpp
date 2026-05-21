#include <iostream>
using namespace std;

class Student
{
private:
    int x;

public:
    Student(int a) { x = a; }
    // void operator -() { x = -x; }

    void operator++()
    {
        ++x;
    }
    void display() { cout << x; }
};

int main()
{
    Student s1(4);
    s1.operator++();
    s1.display();
}