#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t,n,x;
	vector<int> v;
 unordered_map<int,int>hash;
	cin>>t;
	while(t--)
	{
		int count=0;
	  cin>>	n;
	  for(int i=0;i<n;i++)
	  {
	  	int tmp;
	  	cin>>tmp;
	  	v.push_back(tmp);
	  	hash[v[i]]++;
	  }
	  cin>>x;
	
	  for(int i=0;i<n;i++)
	  {
	  	count=count+hash[x-v[i]];
	  	if(x-v[i]==v[i])
	  	  count--;
	  }
	  cout<<count/2<<endl;
	  
	  
	  
	 hash.clear();
	 v.clear();
		
		
	}
	
	
	return 0;
}
