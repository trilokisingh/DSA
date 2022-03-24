#include<iostream>
using namespace std;
#define pi 3.14     // hash define value whre pi willl it will treat like 3.14


int main(){
  
  int radius;
  int* a;
  a =&radius;

  cout<<"Enter the radius"<<endl;
  cin>>*a;  // value will store in radius with the help of pointer
  cout<<"the area is "<<(pi*(radius*radius));



    






    return 0;


}


// ************************************Love by Code_x**********************************************