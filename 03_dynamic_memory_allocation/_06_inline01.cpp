#include <iostream>
using namespace std;

inline int max(int a, int b) // this is inline function call where it call it will go that place
{

    int c = (a > b) ? a : b;
    return c;
}

int main()
{

    int a, b;
    cin >> a >> b;
    int z = max(a, b); // max() function will come here
    cout << "greater is =" << z;

    return 0;
}

// ************************************Love by Code_x**********************************************