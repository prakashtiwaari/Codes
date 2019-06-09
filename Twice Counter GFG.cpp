#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	
	int  t,n;
	cin>>t;
	string str;
	while(t--)
	{
	    map<string,int> freq;
	    cin>>n;
	    int count=0;
	    for(int i=0;i<n;i++)
	    {
	        cin>>str;
	        freq[str]++;
	        
	    }
	     map<string, int>::iterator it;
	     for(it=freq.begin();it!=freq.end();it++)
	     {
	         if(it->second==2)
	          count++;
	     }
	     cout<<count<<endl;
	    freq.clear();
	    
	    
	}
	
	
	return 0;
}
