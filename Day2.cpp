#include <iostream>
using namespace std;

class employee
{
  public:
  int emp_number;
  char emp_name[50];
  char emp_address[100];
  char emp_dept[50];
};

class manager:public employee
{
  char emp_list[500];
};

int main()
{
  manager m1;
  
  cout<<"enter employee name: ";
  cin>>m1.emp_name;
  cout<<"employee name is "<<m1.emp_name<<endl;

  cout<<"enter employee number: ";
  cin>>m1.emp_number;
  cout<<"employee number is "<<m1.emp_number<<endl;

  cout<<"enter employee address: ";
  cin>>m1.emp_address;
  cout<<"employee address is "<<m1.emp_address<<endl;

  cout<<"enter employee department: ";
  cin>>m1.emp_dept;
  cout<<"employee department is "<<m1.emp_dept<<endl;
}
