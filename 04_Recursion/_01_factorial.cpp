#include <iostream>
using namespace std;

int fact(int n)
{

    if (n == 0 || n == 1) // condition check if it not done return 1
    {
        return 1;
    }

    return fact(n - 1) * n;
}

int main()
{

    int num;
    cout << "Enter the num for factorial " << endl;
    cin >> num;
    cout << "factorial is =" << fact(num); // function call
    return 0;
}

// ************************************Love by Code_x**********************************************