// // Online C++ compiler to run C++ program online
// #include <iostream>
// using namespace std;

// int a;
// int b;

// void Sum (int a, int b) {
//     cout << "The Sum: " << a << " + " << b << " = " << a + b << endl;
// }

// int main() {

//     cout << "Welcome, Get Started using Calculator" << endl;

//     Sum(4, 5);

//     return 0;
// }

// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int a;
int b;

void Sum(int a, int b)
{
    cout << "The Sum: " << a << " + " << b << " = " << a + b << endl;
}

void Subs(int a, int b)
{
    cout << "The Substraction: " << a << " - " << b << " = " << a - b << endl;
}

void Multiply(int a, int b)
{
    cout << "The Multiply: " << a << " * " << b << " = " << a * b << endl;
}

void Division(int a, int b)
{
    if (b == 0)
    {
        cout << "Something division by 0 = ∞, try again Valid Numbers."
    }
    cout << "The Division: " << a << " ÷ " << b << " = " << a / b << endl;
}

int main()
{

    cout << "Welcome, Get Started using Calculator" << endl;

    int num1, num2, operator, result;

    cout << "First number: " << endl;
    cin >> num1;

    cout << "Pick Operator ( + - * / ): " << endl;
    cin >> operator;

    cout << "Second number: " << endl;
    cin >> num2;

    Sum(4, 5);

    return 0;
}