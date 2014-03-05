/*
SPOJ Problem Set (classical)

1724. Counting Triangles

Problem code: TRICOUNT
*/
#include<stdio.h>

int main()
{
    int t;
    unsigned long long n;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lld",&n);
        printf("%lld\n",(n*(n+2)*(2*n+1)/8));
    }
return 0;
}


