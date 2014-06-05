/*
Candy 1
*/
#include<iostream>
using namespace std;

int main()
{
        int n,c,i;
        long tmp;
        long s;
        while(1)
        {
            cin>>n;

            if(n==-1)
                break;
            int v[n];
            s=0;
            for(i=0;i<n;i++)
            {
                cin>>v[i];
                s+=v[i];
            }
            tmp=s/n;
            c=0;
            if(tmp*n==s)
            {
                for(i=0;i<n;i++)
                {
                    if(tmp>v[i])
                    c+=tmp-v[i];
                }
                cout<<c<<"\n";
            }
            else
                cout<<"-1\n";
        }
}
