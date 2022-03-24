#include <iostream>
using namespace std;

int main()
{

    int a, b;

    cin >> a >> b;
    // if (a > b)
    // {
    //     cout << "grater is " << a;
    // }
    // else
    // {
    //     cout << "grater is " << b;
    // }

    int c = (a > b ? a : b);  // tersary operator
    cout << "greater is " << c;
};
// ************************************Love by Code_x**********************************************