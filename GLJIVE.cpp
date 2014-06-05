/*
SPOJ Problem Set (classical)
8319. GLJIVE
Problem code: GLJIVE
*/
#include<iostream>
#include<vector>
#include<algorithm>
#include<cstdlib>
using namespace std;
int main()
{
	int ar[11],i,sumAr[11]={-1};
	vector<int> diff_p,diff_n;
	for(i=0;i<10;i++)
	{
		cin>>ar[i];
		if(i==0)
			sumAr[i]=ar[i];
		else
			sumAr[i]=ar[i]+sumAr[i-1];
	}
	for(i=0;i<10;i++)
	{
		if(sumAr[i]<100)
			diff_n.push_back(sumAr[i]-100);
		else	
			diff_p.push_back(sumAr[i]-100);
	}
	
	sort(diff_n.begin(),diff_n.end());
	sort(diff_p.begin(),diff_p.end());
	for(i=0;i<diff_n.size();i++)
		cout<<diff_n[i]<<endl;
	for(i=0;i<diff_p.size();i++)
		cout<<diff_p[i]<<endl;
    if( diff_p.empty() ) 
		cout << 100 + diff_n[0] <<endl;
    else if ( diff_n.empty() ) 
		cout << 100 + diff_p[0] <<endl;
    else if ( diff_p[0] <= abs ( diff_n[0] ) ) 
		cout<< 100 + diff_p[0] <<endl;
    else 
		cout<<100 +  diff_n[0] <<endl;
         
	return 0;
}

