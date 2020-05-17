/*Write a program in C++ using exception handling 
in which you have to ask the user to enter the 
marks of a Student for subjects like English,
Chemistry, ADS, and Maths. If the user exceeds
the range of marks (if below 0 or above 100) in 
a particular subject, the program should throw 
an error “Invalid Marks” to the user and repeat
the above processes until the use enters the correct
marks. [NOTE : Try to use try{} block, catch{} block,
throw() function (all of them, if possible) in your program]*/



#include<iostream>
using namespace std;

int main()
{

  int maths, ads, english, chemistry;
  double average;
  cout<<"enter maths marks: ";
  cin>>maths;
  cout<<"enter ads marks: ";
  cin>>ads;
  cout<<"enter english marks: ";
  cin>>english;
  cout<<"enter chemistry marks: ";
  cin>>chemistry;

try {
  
  if (maths < 100 && maths>0) 
  {
   if(ads < 100 && maths>0)
   {
     if(english < 100 && maths>0)
     {
       if(chemistry < 100 && maths>0)
       {
         average=(maths+ads+english+chemistry)/4;
         cout<<"your average marks are "<<average;
       }
     }
   }
  }
  
   else {
    throw (maths);
  }
}
catch (int myNum) {
  cout << "Please enter valid marks";
 
} 

}
