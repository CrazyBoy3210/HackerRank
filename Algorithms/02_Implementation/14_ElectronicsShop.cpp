using namespace std;
#include<iostream>
#include<vector>
#include<algorithm>
int main()
{
    int s,n,m,ans=-1;
    cin>>s>>n>>m;

    vector<int> a1(n);
    for(int i=0; i<n; i++)
        cin>>a1[i];

    for(int i=0; i<m; i++)
    {
        int mouse;
        cin>>mouse;
        for(int j=0; j<n; j++)
        {
            if(a1[j]+mouse<=s)
            {
                if(ans<a1[j]+mouse)
                    ans=a1[j]+mouse;
            }
        }

    }
    cout<<ans;


}
