#include <iostream>
using namespace std;

class travelplan
{
  long plancode;
  char place[50]="agra";
  int number_of_travellers, no_of_buses;
 
 public:
 travelplan()
 {
   plancode=1001;
   number_of_travellers=5;
   no_of_buses=1;

 }

 void newplan()
 {
   cout<<"enter plan code"<<endl;
   cin>>plancode;

   cout<<"enter place"<<endl;
   cin>>place;

   cout<<"enter number of travellers"<<endl;
   cin>>number_of_travellers;

   if(number_of_travellers<20)
 {
   no_of_buses=1;
 }

 if(number_of_travellers>=20 && number_of_travellers<40)
 {
   no_of_buses=2;
 }

 if(number_of_travellers>=40)
 {
   no_of_buses=3;
 }

}
 
 void showplan()
 {
   cout<<"plan code is "<<plancode<<endl;
   cout<<"place is "<<place<<endl;
   cout<<"number of travellers are "<<number_of_travellers<<endl;
   cout<<"number of buses are "<<no_of_buses<<endl;
 }

};

int main()
 {
   travelplan t1;
   t1.newplan();
   t1.showplan();
 }


