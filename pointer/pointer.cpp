#include <iostream>
#include <cstring>
using namespace std;

class String
{
private:
    char *str;

public:
    String(const char *s)
    {
        str = new char[strlen(s) + 1];
        strcpy(str, s);
    }

    ~String()
    {
        delete[] str;
    }
    void display()
    {
        cout << str << endl;
    }
};

int main()
{

    // objects
    String strng("Ahmed Yar Hy");
    strng.display();

    int t = 100;
    int *p = &t;
    *p = 20;

    int arr[5] = {10, 20, 30, 40, 50};
    int *arrPointer = arr;

    // int sum()
    // {
    //     cout << "Sum function called.";
    // }

    // int *sum();

    cout << "t: " << t << endl;
    // cout << "&t: " << &t << endl;
    // cout << "p: " << p << endl;
    // cout << "*p: " << *p << endl;
    // cout << "&p: " << &p << endl;
    // cout << "new t: " << t << endl;

    // cout << "arr[0]: " << arr[0] << endl;
    // cout << "*arrPointer[0]: " << *(arrPointer + 0) << endl;
    // cout << "*arrPointer[1]: " << *(arrPointer + 1) << endl;
    // cout << "*arrPointer[2]: " << *(arrPointer + 2) << endl;
    // cout << "undefined: *arrPointer[99]: " << *(arrPointer + 99) << endl;

    // for (int i = 0; i < 5; i++)
    // {
    //     cout << "*arrPointer[" << i << "]" << *(arrPointer + i) << endl;
    // }
}