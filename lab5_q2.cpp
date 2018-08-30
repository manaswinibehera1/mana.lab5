//use library
#include<iostream>
using namespace std;
//use main function
int main (){
//declaration
 float a,b,c;
//ask the user for input
 cout << "Enter three numbers : " << endl;
 cin >> a >> b >> c;
//condition
 if ((a > b) && (a > b)){
   cout << a << "is the maximum number" << endl;
 }
 else if ((b > a) && (b > c)){
   cout << b << "is the maximum number." << endl;
 }
 else {
   cout << c << "is the maximum number." << endl;
   }
}
