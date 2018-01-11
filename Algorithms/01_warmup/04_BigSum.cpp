using namespace std;
#include<iostream>
int main()
{
    int n,a[100];
    long sum=0;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        sum=sum+a[i];
    }
    cout<<sum;


}
