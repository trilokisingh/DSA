#include <iostream>
using namespace std;

int main()
{

    int A[5]; // static is_array

    int *p;

    p = new int[6]; // this is dynamicc alloctation of array


    for (int i = 0; i <= 5; i++)
    {

        //cout << p[i] << endl;
        cout << &p[i] << endl; // will print the address
        
    }
cout<<"first address of pointer p is "<<p;
    delete[] p; // most important for to avoide memmory leakage

    return 0;
}

// ************************************Love by Code_x**********************************************