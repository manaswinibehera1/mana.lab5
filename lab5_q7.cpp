//using library
#include<iostream>
using namespace std;
//use main function
int main (){
 //declaring variables
 char a;
 cout << "Enter a character." << endl;
 cin >> a;
 //condition
 if ((int (a) >= 97) && (int (a) <= 122)){
  cout << a << " is a lower case alphabet." << endl;
  }
 else if ((int (a) >= 65) && (int (a) <= 90)){
  cout << a << " is a upper case alphabet." << endl;
 }
 else {
  cout << a << " is not an alphabet." << endl;
 }
}
