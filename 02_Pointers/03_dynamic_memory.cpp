#include <iostream>
using namespace std;

int revers(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{

    int *num1 = new int;
    int *num2 = new int;

    *num1 = 10;
    *num2 = 14;

    cout<<revers(num1, num2);


    return 0;
}

// ********************************___L_O_V_E     B_Y      C_O_D_E_X______**********************************************//

