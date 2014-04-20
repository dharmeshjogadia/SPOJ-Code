/*

SPOJ Problem Set (main)

19519. Help Ash!!!

Problem code: POKEMON
link:http://www.spoj.com/IPC08/problems/POKEMON/
*/
#include<stdio.h>
#include<math.h>
#define MAX 10000007
bool primeAr[MAX];
long dp[MAX]={0};
long  gcd(long A, long B)
{
long temp;
while ((B % A) != 0) {
temp = B % A;
B = A;
A = temp;
}
return (A);
}
int main()
{
	for(long long i=2;i<=sqrt(MAX);i++)	
	{
		if(!primeAr[i])
			for(long long  j=i*i;j<=MAX;j+=i)
				primeAr[j]=true;
	}
	for(long long i=1;i<=MAX-7;i++)
	{
		if(!primeAr[i])
			dp[i]=dp[i-1]+i-1;
		else{
			dp[i]=dp[i-1]+1;
		//	printf("%lld----\n",i);
			for(long long j=2;j<=i;j++)
			{
			
					if(i%2 && i%j)
					{
						//if(gcd(i,j)==1)
						{
						//	printf("%lld\n",j);
						  dp[i]++;
						}	
					}
					else if(!primeAr[j])
					{
						if(i%j)
						{
								//printf("%lld\n",j);
									dp[i]++;
						}
					}
			}
		}
	}
	for(int i=0;i<=10;i++)
		printf("%ld\n",dp[i]);
/*	int t;
	long long n,cnt;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);	
		
		
	}
*/	
}
