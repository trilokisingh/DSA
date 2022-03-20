#include <iostream>
using namespace std;

struct ractangle
{
    int l, b;
};

int main()
{
    struct ractangle a;
    cout << "whats the lengths" << endl;
    cin >> a.l;   // accesing the struct variables
    cout << "whats the widths" << endl;
    cin >> a.b;
    cout << "area is " << (a.l * a.b);  //we cant do like a*b
}
