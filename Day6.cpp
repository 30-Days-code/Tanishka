#include <iostream>
#include<stdio.h>
using namespace std;

class func
{
   public:

   void swap(int *xp, int *yp) 
 { 
    int temp = *xp; 
    *xp = *yp; 
    *yp = temp; 
 } 

  void bubbleSort(int arr[], int n) 
{ 
   int i, j; 
   for (i = 0; i < n-1; i++)       
  
       // Last i elements are already in place    
       for (j = 0; j < n-i-1; j++)  
           if (arr[j] > arr[j+1]) 
              swap(&arr[j], &arr[j+1]); 
} 
  
/* Function to print an array */
void printArray(int arr[], int size) 
{ 
    int i; 
    for (i=0; i < size; i++) 
        printf("%d ", arr[i]); 
   
} 



};

int main()
{
  func f1;
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

    f1.bubbleSort(b, 4); 
    printf("Sorted array 2: \n"); 
    f1.printArray(b, 4); 
    cout<<endl;

 

  for(i=0;i<3;i++)
  {
    c[i]=a[i];
  }
  for(i=0;i<4;i++)
  {
    c[i+3]=b[i];
  }

  f1.bubbleSort(c, 7); 
    printf("Sorted array 3: \n"); 
    f1.printArray(c, 7); 
 
 return 0;
}
