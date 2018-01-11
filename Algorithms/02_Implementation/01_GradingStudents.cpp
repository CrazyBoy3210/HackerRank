using namespace std;
#include<iostream>

int main()
{
    int n,num;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cin>>num;

        if(num%5>=3 && num>=38)
            num=num+(5-(num%5));
        cout<<num<<endl;
    }



}
