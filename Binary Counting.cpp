/*
SPOJ Problem Set (main)

19241. Binary Counting

Problem code: BINCNT
link:
http://www.spoj.com/IPC07/problems/BINCNT/
*/
#include<stdio.h>
using namespace std;

int Search(long long *ar,int len,long long val)
{
	int mid,low,high;
	low=0;high=len;
	mid=(low+high)/2;
	while(low<=high && ar[mid]!=val)
	{
		
		if(val<ar[mid])	
			high=mid-1;
		else if(val>ar[mid])	
			low=mid+1;
		mid=(low+high)/2;
	}

	return mid;
	
}
int main()
{
	long long ar[560]={1,10,11},n=100,len=3,len2,t;

	while(n<1000000000)
	{
		ar[len]=n;
		len2=len+1;
		for(long long i=0;i<len;i++)
		{
			ar[len2++]=ar[len]+ar[i];
		}
		
		len=len2;
		n*=10;
	}
	ar[len]=1000000000;
	
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld",&n);	
		printf("%d\n",Search(ar,len,n)+1);	
	}
	
		
	return 0;
}

