using namespace std;
#include<iostream>
#include<algorithm>
int main()
{
    int n,m,a[100],b[100],ans=0;
    cin>>n>>m;

    for(int i=0; i<n; i++)
        cin>>a[i];
    for(int j=0; j<m; j++)
        cin>>b[j];

    sort(a,a+n);
    sort(b,b+m);

    for(int i=n; i<=b[0]; i++)
    {
        int flag=0,j,k;
        for(j=0; j<n; j++)
        {
            if(i%a[j]!=0)
                break;
        }
        if(j==n)
        {
            for(k=0; k<m; k++)
            {
                if(b[k]%i!=0)
                    break;
            }
            if(k==m)
                ans++;
        }

    }
    cout<<ans;





}
