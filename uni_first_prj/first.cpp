#include <iostream>
using namespace std;

int a, b;

void Sum(double a, double b)
{
    cout << "The Sum: " << a << " + " << b << " = " << a + b << endl;
}

void Subs(double a, double b)
{
    cout << "The Substraction: " << a << " - " << b << " = " << a - b << endl;
}

void Multiply(double a, double b)
{
    cout << "The Multiply: " << a << " * " << b << " = " << a * b << endl;
}

void Division(double a, double b)
{
    if (b == 0)
    {
        cout << "Something division by 0 = ∞, try again with Valid Numbers.";
    }
    else
    {

        cout << "The Division: " << a << " ÷ " << b << " = " << a / b << endl;
    }
}

int main()
{

    double num1, num2, result;
    char operatr, more;

    cout << "Welcome, Get Started using Calculator" << endl;
    do
    {
        cout << "Enter First number: " << endl;
        cin >> num1;

        cout << "Pick Operator ( + - * / ): " << endl;
        cin >> operatr;

        cout << "Enter Second number: " << endl;
        cin >> num2;

        switch (operatr)
        {
        case '+':
            Sum(num1, num2);
            break;
        case '-':
            Subs(num1, num2);
            break;
        case '*':
            Multiply(num1, num2);
            break;
        case '/':
            Division(num1, num2);
            break;
        default:
            cout << "Invalid Operation on operands have been done, try again.";
            break;
        }

        cout << "\nWould you like to have more Calculations ? [enter y to continue, n to quit].";
        cin.ignore(1000, '\n'); // This clears the "Enter" key leftover from num2
        cin >> more;

    } while (more == 'y' || more == 'Y');

    cout << "Sadly, but Goodbye." << endl;
    return 0;
}