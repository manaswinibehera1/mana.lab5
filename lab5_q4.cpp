//use library
#include<iostream>
using namespace std;
//use main function
int main (){
//declaration
 int a;
//ask the user for input
 cout << "Enter a number : " << endl;
 cin >> a;
//condition
 if ((a % 5 == 0) && (a % 11 == 0)){
   cout << a << "is divisible by both 5 and 11" << endl;
   }
   else {
   cout << a << "is not divisible by both 5 and 11" << endl;
   }
  
}
