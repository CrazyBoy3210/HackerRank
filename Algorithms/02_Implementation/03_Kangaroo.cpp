using namespace std;
#include <iostream>
int main()
{
    int m,n,a,b,loop;
    cin>>m>>a>>n>>b;

    if(m>n)
        loop=m-n;
    else
        loop=n-m;
    for(int i=0; i<loop; i++)
    {
        m=m+a;
        n=n+b;
        if(m==n)
            break;
    }

    if(m==n)
        cout<<"YES";
    else
        cout<<"NO";

}
