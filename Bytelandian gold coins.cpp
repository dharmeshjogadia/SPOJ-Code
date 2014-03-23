/*
SPOJ Problem Set (classical)

346. Bytelandian gold coins

Problem code: COINS
*/
#include<stdio.h>
#include<map>
using namespace std;
map <int,long long> dp;
long long Exchange(long long n)
{
	if(n==0)
		return n;
	if(dp[n]!=0)
		return dp[n];
	else
	{
		long long tmp=Exchange(n/2)+Exchange(n/3)+Exchange(n/4);
		if(tmp>n)
			dp[n]=tmp;
		else
			dp[n]=n;
		return dp[n];
	}
}
int main()
{
	int t;
	long long n;
	//scanf("%d",&t);
	while(scanf("%lld",&n)==1)
	{
		printf("%lld\n",Exchange(n));
	}
	return 0;
}
