#include <iostream>
using namespace std;

class Maths
{
private:
    int x;

public:
    Maths(int x)
    {
        this->x = x;
    }
    void operator-()
    {
        x = -x;
    }

    void display()
    {
        cout << "Updated X: " << this->x << endl;
        cout << "Updated X: " << this* << endl;

    }
};

int main()
{
    Maths m1(10);
    m1.display();
    m1.operator-();
    m1.display();
}