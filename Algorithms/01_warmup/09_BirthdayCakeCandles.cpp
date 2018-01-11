using namespace std;
#include<iostream>

int main()
{
    int ans=0,n,candleHeight,maxHeight=0;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cin>>candleHeight;
        if(maxHeight<=candleHeight)
        {
            if(maxHeight<candleHeight)
                {
                    maxHeight=candleHeight;
                    ans=1;
                }
            else
                ans++;
        }
    }

    cout<<ans<<endl;

}
