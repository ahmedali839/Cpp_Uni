// #include <iostream>
// using namespace std;

// class Student
// {
// private:
//     int x;

// public:
//     Student(int a) { x = a; }
//     // void operator -() { x = -x; }

//     void operator++()
//     {
//         ++x;
//     }
//     void display() { cout << x; }
// };

// int main()
// {
//     Student s1(4);
//     s1.operator++();
//     s1.display();
// }

#include <iostream>
using namespace std;

class Complex
{
private:
    int real, imag;

public:
    Complex(int r = 0, int i = 0)
    {
        real = r;
        imag = i;
    }
    Complex operator+(Complex c)
    {
        return Complex(real + c.real, imag + c.imag);
    }

    void display()
    {
        cout << real << " + " << imag << "i";
    }
};

int main()
{
    Complex c1(2, 3), c2(4, 5);

    Complex c3 = c1 + c2;

    c3.display();

    return 0;
}