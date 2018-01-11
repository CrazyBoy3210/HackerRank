using namespace std;
#include<iostream>
#include<algorithm>
int main()
{
    int arr[5];
    long outMin=0,outMax=0;

    for(int i=0;i<5;i++)
        cin>>arr[i];
    sort(arr,arr+5);

    for(int i=0;i<4;i++)
        {
            outMin=outMin+arr[i];
        }

    for(int i=1;i<5;i++)
        {
            outMax=outMax+arr[i];
        }

        cout<<outMin<<" "<<outMax<<endl;

}
