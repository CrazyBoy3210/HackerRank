using namespace std;
#include<iostream>
int main()
{
    int n,k,b,sum=0;

    cin>>n>>k;
    for(int i=0; i<n; i++)
    {
        int c;
        cin>>c;
        if(i!=k)
            sum=sum+c;
    }
    cin>>b;

    if((int)sum/2==b)
        cout<<"Bon Appetit";
    else
        cout<<b-((int)sum/2);

}
