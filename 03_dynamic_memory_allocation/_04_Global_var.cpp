// global variable is not usually it is risky

#include <iostream>
using namespace std;

int glbl;

int squre()
{
    cout << "aqure is = " << (glbl * glbl) << endl;
    cout << " have a good day";
}

int cube()
{
    cout << "cube is = " << (glbl * glbl * glbl) << endl;
    squre(); // from cube calling squre();
}

int mul()
{
    cout << "multiply by 5 is = " << glbl * 5 << endl;
    cube(); // inside mul we are calling cube()  but from cube we can,t call mul()  // will show not in scope
}

int main()

{

    cout << "Enter the value of global varilble " << endl;
    cin >> glbl;
    mul(); // calling mul fun

    return 0;
}

// ************************************Love by Code_x**********************************************