/*
SPOJ Problem Set (classical)
6256. Inversion Count
Problem code: INVCNT

Count Number Of Inversion in array
Your task is to compute the number of inversions in the file given, where the ith row of the file indicates the ith entry of an array.
*/
#include<iostream>
#include<fstream>
#define  MAX 10000005
using namespace std;

long ar[MAX];
long long CountInversion=0;
void Merger(long lb,long mid,long ub)
{
	long tmp[ub-lb+2];
	long i,j,k=0;
	i=lb;
	j=mid+1;
	while(i<=mid && j<=ub)
	{
		if(ar[i]<ar[j])
		{
			tmp[k++]=ar[i++];
		}
		else 
		{
			tmp[k++]=ar[j++];
			CountInversion+=mid-i+1;
		//	cout<<i<<":"<<mid<<":"<<CountInversion<<endl;		
		}
	}
	while(i<=mid)
		tmp[k++]=ar[i++];

	while(j<=ub)
		tmp[k++]=ar[j++];
		
	for(i=lb,k=0;i<=ub;i++,k++)
	{
			ar[i]=tmp[k];
	//		cout<<ar[i]<<endl;
	}
	//		cout<<endl;
}
void Partition(long lb,long ub)
{
	if(lb>=ub)
		return ;
	long mid=(lb+ub)/2;
	Partition(lb,mid);
	Partition(mid+1,ub);
	Merger(lb,mid,ub);
}

int main()
{
	long n,i,t;
	cin>>t;
	
/*	ifstream input;
	input.open("inversionInput.txt");
	if(!input.is_open())
	{
		cout<<"file open fail";
		return 0;
	}
	i=0;
	while(input>>n)
	{
		ar[i++]=n;
	}
	*/
	while(t--)
	{
		cout<<"\n";		
		cin>>n;
		CountInversion=0;
		for(i=0;i<n;i++)
			cin>>ar[i];
		Partition(0,n-1);
		cout<<CountInversion<<"\n";
		
	}
	return 0;
}
