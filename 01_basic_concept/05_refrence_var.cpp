#include <iostream>
// will learn about refrence variable
using namespace std;

int main()
{

    int a = 10;

    int &z = a; // z is holding the value of a
    cout << "z is pointing the value of a " << z;

    return 0;
}

// ************************************Love by Code_x**********************************************