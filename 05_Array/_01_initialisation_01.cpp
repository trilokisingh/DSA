#include <iostream>
using namespace std;

int main()
{

    int A[] = {1, 2, 3, 4};          // size of array will decide according to elements
    int B[5] = {12, 15, 52, 55, 85}; // declaration with initialisation
    int C[4] = {12, 15};             // reamaining index initialised with zero
    int D[4] = {12};                 // initial assign with 1 than all will initialised with ZERO
    {
        cout << "array of A " << A[0] << endl;
        cout << "array B " << B[1], cout << endl;

        cout << "array of C " << C[1], cout << endl;

        cout << "array of C " << C[2], cout << endl;

        cout << "array of D " << D[0], cout << endl;

        cout << "array of D " << D[3], cout << endl;

        cout<<"using pointer method "<<*(A+3)<<endl; //  using pointer we can acces a array (A// array name + is index nmbr)

        for (int i = 0; i < 5; i++)
        {
            cout << "the valaue of index " << i << " is = " << B[i] << endl;
        }
    }
}