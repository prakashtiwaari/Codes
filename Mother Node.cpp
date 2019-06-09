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
	cout<<endl;
}

void dfs(int v)
{
		int flag;
	for(int j=0;j<10;j++)
	visited[j]=false;
	  
	 
	  	
	   	traverseDFS(v); 
		for(int j=0;j<5;j++)
	  {
	  	if(visited[j]==false)
	  	   {
	  	   	flag=1;
	  	   	break;
			 }
		else if(j==4)
		  cout<<"THIS IS MOTHER NODE--"<<v<<endl;
	  }
	  if(flag==1)
	  {
	  	flag=0;
	  	for(int k=0;k<10;k++)
     	visited[k]=false;
	  	
	   } 
	  }
	                 //------------for a connected Graph .
	// For Disconnected Graph

int main()
{
//	addedge(0, 1); 
//    addedge(0, 2); 
//   addedge(1, 3); 
//    addedge(4, 1); 
//    addedge(6, 4); 
//   addedge(5, 6); 
//   addedge(5, 2); 
//   addedge(6, 0);


addedge(1, 0);
addedge(0, 3);
addedge(0,2);
addedge(2, 1);
addedge(3, 4);
 
  
   for(int i=0;i<5;i++)
	  { 
	    dfs(i);
      }
	
	return 0;
}
