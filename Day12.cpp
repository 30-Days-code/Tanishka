//Program to write in a text file
#include <fstream> 
#include<iostream>
using namespace std; 
 
int main()
  {  
     ofstream fout; 
     fout.open("out.txt"); 
     char str[300]="Share whatever you feel, but with the right person. Your life would become amazing."; 
 
     fout.close();     
     return 0; 
  } 

//Program to read from text file and display it 
#include<iostream>
#include<fstream>
using namespace std;

int main()
{ 
    ifstream fin;
    fin.open("out.txt");          
    char ch;          
    while(!fin.eof())     
    {          
      fin.get(ch);          
      cout<<ch;     
    }          
  
  fin.close();     
  return 0; 
}   

//Program to count number of characters. 
#include<fstream>
#include<iostream>
using namespace std; 
 
int main() 
{     
  ifstream fin;     
  fin.open("out.txt"); 
 
   int count=0;     
   char ch;  
 
    while(!fin.eof())     
    {         
      fin.get(ch);         
      count++;     
    }          
  cout<<"Number of characters in file are "<<count;          
  fin.close();     
  return 0; 
} 

//Program to count number of words 
#include<fstream>
#include<iostream> 
using namespace std; 
 
int main() 
{     
  ifstream fin;     
  fin.open("out.txt"); 
 
    int count=0;     
    char word[30];  
 
    while(!fin.eof())     
    {         
      fin>>word;         
      count++;     
    }          
  cout<<"Number of words in file are "<<count;          
  fin.close();     
  return 0; 
} 

//Program to count number of lines 
#include<fstream> 
#include<iostream> 
using namespace std; 
 
int main() 
{     
  ifstream fin;     
  fin.open("out.txt"); 
 
    int count = 0;     
    char str[80];
  while(!fin.eof())   
  {         
    fin.getline(str,80);       
    count++;   
  }          
  cout<<"Number of lines in file are"<<count; 
    fin.close();   
    return 0;
} 

//Program to copy contents of file to another file. 
#include<iostream>
#include<fstream>
using namespace std; 
 
int main() 
{     
  ifstream fin;     
  fin.open("out.txt");          
  ofstream fout;     
  fout.open("sample.txt");          
  char ch;          
  while(!fin.eof())     
  {         
    fin.get(ch);         
    fout << ch;     
  } 
 
    fin.close();     
    return 0;
} 
 
 

 
