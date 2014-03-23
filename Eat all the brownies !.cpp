/*
SPOJ Problem Set (classical)

17626. Eat all the brownies !

Problem code: CUTCAKE
*/
#include<stdio.h>
int main()
{
	long long t,n,ps,cut;
	scanf("%lld",&t);
	while(t--)
	{
		ps=1;
		cut=0;
		scanf("%lld",&n);	
		while(ps<n)
		{
			cut++;
			ps+=cut;
		}
		printf("%lld\n",cut);
	}
return 0;
}

