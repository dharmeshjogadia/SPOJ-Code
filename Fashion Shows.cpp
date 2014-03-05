/*
SPOJ Problem Set (classical)

1025. Fashion Shows

Problem code: FASHION
*/
#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int n,t;
    unsigned int sum;
    short x[1001],y[1001];
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>x[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>y[i];
        }
        sort(x,x+n);
        sort(y,y+n);
        sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=x[i]*y[i];
        }
        cout<<sum<<"\n";
    }
    return 0;
}


