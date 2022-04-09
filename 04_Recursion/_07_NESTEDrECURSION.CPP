// nested recursion function calling malke a cyclic like a call b And B call C and C call a

#include <iostream>
using namespace std;

int nextC(int x)
{

    if (x > 0)
    {

        cout << "ninside  next C " << x << endl;
        }
}
int nextB(int x)
{

    if (x > 0)
    {

        cout << "inside  next B " << x << endl;
        nextC(x);
    }
}
int nextA(int x)
{

    if (x > 0)
    {

        cout << "inside  next A " << x << endl;
        nextB(x);
    }
}

int main()
{

    nextA(5);

    return 0;
}

// ************************************Love by Code_x**********************************************