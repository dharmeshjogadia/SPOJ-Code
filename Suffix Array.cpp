/*
SPOJ Problem Set (partial)
6409. Suffix Array
Problem code: SARRAY
*/
#include<iostream>
#include<algorithm>
#include<vector>
#include<string.h>
#define MAX 100001
using namespace std;

char inputStr[MAX]="abracadabra0AbRa4Cad14abra";
struct Node{
	int inx;
	char *suff;
};

bool ComperStruct(struct Node str1,struct Node str2)
{
	return (strcmp(str1.suff,str2.suff)<0)?true:false;
}
int * CreateSuffixAr(long len)
{
	Node suffAr[len+1];
	for(long i=0;i<len;i++)
	{
		suffAr[i].inx=i;
		suffAr[i].suff=(inputStr+i);
	}
	sort(suffAr,suffAr+len,ComperStruct);
	int *inxAr=new int[len+1];
	for(long i=0;i<len;i++)
		inxAr[i]=suffAr[i].inx;
	return inxAr;
}
int main()
{
	cin>>inputStr;
	long len=strlen(inputStr);
	
	int *inxAr=CreateSuffixAr(len);
	for(long i=0;i<len;i++)
		cout<<inxAr[i]<<endl;
	return 0;
}
