/*
Weekly Challenges - Week 3
The Love-Letter Mystery
link:https://www.hackerrank.com/contests/w3/challenges/the-love-letter-mystery
*/
#include<iostream>
using namespace std;

int main()
{
	string str,pStr;;
	int length,mid1,mid2,t,i;
	long sum;
	cin>>t;
	while(t--)
	{
		cin>>str;
		
		length=str.length();
		sum=0;
		int j=length-1;
		;
		for(i=0;i<(length/2);i++)
		{
			int tmp;
			if(str[j]>str[i])
				tmp=str[j]-str[i];
			else
			tmp=str[i]-str[j];
		//	cout<<tmp;
			
			sum+=tmp;
			j--;
		}
		cout<<sum<<"\n";
	}
}
