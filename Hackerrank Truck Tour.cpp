#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n ,litre,dist;
    cin>>n;
    int capacity=0;
    int station=0;
for(int i=0;i<n;i++)
{
cin>>litre;
cin>>dist;
capacity=capacity+litre-dist;
if(capacity<0)
{
    capacity=0;
    station=i+1;


}
}
cout<<station<<endl;
    return 0;
}
