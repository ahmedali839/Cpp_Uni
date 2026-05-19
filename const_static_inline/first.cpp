#include <iostream>
using namespace std;

// inline int square(int x)
// {
//     return x * x;
// };

void counter()
{
    static int count = 0;    // editable / modifiable as static
    const int non_count = 0; // it's non-editable / non-modifiable as const

    count++;
    cout << non_count << endl;
    cout << count << endl;
}

int main()
{
    // cout << square(5);

    counter();
    return 0;
}