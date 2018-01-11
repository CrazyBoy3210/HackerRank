using namespace std;
#include<iostream>
int main()
{
    int  s,t,a,b,m,n,apple,orange,countApple=0,countOrange=0;

    cin>>s>>t;
    cin>>a>>b;
    cin>>m>>n;

    for(int i=0; i<m; i++)
        {
            cin>>apple;
            if(apple>=s-a && apple<=(t-a))
                countApple++;

        }
    for(int j=0; j<n; j++)
        {
            cin>>orange;
            if(t-b>=orange && orange>=(s-b))
                countOrange++;
        }

    cout<<countApple<<endl<<countOrange<<endl;


}
