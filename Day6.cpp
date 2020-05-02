#include <iostream>
using namespace std;

int main()
{
  int a[3], b[4], c[7],i,d[4];
  cout<<"enter numbers for array 1 in ascending order"<<endl;
  for(i=0;i<3;i++)
  {
    cin>>a[i];
  }
  for(i=0;i<3;i++)
  {
    cout<<a[i];
  }
  cout<<endl;
  cout<<"enter numbers for array 2 in descending order"<<endl;
  for(i=0;i<4;i++)
  {
    cin>>b[i];
  }
  for(i=0;i<4;i++)
  {
    cout<<b[i];
  }
  cout<<endl;

  cout<<"now you see the two arrays merged in ascending order"<<endl;
 d[3]=b[0];
 d[2]=b[1];
 d[1]=b[2];
 d[0]=b[3];

  for(i=0;i<3;i++)
  {
    c[i]=a[i];
  }
  for(i=0;i<4;i++)
  {
    c[i+3]=d[i];
  }

  for(i=0;i<7;i++)
  {
    cout<<c[i];
  }

}
