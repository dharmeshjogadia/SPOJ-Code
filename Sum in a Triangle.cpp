#include<iostream>
#define _ std::
#define F(i,n) for(i=0;i<n;i++)
int main(){int i,j,t,n,a[100][100];_ cin>>t;while(t--){_ cin>>n;F(i,n)F(j,i+1)_ cin>>a[i][j];for(i=n-1;i>0;i--)F(j,i+1)a[i-1][j]+=_ max(a[i][j],a[i][j+1]);_ cout<<a[0][0]<<"\n";}}
