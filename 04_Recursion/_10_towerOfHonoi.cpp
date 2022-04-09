#include <iostream>
using namespace std;

int TOH(int n, int A, int B, int C)
{

    if (n > 0)
    {

        TOH(n - 1, A, C, B); // Tower A to B using C
        cout << "Steps are " << A << " to " << C << endl;
        TOH(n - 1, B, A, C); // Tower B  to C using A
    }
}

int main()
{
    int num;
    cout << "How many Disk you want " << endl;
    cin >> num;

    TOH(num, 1, 2, 3);  // here 1.,2,3 are the number of tower(name)

    return 0;
}

// ************************************Love by Code_x**********************************************