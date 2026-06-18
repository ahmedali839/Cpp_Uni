#include <iostream>
using namespace std;

class StaticPractise
{

public:
    static int count;
    StaticPractise()
    {
        count++;
    }
    void ShowCount()
    {
        cout << "Count (updated): " << count << endl;
    }
};

int StaticPractise::count = 1;

int main()
{
    StaticPractise s1, s2, s3; // static values (remember during function calls)
    s3.ShowCount();

    return 0;
}