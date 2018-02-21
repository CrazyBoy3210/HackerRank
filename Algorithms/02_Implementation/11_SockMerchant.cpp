using namespace std;
#include<iostream>
#include<algorithm>
int main()
{
    int n,a[100],ans=0;

    cin>>n;

    for(int i=0; i<n; i++)
        cin>>a[i];
    sort(a,a+n);

    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(a[i]==a[j])
            {
                ans++;
                j++;
                i=j;
            }
            else
                break;
        }
    }
    cout<<ans;
}
