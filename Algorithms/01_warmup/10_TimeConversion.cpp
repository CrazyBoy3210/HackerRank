using namespace std;
#include<iostream>
#include <string>
#include<stdio.h>
int main()
{
    string timeString;
    int h,m,s;
    cin>>timeString;

    h=(timeString[0]-'0')*10+(timeString[1]-'0');
    m=(timeString[3]-'0')*10+(timeString[4]-'0');
    s=(timeString[6]-'0')*10+(timeString[7]-'0');


    if(timeString[8]=='P' && h<12)
    {
        h=h+12;
    }

    if(timeString[8]=='A' && h==12)
    {
            h=00;
    }

    printf("%02d:%02d:%02d",h,m,s);



}
