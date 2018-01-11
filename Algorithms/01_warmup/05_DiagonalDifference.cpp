using namespace std;
#include<iostream>
#include<cmath>

int main()
{
    int n,arr[100][100];
    int sum1=0,sum2=0;

    cin>>n;

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin>>arr[i][j];
        }
    }

    for(int i=0; i<n; i++)
    {
        sum1=sum1+arr[i][i];
        sum2=sum2+arr[i][(n-1)-i];
    }
    cout<<abs(sum1-sum2)<<endl;

}
