/*
SPOJ Problem Set (main)

19525. Toofani Bhaggu

Problem code: BHAGGU
*/
#include<stdio.h>
#define MOD 1000000007
int main()
{
	int t,n,k;
	long long s,sum;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d %d",&n,&k);	
		
		int t=k-1;
		k--;
		s=1;
		sum=0;
		for(int i=n-2;i>0;i--)
		{
			s=(s*t)%MOD;
		}
		s=s-(n-3);
		//printf("%lld %lld\n",s,sum);	
		//s=(s+sum)%MOD;
		printf("%lld\n",s);
	}
	return 0;
}
