// only call by address is possible

#include <iostream>
using namespace std;

void print(int array[], int size)
{
    array[2] = 500; // will overwrite the value of array at index 2
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << endl;
    }
}

int main()
{

    int a[] = {12, 2, 15, 15, 85};

    print(a, 5); // callin the function a is name of array 5 is size of an array

    return 0;
}

// ************************************Love by Code_x**********************************************