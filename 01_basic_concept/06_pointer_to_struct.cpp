// not clear

#include <iostream>
using namespace std;

struct Student
{
    int height;
    int age;
};

int main()
{

    struct Student *p;
    (*p).age = 20;
    (*p).height = 168;

    cout << "age is  =" << (*p).age << endl;
    cout << "height is = " << (*p).height;

    return 0;
}

// ************************************Love by Code_x**********************************************