using namespace std;
#include<iostream>
#include <iomanip>

int main()
{
    int n,a[100];
    int pos=0,neg=0,zero=0;
    double out1,out2,out3;

    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]==0)
            zero++;
        else if(a[i]>0)
            pos++;
        else
            neg++;
    }

    out1=(double)pos/n;
    out2=(double)neg/n;
    out3=(double)zero/n;

    cout<<fixed<<setprecision(6);

    cout<<out1<<endl<<out2<<endl<<out3<<endl;

}
