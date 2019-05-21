#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    int n;
    vector<int> v;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int tmp;
        cin>>tmp;
        v.push_back(tmp);
    }
    
sort(v.begin(),v.end());
for(int i=1;i<n;i++)
{
   for(int j=i-1;j>=0;j--){
       if(v[j]!=0 && v.at(j)<v.at(i))
       {
           v[j]=0;
           break;
       }
   }
}
int sum=0;
for(int i=0;i<n;i++)
{
    sum+=v[i];
}
cout<<sum<<endl;
    
    
    return 0;
}
