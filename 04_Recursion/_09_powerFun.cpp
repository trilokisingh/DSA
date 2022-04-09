#include <iostream>
using namespace std;

int Pow(int n, int x)
{

    if (x == 0)
    {
        return 1;
    }

    return Pow(n, x - 1) * n; // Most important
}

int main()
{

    cout << Pow(2, 3);

    return 0;
}

// ************************************Love by Code_x**********************************************