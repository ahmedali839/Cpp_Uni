#include <iostream>
using namespace std;

class University {
    public:
    virtual void name(){
        cout << "Unversity name"
    }
};

class Student : public University {
    public:
    virtual void name(){
        cout << "Student name"
    }
};

int main () {

    Student s1;
    s1.name();

}