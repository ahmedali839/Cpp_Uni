#include <iostream>
using namespace std;

class Distance
{
private:
    int meter;

public:
    Distance() { meter = 0; };
    Distance(int m) { meter = m; };

    Distance operator+(Distance d)
    {
        Distance temp;
        temp.meter = meter + d.meter;
        return temp;
    }

    void display()
    {
        cout << meter << " meters";
    }
};

int main()
{
    Distance d1(10);
    d1.display();
}