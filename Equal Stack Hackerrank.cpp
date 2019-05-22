#include<iostream>
#include<vector>
#include<algorithm>
#include<stack>
 using namespace std;

 int main()
 {
  int n1,n2,n3;
  stack <int> s1,s2,s3;
  int sum1=0;
  int sum2=0;
  int sum3=0;
  vector <int>v1,v2,v3;
  int i,j;
  cin>>n1;
  cin>>n2;
  cin>>n3;
  i=0;
      for(j=0;j<n1;j++)
      {
          int tmp;
          cin>>tmp;
        v1.push_back(tmp);
        sum1+=tmp;
      }
      
      for(j=0;j<n2;j++)
      {
         int tmp;
          cin>>tmp;
        v2.push_back(tmp);
        sum2+=tmp;

      }
      for(j=0;j<n3;j++)
      {
         int tmp;
          cin>>tmp;
       v3.push_back(tmp);
        sum3+=tmp;
      }
       for(j=n1-1;j>=0;j--)
       {
          s1.push(v1.at(j));
       }
       for(j=n2-1;j>=0;j--)
       {
          s2.push(v2.at(j));
       }
       for(j=n3-1;j>=0;j--)
       {
          s3.push(v3.at(j));
       }


while(true)
{
    if((sum1==sum2)&&(sum1==sum3)&&(sum2==sum3))
    {
        break;
    }
    if(sum1>=sum2 && sum1>=sum3)
    {
     int val=s1.top();
     sum1-=val;
     s1.pop();
    }
    else if(sum2>=sum3 && sum2>=sum1)
    {
      int val=s2.top();
     sum2-=val;
     s2.pop();
    }
    else if(sum3>=sum1 && sum3>=sum2)
    {
       int val=s3.top();
     sum3-=val;
     s3.pop();
    }


}
cout<<sum1<<endl;



 }

