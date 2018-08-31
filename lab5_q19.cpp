//include library
#include<iostream>
using namespace std;
//use main function 
int main (){
 //variable declaration
 float cs,bio,phy,chem,math,total,totalMarks,per;
 cout << "Enter the total marks." << endl;
 cin >> totalMarks;
 cout << " Enter the marks for computer science,biology,physics,chemistry and math." << endl;
 cin >> cs >> bio >> phy >> chem >> math;
 //calculation
 total = cs + bio + phy + chem + math;
 per = (total / totalMarks) * 100;
 //condition
 if (per >= 90){
  cout << "Grade A";
  }
 else if (per >= 80){
  cout << "Grade B";
  }
 else if (per >= 70){
  cout << "Grade C";
  }
 else if (per >= 60){
  cout << "Grade D";
  }
 else if (per >= 40){
  cout << "Grade E";
  }
 else if (per <=40){
  cout << "Grade F";
  }
}
