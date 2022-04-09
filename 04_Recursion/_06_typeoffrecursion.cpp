#include <iostream>
using namespace std;

int reverse(int x)
{

    if (x > 0)
    {

        cout << "num = " << x << endl;
        reverse(x - 1); // when function calls again and again
        reverse(x - 1);
    }
}

int main()  
{

    reverse(3);

    return 0;
}

// ************************************Love by Code_x**********************************************