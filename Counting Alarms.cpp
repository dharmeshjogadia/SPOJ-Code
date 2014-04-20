/*
SPOJ Problem Set (main)

19526. Counting Alarms

Problem code: ALARMS
*/
#include<stdio.h>
int main()
{
	int n,s,cnt;
	scanf("%d",&n);
	int ar[n+1];
	for(int i=0;i<n;i++)
		scanf("%d",&ar[i]);
	scanf("%d",&s);		
	cnt=0;
	int i=0;
	while(s>0)
	{
		cnt++;
		if(i==n)
			i=0;
		s-=ar[i++];
	}
	printf("%d\n",cnt);
return 0;	
}
