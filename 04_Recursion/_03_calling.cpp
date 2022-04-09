#include <iostream>
using namespace std;

int greet(int n)
{

    if (n < 0)
    {
        return 0;
    }
    greet(n - 1); // will print 12 to 0
    cout << "hello im calling " << n << endl;
    // greet(n - 1);  // will print 12 to 0
}

int main()
{
    int num;
    cout << "Enter number" << endl;
    cin >> num;
    greet(num);

    return 0;
}

// ************************************Love by Code_x**********************************************