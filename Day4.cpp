#include <iostream>
#include<string.h>
using namespace std;

int main()
{
  int c,i;
  char str[50];
  cout<<"enter a string"<<endl;
  cin>>str;
  c=strlen(str);
  cout<<"encoded string:";
  for(i=c;i>0;i--)
  {
    cout<<i;
  }

}
