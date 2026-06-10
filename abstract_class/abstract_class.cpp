#include <iostream>
using namespace std;

class University {
    virtual void username() = 0;
};

class Student: public University {
    void username() {
        cout << "Here's the student" << endl;
    }
}

int main () {

}