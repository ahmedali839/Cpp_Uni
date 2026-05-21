#include <iostream>
using namespace std;

class Student
{

private:
    int z = 3;

public:
    int x = 1;
    void privateValue()
    {
        cout << "private: " << this->z << endl;
    }

protected:
    int y = 2;
};

class College : public Student
{
public:
    void show()
    {
        cout << "public: " << x << endl;
        cout << "protected: " << y << endl;
        privateValue(); // function to get private value access
        // cout << "private: " << z << endl;
    }
};

int main()
{
    College clg;
    clg.show();

    return 0;
}
