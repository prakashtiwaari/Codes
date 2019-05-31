#include<bits/stdc++.h>
using namespace std;
 int main()
 {
     long int n,k;
     cin>>n>>k;
     vector<int> v;
     
     for(long int i=0;i<n;i++)
     {
         int tmp;
         cin>>tmp;
      v.push_back(tmp);
     }
     sort(v.begin(),v.end());
    long int i=0,j=v.size()-1;
    while(i<j)
    {
        if(v[i]+v[j]==k)
        {
            cout<<"YES"<<endl;
            return 0;
        }
        else if(v[i]+v[j]>k)
         {
            j--; 
         }
         else
         {
          i++;
         }
    }
    cout<<"NO"<<endl;
     return 0;
 }

