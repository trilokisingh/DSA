#include <iostream>
using namespace std;

int staticVar(int n)
{

    static int M = 0; // will have only single copy
    if (n > 0)
    {
        M++;
        return staticVar(n - 1) + M; // M will add during return time .;  // // Most important
    }
    return 0;
}

int main()
{

    cout << staticVar(5) << endl;

    return 0;
}

// ************************************Love by Code_x**********************************************