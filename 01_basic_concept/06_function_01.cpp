#include <iostream>
using namespace std;

int table(int number) // This is the function which will perform action on num  // number is formal parameter
{
    for (int i = 1; i <= 10; i++)
    {
        cout << i * number << endl;
    }
}

int main()
{

    int num;
    cout << "Enter the number" << endl;
    cin >> num;
    cout << "The table is " << endl;
    table(num); // num is actual parameter

    return 0;
}

// ************************************Love by Code_x**********************************************