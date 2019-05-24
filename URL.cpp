#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
  getline(cin,str);
  string str1="username=";
  string str2="pwd=";
  string str3="profile=";
  string str4="role=";
  string str5="key=";
  
   size_t found1 = str.find(str1); 
    if (found1 != string::npos) 
    {
    	int i=found1;
    	while(i!=str.length() &&str[i]!='&')
    	{
    		if(str[i]=='=')
    		{
    			cout<<": ";
    			i++;
			}
    		cout<<str[i];
    		i++;
		}
		cout<<endl;
	}
	 size_t found2 = str.find(str2); 
    if (found2 != string::npos) 
    {
    	int i=found2;
    	while(i!=str.length() &&str[i]!='&')
    	{
    			if(str[i]=='=')
    		{
    			cout<<": ";
    			i++;
			}
    		cout<<str[i];
    		i++;
		}
		cout<<endl;
	}
	
	  size_t found3 = str.find(str3); 
    if (found3 != string::npos) 
    {
    	int i=found3;
    	while(i!=str.length() &&str[i]!='&')
    	{
    			if(str[i]=='=')
    		{
    			cout<<": ";
    			i++;
			}
    		cout<<str[i];
    		i++;
		}
		cout<<endl;
	}
	 size_t found4 = str.find(str4); 
    if (found4 != string::npos) 
    {
    	int i=found4;
    	while(i!=str.length() &&str[i]!='&' )
    	{
    			if(str[i]=='=')
    		{
    			cout<<": ";
    			i++;
			}
    		cout<<str[i];
    		i++;
		}
		cout<<endl;
	}
	size_t found5 = str.find(str5); 
    if (found5 != string::npos) 
    {
    	int i=found5;
    	while(i!=str.length() && str[i]!='&')
    	{
    			if(str[i]=='=')
    		{
    			cout<<": ";
    			i++;
			}
    		cout<<str[i];
    		i++;
		}
		cout<<endl;
	}

    
    return 0;
}
