#include <iostream>
using namespace std;

int sumMethod2(int n)
{
    return (n * (n + 1)) / 2;            
}
int sum(int n)
{

    if (n == 0)
    {
        return 0;
    }
    else
    {
        return sum(n - 1) + n;
    }
}
int main()
{
    int num;

    cout << "Enter the num for sum" << endl;
    cin >> num;
    cout << "The sum is = " << sum(num) << endl;
    cout << "sum by method 2 is " << sumMethod2(num);

    return 0;
}

// ************************************Love by Code_x**********************************************