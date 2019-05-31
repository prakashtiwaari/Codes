#include<bits/stdc++.h>
using namespace std;
  vector<string> hashtable[100000];
  int tablesize=100000;
  int hashFunction(long int roll)
  {
      int res=roll%tablesize;
      return res;
  }
void insert(long int roll,string name)
{
    int index=hashFunction(roll);
    hashtable[index].push_back(name);
    
}

int main()
{
   
    int n;
    long int roll,ROLL;
    string name;
    int q;
    cin>>n;
  
    while(n)
    {
        cin>>roll>>name;
        insert(roll,name);
        
        n--;
    }
    cin>>q;
    while(q)
    {
       cin>>ROLL;
       int index=hashFunction(ROLL);
       cout<<hashtable[index][0]<<endl;
       
        
        q--;
    }
    
    return 0;
}
