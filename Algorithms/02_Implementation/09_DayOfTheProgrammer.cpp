using namespace std;
#include<iostream>

int main()
{
    int year,feb=28,day=215;//day means sum of 8 month without February

    cin>>year;
    if(year==1918)
        day=day-13;

    if(year%4==0 )
    {
        feb=29;         //        leapYear=true;
        if(year%100==0 && year%400!=0 && year>1918)
            feb=28;     //leapYear=false;
    }

    day=feb+day;

    cout<<256-day<<".0"<<9<<"."<<year;

}
