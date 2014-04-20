/*
SPOJ Problem Set (main)

19521. Game Of Thrones

Problem code: GOTDT
link:http://www.spoj.com/IPC08/problems/GOTDT/
*/
#include<stdio.h>
int main()
{
	int t,k,n;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d %d",&n,&k);	
		if(n==k)
			printf("-1\n");
		else
		{
			int gap=n-k;
			printf("%d ",gap);
			for(int i=1;i<=n;i++)
				if(i!=gap)
					printf("%d ",i);
			printf("\n");
		}
		
	}
return 0;
}
