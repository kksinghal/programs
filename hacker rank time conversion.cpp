#include<iostream>
using namespace std;

int main()
{
    string TwelveHourSystem;
    cin>>TwelveHourSystem;
    if(TwelveHourSystem[8]=='p')
    {
    int HoursInTwentyFourHourSystem=12+(((int) TwelveHourSystem[0])-48)*10+((int)TwelveHourSystem[1])-48;
        cout<<HoursInTwentyFourHourSystem;
       int i=2;
        while(i<8)
        {
            cout<<TwelveHourSystem[i];
            i++;
        }

    }
     else
     {
         int i=0;
         while(i<8)
         {
             cout<<TwelveHourSystem[i];
             i++;
         }
     }


}
