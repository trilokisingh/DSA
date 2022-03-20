// will see how to pass struct ass parameter call by value

#include <iostream>
using namespace std;

struct area
{
    int a;
    int b;
};

int area(struct area z) // Note :- here z will a new object inside the struct
{
    // z.a = 15; // here we can modifie also the value of struct but only in function not in main function
    return z.a * z.b;
}

int main()
{

    struct area first;
    first.a = 10;
    first.b = 20;
    struct area second;
    second.a = 22;
    second.b = 11;
    cout << area(first) << endl; // function calling
    cout << area(second);

    return 0;
}

// ************************************Love by Code_x**********************************************