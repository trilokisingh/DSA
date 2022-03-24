#include <iostream>
using namespace std;

int sum(int arr[], int size, int strt_Index = 2) // strt_Index will define frome where we need to start the counting sum if i
                                                 // initialise the value at same time than it is default argument
                                                 // strt_Index = 2 default arguments
                                                 // we can give from right most default value
{
    int total = 0;
    for (int i = strt_Index; i < size; i++)
    {
        total += arr[i];
    }
    return total;
}

int main()
{

    int n[7];
    for (int i = 0; i < 7; i++)
    {
        cin >> n[i];
    }
    cout << "The sum is = " << sum(n, 7, 2);

    return 0;
}

// ************************************Love by Code_x**********************************************