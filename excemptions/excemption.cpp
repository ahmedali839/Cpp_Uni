#include <iostream>
#include <string>

using namespace std;

int main()
{
    string input;
    int age;

    cout << "Enter your age: ";
    cin >> input;

    try
    {
        // Convert string to integers
        age = stoi(input);

        // Check if age is in valid range
        if (age < 18)
        {
            cout << "Not Qualified for Driver License (too young)" << endl;
        }
        else if (age > 75)
        {
            cout << "Not Qualified for Driver License (too old)" << endl;
        }
        else
        {
            cout << "Qualified for Driver License" << endl;
        }
    }
    catch (exception &e)
    {
        cout << "Error: Age must be a number" << endl;
    }

    return 0;
}