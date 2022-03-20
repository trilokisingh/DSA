// write a program to take input untill user enter positive integer when he enterd negative loop should exit

#include<iostream>
using namespace std;

int main(){

int num;

while (num>0)
{
    cout<<"enter the positive number"<<endl;
    cin>>num;
    cout<<"you enterd "<<num<<endl;
}

cout<<"sorry you enterd "<<num<< " which is negative";


}