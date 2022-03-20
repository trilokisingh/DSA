// write a programm to sum of all natural number interd by user

#include <iostream>
using namespace std;

int main()
{

    int sum = 0;
    int number;

    cout << "enter the number";
    cin >> number;

    for (int i = 1; i <= number; i++)
    {

        sum = sum + i;
    }
    cout << "Total sum of " << number << "is " << sum;
}