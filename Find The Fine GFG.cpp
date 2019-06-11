#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	
	int t,n,d;

	cin>>t;
	while(t--)
	{
	    int money=0;
	    vector<int>cars;
	    vector<int>fine;
	    
	    cin>>n;
	    cin>>d;
	    for(int i=0;i<n;i++)
	    {
	        int tmp;
	        cin>>tmp;
	        cars.push_back(tmp);
	        
	    }
	      for(int i=0;i<n;i++)
	    {
	        int tmp;
	        cin>>tmp;
	        fine.push_back(tmp);
	        
	    }
	    if(d%2==0)
	    {
	    for(int i=0;i<n;i++)
	    {
	       if(cars[i]%2!=0)
	       {
	           money+=fine[i];
	       }
	    }
	    }
	    else{
	        
	        for(int i=0;i<n;i++)
	    {
	       if(cars[i]%2==0)
	       {
	           money+=fine[i];
	       }
	    }
	        
	    }
	    cout<<money<<endl;
	    
	}
	return 0;
}
