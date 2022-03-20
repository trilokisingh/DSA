// In this we will see how to initialise pointer

#include <iostream>
using namespace std;

int main()
{

    int a = 15;
    int *p; // pointer initialisation
    p = &a;
    cout << "address of a is " << p << endl; // will point addres
    cout << "Value of a is " << *p << endl;  // will point te value

    return 0;
}

// ************************************Love by Code_x**********************************************