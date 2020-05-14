#include <iostream>
using namespace std;

class calculator
{
  public:
  float Cradius, Theight, Tbase;
  long Rlength, Rbreadth, Rheight, Swidth;

  public:
 void Calculator() 
 {
    Cradius=1; 
    Rlength=Rbreadth=Rheight=1;
    Theight=Tbase=1;
 }

friend float AreaOfCircle(calculator Ob); // To calculate Area Of Circle
friend long AreaOfRectangle(calculator Ob); // To calculate Area Of Rectangle
friend long AreaOfSquare(calculator Ob); // To calculate Area Of Square
friend float AreaOfTriangle(calculator Ob); // To calculate Area Of Triangle

};



float AreaOfCircle(calculator Ob)
{
  int area;
  cout<<"Enter radius: ";
  cin>>Ob.Cradius;
  area=3.14*Ob.Cradius*Ob.Cradius;
  cout<<"area is "<<area<<endl;
}

long AreaOfRectangle(calculator Ob)
{
  int area;
  cout<<"Enter length and breadth respectively"<<endl;
  cin>>Ob.Rlength;
  cin>>Ob.Rbreadth;
  area=Ob.Rlength*Ob.Rbreadth;
  cout<<"Area of rectangle is "<<area<<endl;
}

long AreaOfSquare(calculator Ob)
{
  int area;
  cout<<"Enter the side of square"<<endl;
  cin>>Ob.Swidth;
  area=Ob.Swidth*Ob.Swidth;
  cout<<"Area of square: "<<area;
}

float AreaOfTriangle(calculator Ob)
{
  int area;
  cout<<"Enter the base and height of triangle respectively"<<endl;
  cin>>Ob.Tbase;
  cin>>Ob.Theight;
  area=0.5*Ob.Tbase*Ob.Theight;
  cout<<"Area of triangle "<<area;
}

int main() 
{
  int number;
  calculator b1;

  while(1)
  {

cout<<"For calculating area of circle, enter 1"<<endl;
cout<<"For calculating area of rectangle, enter 2"<<endl;
cout<<"For calculating area of square, enter 3"<<endl;
cout<<"For calculating area of triangle, enter 4"<<endl;

cin>>number;

switch(number)
{
  case 1:
  AreaOfCircle(b1);
  break;

  case 2:
  AreaOfRectangle(b1);
  break;

  case 3:
  AreaOfSquare(b1);
  break;

  case 4:
  AreaOfTriangle(b1);
  break;
}
  }

  return 0;
}
