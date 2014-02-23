/*
a=7 b=1234
For example, for 1234 % 7.
1 mod 7 = 1
12 mod 7 = (1 * 10 + 2) mod 7 = 5
123 mod 7 = (5 * 10 + 3) mod 7 = 4
1234 mod 7 = (4 * 10 + 4) mod 7 = 2
*/
#include<stdio.h>
#include<string.h>
using namespace std;
unsigned int GCD(unsigned int a,unsigned int b)
{
    if(b==0)
        return a;
    GCD(b,a%b);
}
int main()
{
    unsigned int a,len,i,num,t;
    short tmp;
    char b[300];
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&a);
        scanf("%255s",b);
        if(a==0)
        {
              printf("%s\n",b);
             continue;
        }
        len=strlen(b);
        i=0;
        num=0;
        while(i<len)
        {
            num=(10*num+(b[i]-'0'))%a;
            i++;
        }
        printf("%d\n",GCD(a,num));
    }

    return 0;
}
