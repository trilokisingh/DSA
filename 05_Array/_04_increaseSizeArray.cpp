#include <iostream>
using namespace std;

int main()
{

    int *p = new int[5];// initialisation of dynamic array size 5
    p[0]=12;  // initialising the values 
    p[1]=14;
    p[2]=16;
    p[3]=18;
    p[4]=20;
    for (int i = 0; i < 5; i++)
    {
        cout << p[i] << endl;
    }

    int *N = new int[10]; // initialisation of nwew dynamic array of size 10
    for (int i = 0; i < 5; i++)
    {
        N[i] = p[i]; // here we are coping array p from array N
    }

    cout << "after copy " << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << N[i] << endl; // print the copied value and 5 random value
    }

    delete []p;
    delete []N;

    return 0;
}

// ************************************Love by Code_x**********************************************