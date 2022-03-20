#include<iostream>
using namespace std;
int main(){
int a= 10, b= 20;

cout<<"++a ="<<++a<<endl;  //10 first increase because of pre increament
cout<<"a++ ="<<a++<<endl;  //will print 11 because of post incriment after this it will increase by one 
cout<<"now updated value of a is  ="<<a<<endl;  // 
cout<<"--b ="<<--a<<endl<<endl;
cout<<"b-- ="<<b--<<endl<<endl;

cout<<"***************************************************** arthithmatic operation*********************"<<endl;

int num1 = 75;
int num2 = 4;

cout<<"the value of "<<num1 <<" % " <<num2 <<" is ('will give reminder ') = "<<num1%num2<<endl;
cout<<"the value of num1/num2 is = "<<num1/num2<<endl;
cout<<"the value of num1%*um2 is = "<<num1*num2<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<"*******************LOGICAL OPERATORS ***************************"<<endl;

int num3 = 15, num4 = 45;

if(num3%3==0 && num4 % 3 == 0) { // will give True if the both condition are True
  cout<<"IT IS divisible by 3 and 4"<<endl;
}
if (num4 % 9 ==0 || num4 % 9 ==0){
    cout<<"it is only divisible by only one"<<endl;
}

}
