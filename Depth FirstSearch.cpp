/*
	Depth First Search on Matrix
*/
#include<iostream>

using namespace std;
bool visited[100];
void DepthFirstSearch(bool g[100][100],int n,int v)
{
		visited[v]=true;
		cout<<v<<endl;
		for(int i=0;i<n;i++)
		{
			if(visited[i]==false && g[v][i]==true)
			{
			
					DepthFirstSearch(g,n,i);
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
	DepthFirstSearch(graph,n,0);
return 0;
}
