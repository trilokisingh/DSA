#include <iostream>
using namespace std;

int Disarray(struct  Array arr )
{
    int i;
    cout << "elemnets are " << endl;
    for (i = 0; i < arr.lenghth; i++)
    {
        cout << arr.A[i];
    }
}

struct Array
{
    int *A;
    int size;
    int lenghth;
};

int main()
{

    struct Array arr;
    cout << "Enter the size of an arrray" << endl;
    cin >> arr.size;
    arr.A = new int(arr.size);
    arr.lenghth = 0;
    cout << "Enter the number of numbers";
    for (int i = 0; i < arr.size; i++)
    {
        cin >> arr.A[i];
    }
    Disarray(arr);

    return 0;
}

// ************************************Love by Code_x**********************************************