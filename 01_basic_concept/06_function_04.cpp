// Call by Refrences
// will also swap the value

#include <iostream>
using namespace std;

void swap(int &x, int &y) // logic for swapping the value wthi the help of refrences
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}

int main()
{

    int num1 = 10;
    int num2 = 20;
    cout << "a =" << num1 << " b =" << num2 << endl;
    swap(num1, num2); // passing the address as actual parameter
    cout << "a =" << num1 << " b =" << num2;
    return 0;
}

// ************************************Love by Code_x**********************************************