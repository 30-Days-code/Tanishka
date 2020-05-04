#include <iostream>
using namespace std;

int main() 
{
  int n;
  cout<<"current date is 4/5/2020"<<endl;
  cout<<"enter an integer between 1 and 100"<<endl;
  cin>>n;
  if(n<27)
  cout<<"new date according to added number of integers is:"<<4+n<<"/5/2020"<<endl;
  if(n>26 && n<58)
  cout<<"new date according to added number of integers is:"<<(4+n)-30<<"/6/2020"<<endl;
  if(n>57 && n<89)
  cout<<"new date according to added number of integers is:"<<(4+n)-60<<"/7/2020"<<endl;
  if(n>88 && n<101)
  cout<<"new date according to added number of integers is:"<<(4+n)-90<<"/8/2020"<<endl;
}
