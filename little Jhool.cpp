#include<iostream>
using namespace std;
int main()
{
    int tc,m,x,y;
    int bigno=0;
    long long int n;
    cin>>tc;
    while(tc)
    {
        bigno=0;
        cin>>n>>m;
        for(int i=0;i<m;i++)
        {
            cin>>x>>y;
            if(x>y && x>n)
            {
                if(x-y>n)
                {
                   bigno=1;
                }
            }
            else if(x==y)
            {
                bigno=1;
            }
            
        }
        
        
        
        
        
        
       if(bigno==1)
       cout<<"NO"<<endl;
       else
       cout<<"YES"<<endl;
        tc--;
    }
    
    
    
    
    return 0;
}
