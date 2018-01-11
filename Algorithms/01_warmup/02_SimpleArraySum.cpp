using namespace std;
#include<iostream>

int main()
{

    int n,a[100],ans=0;
    cin>>n;

    for(int i=0;i<n;i++)
        cin>>a[i];

    for(int j=0;j<n;j++)
    {
        ans=ans+a[j];
    }
    cout<<ans<<endl;
}
