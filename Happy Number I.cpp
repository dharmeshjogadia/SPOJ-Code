#include<iostream>
using namespace std;

unsigned int DigitsSum(unsigned long num)
{
    unsigned int s=0;
    short digit;
    while(num)
    {
        digit=num%10;
        s+=(digit*digit);
        num/=10;
    }
    return s;
}
int main()
{
        unsigned long n;
        int cnt=0,ar[1000]={0},tmp;
        cin>>n;
        do{
            tmp=DigitsSum(n);
            cout<<tmp<<"\n";
            if(ar[tmp]==0)
            {
                n=tmp;
                ar[tmp]=1;
                cnt++;
            }
            else{
                cnt=0;
                n=1;
            }
        }while(n!=1);
        if(cnt)
            cout<<cnt<<"\n";
        else
            cout<<"-1\n";
}
