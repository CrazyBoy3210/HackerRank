using namespace std;
#include<iostream>
int main()
{
    int n,p,a1=0,a2=0;
    cin>>n>>p;


    a1=(int) p/2;
    if(p%2!=0)
        p--;
    a2=(int) (n-p)/2;

    if(a1>a2) cout<<a2;
    else cout<<a1;
}
