#include<iostream>
#include<vector>
#include<stack>
using namespace std;
int main()
{
	int counter=1;
	stack <int> s;
    stack <int> s2;
    vector <int> v;
    int n,i,no=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        int record;
        cin>>record;
        v.push_back(record);
        
    }
    
    for(i=0;i<v.size();i++)
    {
    	if(v.at(i)==counter)
    	{
    		counter++;
		}
		else if(!s.empty() && s.top()==counter)
		{
			s.pop();
			counter++;
			i--;
		}
		else 
		{
			if(s.empty() || s.top()-v.at(i)>0)
			{
				 s.push(v.at(i));
			}
			else{
				no=1;
			}
		}
	}
	  if(no==1)
        cout<<"Sad"<<endl;
        else
        cout<<"Happy"<<endl;
	
	
	return 0;
	
}
