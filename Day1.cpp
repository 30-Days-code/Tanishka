#include <iostream>
using namespace std;

class book
{
  public:
  int Book_Number; 
  char Book_Name[50];
  char Author[50];
  char Publisher[50];
  int No_of_copies_issued;
  int No_of_copies;
  int price;

 public:
 
 void set_data()
 {
  
   cout<<"enter book name, book number, Author, Publisher, number of copies issued, number of copies available,book price in order";
   cin>>Book_Name>>Book_Number>>Author>>Publisher>>No_of_copies_issued>>No_of_copies>>price;
   cout<<"Book name= "<<Book_Name<<endl;
   cout<<"Book number= "<<Book_Number<<endl;
   cout<<"Book author= "<<Author<<endl;
   cout<<"Book Publisher= "<<Publisher<<endl;
   cout<<"Number of copies issued= "<<No_of_copies_issued<<endl;
   cout<<"Number of copies= "<<No_of_copies<<endl;
   cout<<"Book price= "<<price<<endl<<endl<<endl;
 }


  void issue()
  {
    if(No_of_copies>No_of_copies_issued)
    {
      cout<<"Book is available \n";
      No_of_copies_issued=No_of_copies_issued+1;
      cout<<"Book successfully issued"<<endl<<endl;
    }

    if(No_of_copies==No_of_copies_issued)
    {
      cout<<"Book is not available"<<endl<<endl;
    }

  } 

  void returning()
  {
    cout<<"scanning your book \n";
    No_of_copies_issued=No_of_copies_issued-1;
    cout<<"Book returned successfully"<<endl<<endl<<endl;
  } 
	
  void display()
  {
    cout<<"Book name:"<<Book_Name<<endl;
    cout<<"Author:"<<Author<<endl;
    cout<<"Publisher:"<<Publisher<<endl;
    cout<<"Number of copies available:"<<No_of_copies<<endl;
    cout<<"Number of copies issued:"<<No_of_copies_issued<<endl;
    cout<<"Price:"<<price<<endl;
    cout<<"Book number:"<<Book_Number<<endl;
  }
};

int main() 
{
  book b1;
  b1.set_data();
  b1.issue();
  b1.returning();
  b1.display();
}
