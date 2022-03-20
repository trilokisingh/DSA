#include <iostream>
using namespace std;

int main()
{

    char button;

    cout << "Enter your character" << endl;
    cin >> button;


// 01 switch statement will execute only when matching case will occure 
// 02 if we will not add breack than afer the maching the value all next statetement will executed
    switch (button)
    {
    case 'a':
        cout << "helloo dear";
        break;
    case 'b':
        cout << "get lostdear";
        break;
    case 'c':
        cout << "nice to mmet you dear";
        break;
    case 'd':
        cout << "welloo dear";
        break;
    case 'e':
        cout << "good night  dear";
        break;
    case 'f':
        cout << "good morning dear";
        break;

    default:
        cout << "YOU ARE AWESOME YOU CHOOSE  ** "<<button<<" ***";
    }
}