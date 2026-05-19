#include <iostream>
using namespace std;

class Box
{
    int length;

public:
    void setLength(int l);
    int getLength();
};

void Box ::setLength(int l)
{
    length = l;
};
int Box ::getLength()
{
    return length;
}

int main()
{
    Box b1;
    b1.setLength(10);
    cout << "Length is: " << b1.getLength() << endl;

    return 0;
}
