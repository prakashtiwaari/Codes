#include <bits/stdc++.h>
using namespace std;

void rotatebyone(vector<int>v)
{
    int tmp=v[0],i;
    for(i=0;i<v.size()-1;i++)
    {
        v[i]=v[i+1];
    }
    v[i]=tmp;
    
      for(int i=0;i<v.size();i++)
	    cout<<v[i]<<" ";
	    cout<<endl;
}

int main() {
	//code
	int t,n;
	cin>>t;

	while(t--)
	{
	    	vector<int>v;
	    cin>>n;
	    for(int i=0;i<n;i++)
	    {
	        int tmp;
	        cin>>tmp;
	        v.push_back(tmp);
	    }
	    int d;
	    cin>>d;
	    for(int j=0;j<d;j++)
	    {
	         int tmp=v[0],i;
    for(i=0;i<v.size()-1;i++)
    {
        v[i]=v[i+1];
    }
    v[i]=tmp;
    
	    }
	    
	    for(int i=0;i<n;i++)
	    cout<<v[i]<<" ";
	    cout<<endl;
	    
	}
	return 0;
}
