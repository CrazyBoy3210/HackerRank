using namespace std;
#include<iostream>
int main()
{
    int n;
    cin>>n;
    while(n)
    {
        int x,y,z;
        cin>>x>>y>>z;

        if(abs(z-y)>abs(z-x))
            cout<<"Cat A"<<endl;
        else if(abs(z-y)==abs(z-x))
            cout<<"Mouse C"<<endl;
        else
            cout<<"Cat B"<<endl;

        n--;
    }
}
