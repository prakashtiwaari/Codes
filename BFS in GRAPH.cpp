#include<bits/stdc++.h>
using namespace std;
vector<int>vec[10];
void addedge(int v1,int v2)
{

	vec[v1].push_back(v2);
	
}
void dfs(int v)
{
bool *visited=new bool[10];
	for(int i=0;i<6;i++)
	  visited[i]=false;
	queue<int> q;
	visited[v]=true;
	q.push(v);
	while(!q.empty())
	{
		
		v=q.front();
		cout<<v<<" -> ";
		q.pop();
	 vector<int> ::iterator it;
	 for(it=vec[v].begin();it!=vec[v].end();it++)
	 {
	 	if(visited[*it]==false)
	 	{
	 		visited[*it]=true;
	 		q.push(*it);
		 }
	 }
	 
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
	dfs(0);
	return 0;
}
