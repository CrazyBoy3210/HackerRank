using namespace std;
#include<iostream>

int main()
{

    int a[3],b[3];
    int alice=0,bob=0;

    for(int  i=0;i<3;i++)
        cin>>a[i];
    for(int  i=0;i<3;i++)
        cin>>b[i];



    for(int i=0;i<3;i++)
    {
        if(a[i]>b[i])
            alice++;
        if(b[i]>a[i])
            bob++;

    }

    cout<<alice<<" "<<bob<<endl;

}
