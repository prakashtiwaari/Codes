

#include<bits/stdc++.h>
using namespace std;
int main()
{

   map<string,int>freq;
    int n;
    cin>>n;
    while(n--)
    {
        string str;
        cin>>str;
        freq[str]++;
        
    }
   map<string, int>:: iterator itr; 
    for(itr=freq.begin();itr!=freq.end();itr++)
    {
        cout<<itr->first<<" "<< itr->second<<endl;
    }
    
    
    
    return 0;
}
