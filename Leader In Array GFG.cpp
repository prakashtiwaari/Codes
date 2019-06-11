#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	
	int t;
	long int n;
	cin>>t;
	while(t--)
	{
	    long int max_till_now=-1;
	    cin>>n;
	    vector<long int>v2;
	    vector<long int>v;
	    for(long int i=0;i<n;i++)
	    {
	        long int tmp;
	        cin>>tmp;
	        v.push_back(tmp);
	    }
	    for(long int j=v.size()-1;j>=0;j--)
	    {
	       long int max=v[j];
	       if(max_till_now<=max)
	       {
	         max_till_now=max;
	         
	         v2.push_back(max_till_now);
	          // cout<<max_till_now<<" ";
	       }
	         
	        
	       
	    }
	    for(int k=v2.size()-1;k>=0;k--)
	      cout<<v2[k]<<" ";
	  
	    
	    
	    cout<<endl;
	}
	return 0;
}
