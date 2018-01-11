using namespace std;
#include<iostream>
#include<algorithm>
int main()
{
    int arr[5];

    for(int i=0;i<5;i++)
        cin>>arr[i];
    sort(arr,arr+5);

    for(int i=0;i<5;i++)
        cout<<arr[i];



}
