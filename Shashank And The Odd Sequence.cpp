/*
SPOJ Problem Set (main)

19266. Shashank And The Odd Sequence

Problem code: SAOS
link:http://www.spoj.com/IPC07/problems/SAOS/
*/
#include<stdio.h>

int main()
{
	int t,n,tmp,cnt;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);	
		int tmpAr[100001],ar[1001]={0};
		cnt=0;
		for(int i=0;i<n;i++)
		{
			scanf("%d",&tmp);	
			tmpAr[i]=tmp;
			ar[tmp]++;
		}
		for(int i=0;i<n;i++)
		{
			if(ar[tmpAr[i]])
			{
				if(ar[tmpAr[i]]%2)
				{
					cnt++;
					ar[tmpAr[i]]=0;
				}		
			}
		}
		printf("%d\n",cnt);
	}
}
