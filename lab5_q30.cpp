//using library
#include<iostream>
using namespace std;
//use main function
int main (){
 //variable declaration
 int a,b = 0,c;
 cout << "Enter the number of which the multiplication table is required." << endl;
 cin >> a;
 //loop
 while (b <= 10){
  c = a * b;
  cout << a << " * " << b << " = " << c << endl;
  b++;
 }
} 
