#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	long int n;
	cin>>t;
	while(t--)
	{
	    int max=-1;
	    cin>>n;
	  
	    for(int i=0;i<n;i++)
	    {
	        int tmp;
	        cin>>tmp;
	        
	        if(max>tmp)
	        cout<<tmp<<" ";
	        else if(i!=0 && max<=tmp)
	        cout<<"-1"<<" ";
	        
	        
	        max=tmp;
	        
	    }
	    cout<<"-1"<<" ";
	    cout<<endl;
	   
	    
	}
	return 0;
}
