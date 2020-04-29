#include<iostream>
using namespace std;

int main(void)
{
  int a,b,c,d,e;
  cout<<"enter any number from 0 to 999"<<endl;
  cin>>a;

  b=a/100;
    if(b!=0)
    {
      switch(b)
      {
        case 1:
        cout<<"one hundred ";
        break;

        case 2:
        cout<<"two hundred ";
        break;

         case 3:
        cout<<"three hundred ";
        break;

         case 4:
        cout<<"four hundred ";
        break;

         case 5:
        cout<<"five hundred ";
        break;

         case 6:
        cout<<"six hundred ";
        break;

         case 7:
        cout<<"seven hundred ";
        break;

         case 8:
        cout<<"eight hundred ";
        break;

         case 9:
        cout<<"nine hundred ";
        break;
      }
    }

    c=a%100;
    d=c/10;
     e=c%10;
      if(d!=0)
      {
        switch(d)
        {

          case 9:
          cout<<"ninety ";
          if (e!=0)
          {
            switch(e)
            {
              case 9:
              cout<<"nine ";
              break;

              case 8:
              cout<<"eight ";
              break;

              case 7:
              cout<<"seven ";
              break;

              case 6:
              cout<<"six ";
              break;

              case 5:
              cout<<"five ";
              break;

              case 4:
              cout<<"four ";
              break;

              case 3:
              cout<<"three ";
              break;

              case 2:
              cout<<"two ";
              break;

              case 1:
              cout<<"one ";
              break;
            }
          break;}

          case 8:
          cout<<"eighty ";
          if (e!=0)
          {
            switch(e)
            {
              case 9:
              cout<<"nine ";
              break;

              case 8:
              cout<<"eight ";
              break;

              case 7:
              cout<<"seven ";
              break;

              case 6:
              cout<<"six ";
              break;

              case 5:
              cout<<"five ";
              break;

              case 4:
              cout<<"four ";
              break;

              case 3:
              cout<<"three ";
              break;

              case 2:
              cout<<"two ";
              break;

              case 1:
              cout<<"one ";
              break;
            }
          break;}

          case 7:
          cout<<"seventy ";
          if (e!=0)
          {
            switch(e)
            {
              case 9:
              cout<<"nine ";
              break;

              case 8:
              cout<<"eight ";
              break;

              case 7:
              cout<<"seven ";
              break;

              case 6:
              cout<<"six ";
              break;

              case 5:
              cout<<"five ";
              break;

              case 4:
              cout<<"four ";
              break;

              case 3:
              cout<<"three ";
              break;

              case 2:
              cout<<"two ";
              break;

              case 1:
              cout<<"one ";
              break;
            }
          break;}

          case 6:
          cout<<"sixty ";
          if (e!=0)
          {
            switch(e)
            {
              case 9:
              cout<<"nine ";
              break;

              case 8:
              cout<<"eight ";
              break;

              case 7:
              cout<<"seven ";
              break;

              case 6:
              cout<<"six ";
              break;

              case 5:
              cout<<"five ";
              break;

              case 4:
              cout<<"four ";
              break;

              case 3:
              cout<<"three ";
              break;

              case 2:
              cout<<"two ";
              break;

              case 1:
              cout<<"one ";
              break;
            }
          break;}

          case 5:
          cout<<"fifty ";
          if (e!=0)
          {
            switch(e)
            {
              case 9:
              cout<<"nine ";
              break;

              case 8:
              cout<<"eight ";
              break;

              case 7:
              cout<<"seven ";
              break;

              case 6:
              cout<<"six ";
              break;

              case 5:
              cout<<"five ";
              break;

              case 4:
              cout<<"four ";
              break;

              case 3:
              cout<<"three ";
              break;

              case 2:
              cout<<"two ";
              break;

              case 1:
              cout<<"one ";
              break;
            }
          break;
          }

          case 4:
          cout<<"fourty ";
          if (e!=0)
          {
            switch(e)
            {
              case 9:
              cout<<"nine ";
              break;

              case 8:
              cout<<"eight ";
              break;

              case 7:
              cout<<"seven ";
              break;

              case 6:
              cout<<"six ";
              break;

              case 5:
              cout<<"five ";
              break;

              case 4:
              cout<<"four ";
              break;

              case 3:
              cout<<"three ";
              break;

              case 2:
              cout<<"two ";
              break;

              case 1:
              cout<<"one ";
              break;
            }
          break;
          }

          case 3:
          cout<<"thirty ";
          if (e!=0)
          {
            switch(e)
            {
              case 9:
              cout<<"nine ";
              break;

              case 8:
              cout<<"eight ";
              break;

              case 7:
              cout<<"seven ";
              break;

              case 6:
              cout<<"six ";
              break;

              case 5:
              cout<<"five ";
              break;

              case 4:
              cout<<"four ";
              break;

              case 3:
              cout<<"three ";
              break;

              case 2:
              cout<<"two ";
              break;

              case 1:
              cout<<"one ";
              break;
            }
          break;
          }

          case 2:
          cout<<"twenty ";
          if (e!=0)
          {
            switch(e)
            {
              case 9:
              cout<<"nine ";
              break;

              case 8:
              cout<<"eight ";
              break;

              case 7:
              cout<<"seven ";
              break;

              case 6:
              cout<<"six ";
              break;

              case 5:
              cout<<"five ";
              break;

              case 4:
              cout<<"four ";
              break;

              case 3:
              cout<<"three ";
              break;

              case 2:
              cout<<"two ";
              break;

              case 1:
              cout<<"one ";
              break;
            }
          break;
          }
          case 1:
         
          if (e!=0)
          {
            switch(e)
            {
              case 9:
              cout<<"nineteen ";
              break;

              case 8:
              cout<<"eighteen ";
              break;

              case 7:
              cout<<"seventeen ";
              break;

              case 6:
              cout<<"sixteen ";
              break;

              case 5:
              cout<<"fifteen ";
              break;

              case 4:
              cout<<"fourteen ";
              break;

              case 3:
              cout<<"thirteen ";
              break;

              case 2:
              cout<<"twelve ";
              break;

              case 1:
              cout<<"eleven ";
              break;

            }
          }

          if(e==0)
          cout<<"ten";

        }

      }

      if(a==0)
      cout<<"zero";

}
