#include <iostream>
using namespace std;

// Method first
int main()
{

    int A[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 4, 1, 8}};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << A[i][j]; // this loop will print the array of a
        }
        cout << endl; // This endl is important for new line
    }

    cout << " ************************************Love by Code_x**********************************************"<<endl;
    // Metod Second

    int *B[3];         // Here row is only created
    B[0] = new int[4]; // initialisation of row with four columns are reated
    B[1] = new int[4]; // initialisation of row with four columns are reated
    B[3] = new int[4]; // initialisation of row with four columns are reated

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << B[i][j]; // this loop will print the array of a
        } 
        cout << endl; // This endl is important for new line
    }

    cout << " ************************************Love by Code_x**********************************************"<<endl;
    // Method third Using dual pointer

    int **C;
    C = new int *[3];
    C[0] = new int[3];   // initialisation of column
    C[1] = new int[3];
    C[2] = new int[3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << C[i][j]; // this loop will print the array of a
        }
        cout << endl; // This endl is important for new line
    }

    return 0;
}

// ************************************Love by Code_x**********************************************