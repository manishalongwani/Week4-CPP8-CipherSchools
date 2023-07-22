#include <bits/stdc++.h>
using namespace std;

void bfs(vector<vector<int>>&g,int s,int v,vector<bool>&visited)
{
	queue<int>q;
	q.push(s);
	
	visited[s] = 1;
	
	while(!q.empty())
	{
		int f = q.front();
		q.pop();
		cout<<f<<" ";
		 
		for(int i=0;i<v;i++)
		{
			if(!visited[i] && g[f][i]==1)
			{
				q.push(i);
				visited[i] = 1;
			}
		}
	}
	return;
}

void print(vector<vector<int>>&g,int v)
{
	vector<bool>visited(v,0);
	for(int i=0;i<v;i++)
	{
		if(!visited[i])
		{
			dfs(g,i,v,visited);
			cout<<endl;
		}
	}
	return;
}

int main()
{
	int v, e;
	// Number of edges and vertices.
	cin>>v>>e;
	
	vector<vector<int>>g(v,vector<int>(v,0));
	
	for(int i=0;i<e;i++)
	{
		int f,s;
		cin>>f>>s;
		
		g[f][s] = 1;
		g[s][f] = 1;
	}
	
	print(g,v);
	
	return 0;
}
