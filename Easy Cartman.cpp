#include<iostream>
using namespace std;

int main()
{
    long a,b,n,r;
    int t;
    cin>>t;
    while(t)
    {
        cin>>a>>b>>n;
        r=b-a;
        cout<<n*(2*a+(n-1)*r)/2<<"\n";
    t--;
    }
}
