// CALL BY VALUE METHOD// PAss by value
// here swapping will not done its only done in fuction only

#include <iostream>
using namespace std;

void swap(int x, int y) // logic for swapping the value
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
    swap(num1, num2);
    cout << "a =" << num1 << " b =" << num2;
    return 0;
}


// ************************************Love by Code_x**********************************************