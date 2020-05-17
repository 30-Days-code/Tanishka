#include <iostream>
using namespace std;

int main()
{
  int arr[5]={2,7,9,5,3};
  int number,i, flag=0, at;
  cout<<"enter any number that you want to search for: ";
  cin>>number;
  for(i=0;i<5;i++)
  {
    if(number==arr[i])
    {
    flag++;
    break;
    at=i;
    }
  }

  if(flag==0)
  {
    cout<<"number not found";
  }

  else 
  {
    cout<<"number found"<<endl;
    cout<<"New array after deleting the element is: "<<endl;
  
   if (i < 5) 
   { 
     
    
     for (int j=i; j<5; j++) 
        arr[j] = arr[j+1]; 

        for(i=0;i<4;i++)
        {
          cout<<arr[i];
        }
   } 
  }

}
