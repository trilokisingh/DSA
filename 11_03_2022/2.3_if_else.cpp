// write a programe to fond greater number among three

#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "enter the number" << endl;
    cin >> a;
    cout << "enter the number" << endl;
    cin >> b;
    cout << "enter the number" << endl;
    cin >> c;

    if (a > b)
    {
        if (a > c)
        {
            cout << "greater number is " << a;
        }

        else
        {
            cout << "graeter number is " << c;
        }
    }

    else{
        if (b>c)
        {
            cout<<"the greater is "<<b;
        }
        else
        cout<<"greater is "<<c;

    }
}