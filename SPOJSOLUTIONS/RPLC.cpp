// Problem: RPLC
// Submission ID: 25609441
// Language: 4564

#include<bits/stdc++.h>
using namespace std;
int main()
{  int t;
  cin>>t;
  for(int k=1;k<=t;k++)
  { long long n;
    cin>>n;
    vector<long long >v(n+1,0),ans(n+1,0);
    for(int i=0;i<n;i++)
        cin>>v[i];
    for(int i=n-1;i>=0;i--)
     {
       if(v[i]>=0)
       {   if(ans[i+1]>0)
           {ans[i]=ans[i+1]-v[i];
           ans[i]<0?ans[i]=0:ans[i]=ans[i];}

       }
       else
       {   if(ans[i+1]==0)
           ans[i]=(-1*v[i])+1;

           if(ans[i+1]>0)
           ans[i]+=ans[i+1]+(-1*v[i]);

       }

     }
     ans[0]==0?ans[0]=1:ans[0]=ans[0];
 printf("Scenario #%d: %lld\n",k,ans[0]);

  }

return 0;}
