/*

	Depth First Search on Adjacency list
	
*/
#include<iostream>
#include<vector>

using namespace std;

bool visited[100];
void DepthFirstSearch(vector<int> *g,int n,int v)
{
	visited[v]=true;
	cout<<v<<endl;
	vector<int>:: iterator i;
	for(i=g[v].begin();i!=g[v].end();i++)
	{
		if(visited[*i]==false)
			DepthFirstSearch(g,n,*i);
	}
}

int main()
{
	vector<int> *graph;
	int n,e1,e2;
	cout<<"Enter Number Of Edges:";
	cin>>n;
	graph=new vector<int>[n];
	cout<<"e1 e2";
	for(int i=0;i<n;i++)
	{
		cin>>e1>>e2;
		graph[e1].push_back(e2);
	}
	DepthFirstSearch(graph,n,0);
	return 0;
}
