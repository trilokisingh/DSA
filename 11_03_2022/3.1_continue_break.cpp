#include <iostream>
using namespace std;

int main()
{

    int pocket_Money = 5000;

    for (int date = 1; date <= 30; date++)
    {

        if (date % 3 == 0) // here it will jump to next if day is divisible by 3 this is breack statement
        {
            continue;
        }

        if (pocket_Money < 0) // it will check is here sufficent money for next trip
        {
            cout << "SOrry dear you dont have enough money";
            break;
        }

        pocket_Money -= 550;
        cout << "today is " << date << " You can go on a trip" << endl;

        cout << "now money is " << pocket_Money << endl;
    }
}