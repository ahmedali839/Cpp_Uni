#include <iostream>
using namespace std;

class University
{
public:
    virtual void username() = 0;
};

class Student : public University
{
public:
    void username()
    {
        cout << "Here's the student" << endl; // it's abstract class  examples
    }
};

int main()
{
    Student std;
    std.username();
}