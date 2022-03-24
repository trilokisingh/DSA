#include <iostream>
using namespace std;

int main()
{

    int a = 5;
    int *p = &a;                                // it is a pointer
    cout << "a =" << a << endl;                 // acces value by a
    cout << "addres of p =" << &p << endl;      // addres of pointer
    cout << "value pointed *p =" << *p << endl; // value pointed by *p

    int **d = &p;                                               // dual pointer hold the adderse of another pointer
    cout << "addres od *p usind dual pointer is " << d << endl; // give the addres of poinetr p using dual pointer

    //****************CHANGING THE VALUE OF VARIABLE INDIRECTLY USING POINTER****************

    *p = 15; // we are changing the value of a using pointer
    cout << "new value of a is using single pointer " << a << endl;

    **d = 17; // we are changing the value of a using pointer

    cout << "new value of a after changing dual pointer is " << a;

    return 0;
}

// ************************************Love by Code_x**********************************************