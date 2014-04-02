/*
Breadth first Search
on Matrix
*/
#include<iostream>
#include<queue>
using namespace std;

bool visited[100];
queue<int> q;
void BreadthFirstSearch(bool g[100][100],int n,int v)
{
	q.push(v);
	while(!q.empty())
	{
		v=q.front();
		q.pop();
		for(int i=0;i<n;i++)
		{
			if(g[v][i]==true)
			{
				cout<<i<<endl;
				visited[i]=true;
				q.push(i);
				
			}
			
		}	
		
	}
}

int main()
{
	int n,e1,e2;
	cout<<"Enter Number Of Edges:";
	cin>>n;
	bool graph[100][100];
	cout<<"e1 e2";
	for(int i=0;i<n;i++)
	{
		cin>>e1>>e2;
		graph[e1][e2]=true;
		graph[e2][e1]=true;
	}
	BreadthFirstSearch(graph,n,0);
return 0;
}
