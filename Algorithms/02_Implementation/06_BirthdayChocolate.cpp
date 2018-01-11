using namespace std;
#include <iostream>
int main()
{
    int n,s[101],m,d,countAns=0,sum=0;
    cin>>n;

    for(int i=0; i<n; i++ )
        cin>>s[i];

    cin>>d>>m;

    for(int k=0; k<n; k++)
    {
        for(int i=k; i<k+m; i++)
        {
            sum=sum+s[i];
        }
        if(sum==d)
            countAns++;
        sum=0;
    }

    cout<<countAns;
}
