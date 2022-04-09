#include<iostream>
using namespace std;

// here these pointer will declare inside the heap memomrry not in stack
int main(){

int *a;   // declare a pointer 
 a =  new int [5];  // initialising the array inside the heap

 a[3] =123;

 cout<<a[3];


delete []a;  // we must to delet that memory otherwiswe memory leak will there 
 
}