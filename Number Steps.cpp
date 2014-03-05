/*
SPOJ Problem Set (classical)

1112. Number Steps

Problem code: NSTEPS
*/
#include<iostream>

using namespace std;

int main()
{
    int t,x,y,xm,ym;
    cin>>t;
    while(t)
    {
        cin>>x>>y;
        xm=x%2;
        ym=y%2;
        if(x==y)
        {
            if(xm==0)
                cout<<x+y<<"\n";
            else
                cout<<x*2-1<<"\n";
        }
        else if(xm==ym && y!=0 && x>=y && (x-y)==2)
        {
               if(xm==0)
                cout<<x+y<<"\n";
            else
                cout<<x+y-1<<"\n";
        }
        else if(y==0 && x==2)
                cout<<x+y<<"\n";
        else
            cout<<"No Number\n";
       

    t--;
    }
}


