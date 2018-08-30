//use library
#include<iostream>
using namespace std;
//use main function
int main (){
//declaration
 float a;
//ask the user for input
 cout << "Enter a number : " << endl;
 cin >> a;
//condition
 if (a > 0){
   cout << "a is a positive number ." << endl;
}
 else if (a < 0){
   cout << "a is a negative number." << endl;
}
 else {
//print the result
   cout << "a is zero." << endl;
   }
}
