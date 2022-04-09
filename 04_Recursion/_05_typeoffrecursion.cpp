#include <iostream>
using namespace std;

void greet(int x)
{

    if (x > 0)
    // {
    //     cout << "functin call =" << x << endl;
    //     greet(x - 1);// tail recurtion task done before calling time
    // }
    {
        greet(x - 1); // Head recurtion task done after calling time
        cout << "functin call =" << x << endl;
    }
}

int main()
{

    greet(5);

    return 0;
}

// ************************************Love by Code_x**********************************************