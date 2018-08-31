//using library
#include<iostream>
using namespace std;
//use main function
int main (){
 //declaring variables
 char alph;
 cout << "Enter an alphabet." << endl;
 cin >> alph;
 //condition
 if ((alph == 'a') || (alph == 'e') || (alph == 'i') || (alph == 'o') || (alph == 'u')){
  cout << alph << " is lower case  vowel." << endl;
  }
 else if ((alph == 'A') || (alph == 'E') || (alph == 'I') || (alph == 'O') || (alph == 'U')){
  cout << alph << " is upper case vowel.";
  }
 else {
  cout << alph << " is a consonant." << endl;
  }
}
