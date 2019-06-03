#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    map<string,int> hash;
    set<string> s;
    cin>>n;
    while(n--)
    {
        string name;
        string game;
        cin>>name;
        cin>>game;
    
      if(s.find(name)==s.end())
      {
         s.insert(name);
         hash[game]++;
      }
    }
      int max=0;
      string res="";
   for(auto it=hash.begin();it!=hash.end();it++)
   {
       if(it->second>max)
       {
       max=it->second;
       res=it->first;
       }
       
   }
   cout<<res<<endl;
   cout<<hash["football"]<<endl;
        
        
        
        
    
    
    
    return 0;
}
