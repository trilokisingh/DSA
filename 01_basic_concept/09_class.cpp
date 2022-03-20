// we will see how to make classes
class A // name of class
{
private:
    int le;
    int be;

public:
    int Area(int l, int b) // function for area calculation
    {
        le = l; // assigning the passed value to local variables
        be = b;
        return be * le;
    }
};

#include <iostream>
using namespace std;

int main()
{

    A obj;
    cout << obj.Area(10, 20) << endl; // calling the function
    A obj2;
    cout << obj2.Area(12, 10);
    return 0;
}

// ************************************Love by Code_x**********************************************
