using namespace std;
#include<iostream>

int main()
{
    long n,c1=0,c2=0,c3=0,c4=0,c5=0;

    cin>>n;

    for(long i=0; i<n; i++)
    {
        int bird;
        cin>>bird;

        if(bird==1)
            c1++;
        else if(bird==2)
            c2++;
        else if(bird==3)
            c3++;
        else if(bird==4)
            c4++;
        else
            c5++;

    }
    long ans,out;
    ans=c5;
    out=5;
    if(ans<=c4)
    {
        out=4;
        ans=c4;
    }

    if(ans<=c3)
    {
        out=3;
        ans=c3;
    }
    if(ans<=c2)
    {
        out=2;
        ans=c2;
    }
    if(ans<=c1)
    {
        out=1;
        ans=c1;
    }
    cout<<out;




}
