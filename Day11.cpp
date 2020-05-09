#include <iostream>
using namespace std;

int main() 
{
  int i,j,k;
 int arr[3][3];
 int ray[3][3];
 int mul[3][3];

 cout<<"enter numbers for array 1"<<endl;
 for(i=0;i<3;i++)
 {
   for(j=0;j<3;j++)
   {
     cin>>arr[i][j];
   }
   
 }
 
 cout<<"array 1 is"<<endl;
 for(i=0;i<3;i++)
 {
   for(j=0;j<3;j++)
   {
     cout<<arr[i][j]<<" ";
   }
    cout<<endl;
 }

cout<<endl<<endl;
 cout<<"enter numbers for array 2"<<endl;
 for(i=0;i<3;i++)
 {
   for(j=0;j<3;j++)
   {
     cin>>ray[i][j];
   }
    
 }
 
 cout<<"array 2 is"<<endl;
 for(i=0;i<3;i++)
 {
   for(j=0;j<3;j++)
   {
     cout<<ray[i][j]<<" ";
   }
    cout<<endl;
 }
cout<<endl<<endl;
 cout<<"the two matrices after multiplication are"<<endl;
for(i=0;i<3;i++)    
 {    
   for(j=0;j<3;j++)    
    {    
      mul[i][j]=0;    
       for(k=0;k<3;k++)    
      {    
  mul[i][j]+=arr[i][k]*ray[k][j];    
      }    
    }    
  }    


  for(i=0;i<3;i++)
 {
   for(j=0;j<3;j++)
   {
     cout<<mul[i][j]<<" ";
   }
    cout<<endl;
 }


}
