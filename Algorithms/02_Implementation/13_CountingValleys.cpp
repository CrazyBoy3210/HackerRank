using namespace std;
#include<iostream>
int main()
{
    long n,countAns=0,ans=0;
    bool flag=true;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        char str;
        cin>>str;

        if(str=='U')
            countAns++;
        else
            countAns--;

        if(countAns<0 && flag)
            {
                ans++;
                flag=false;
            }
        if(countAns==0)
            flag=true;

    }
    cout<<ans;

}
