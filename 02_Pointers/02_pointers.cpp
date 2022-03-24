#include <iostream>
using namespace std;

int main()
{

    int i = 65;
    char b = i;
    cout << "the value of  b is " << b << endl;

    int *p = &i;
    // char* pp = i;  willl give an errore because of *pp will hold the address of char but i is integer(implisite)
    char *z = (char *)i; //(explisite type casting)

    cout << "*pp" << *z + 0;
    cout << "*pp" << *z + 1;
    cout << "*pp" << *z + 3;

    return 0;
}

// ************************************Love by Code_x**********************************************