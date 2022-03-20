#include<iostream>
using namespace std ;
int main(){

 int mat[3][3] = {{1,2,3},{4,5,6},{9,5,7}};  // this is the method first 01
  for (int i = 0; i < 3; i++)
  {
      for (int j = 0; j < 3; j++)
      {
          cout<<mat[i][j];
          
      }
      cout<<endl;
  }
  
  // calculate the addres of index the formula is {(     base address+ index number+ size of data type )} 

}


