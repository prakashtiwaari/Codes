#include<bits/stdc++.h>
using namespace std;
vector<int>vec[10];
bool *visited = new bool[10];
void addedge(int v1,int v2)
{
	vec[v1].push_back(v2);
}
void traverseDFS(int v)
{
	visited[v]=true;
	cout<<v<<"-->";
	vector<int> :: iterator it;
	for(it=vec[v].begin();it!=vec[v].end();it++)
	{
		if(visited[*it]==false)
		 traverseDFS(*it);
	}
}
void dfs(int v)
{
	for(int i=0;i<10;i++)
	  visited[i]=false;
	  
	// traverseDFS(v);              ------------for a connected Graph .
	// For Disconnected Graph
	
	 for(int i=0;i<6;i++)
	  {
	  	if(visited[i]==false)
	  	 traverseDFS(i);
	  }
	
}

int main()
{ 
    addedge(0,1);
	addedge(0,2);
	addedge(2,4);
	addedge(2,1);
	addedge(3,3);
	addedge(3,2);
	addedge(4,5);
	addedge(5,3);
	dfs(0000);
	
	return 0;
}
