#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    map<pair<long int, long int>, long int> freq;
    pair <long int, long int> my_pair;

     

    long int x,y;
    cin>>n;
   // vector< vector<long int> >v[n][2];
    map<long int,long int> map;
    while(n--)
    {
        cin>>x;
        cin>>y;
        long int fst=x;
        long int scnd=y;
     my_pair = make_pair(x, y);
      freq[my_pair]++;
    }
    // map<pair<long int, long int>,long int>:: iterator it;
     
    for(auto it=freq.begin();it!=freq.end();it++)
    {
        cout<<it->first.first<<" "<<it->first.second<<" "<<it->second<<endl;
    }
    
    return 0;
}
