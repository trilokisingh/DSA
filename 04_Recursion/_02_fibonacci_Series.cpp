#include <iostream>
using namespace std;

int Fib(int x)
{
    if (x <= 1)
    {
        return x;
    }
    else
    {
        return Fib(x - 1) + Fib(x - 2); // LOgis MOst important
    }
}

int main()
{

    int num;
    cout << "enter the number " << endl;
    cin >> num;
    cout << "fibnaci number is " << Fib(num);

   return 0;
}

// ************************************Love by Code_x**********************************************