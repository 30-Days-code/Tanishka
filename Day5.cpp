#include <iostream>
#include<string.h>
using namespace std;

class clothing
{
  private: 
  int size;
  float price;
  char code[50], type[50], material[50];

  public:
  clothing()
  {
    cout<<"value of code is not assigned"<<endl;
    cout<<"value of type is not assigned"<<endl;
    cout<<"value of material is not assigned"<<endl;
    cout<<"value of price is not assigned"<<endl;
    cout<<"value of size is not assigned"<<endl;

  }
  
  void enter()
    {
      cout<<"enter the value of code"<<endl;
      cin>>code;

      cout<<"enter the type of material"<<endl;
      cin>>material;

      cout<<"enter the value of type"<<endl;
      cin>>type;

      cout<<"enter the value of size"<<endl;
      cin>>size;
    }

  void calc_price()
  {
    
    if(strcmp(material,"cotton")==0)
    {
      cout<<"Price of trouser is 1500"<<endl;
      cout<<"Price of shirt is 1200"<<endl;
    }

    if(strcmp(material, "cotton")!=0)
    {
      cout<<"for the material: "<<material<<endl;
      cout<<"Price of trousers is 1125"<<endl;
      cout<<"Price of shirt is 900"<<endl;
    }
  }
    
    void show()
    {
      cout<<"size="<<size<<endl;
      cout<<"material="<<material<<endl;
      cout<<"code="<<code<<endl;
      cout<<"type="<<type<<endl;

    }  
  };

int main() 
{
  clothing c1;
  c1.enter();
  c1.show();
  c1.calc_price();

  return 0;
}

