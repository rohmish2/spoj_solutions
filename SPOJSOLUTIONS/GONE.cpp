// Problem: GONE
// Submission ID: 25905536
// Language: 4792

#include<bits/stdc++.h>
using namespace std;
int dp[10][2][91];
int prime[91];
string a;
int fun(int pos,int t,int sum)
{ //cout<<pos<<" "<<sum<<endl;
    if(pos==a.size())
    { if(prime[sum]==0)
       return 1;
      else
        return 0;
    }
    int ans=0;
 if(dp[pos][t][sum]!=-1)
        return dp[pos][t][sum];  
if(t==1)
  { for(int i=0;i<(a[pos]-'0');i++)
      {  // cout<<pos<<"  "<<sum<<" "<<i<<"  "<<a[pos]-'0'<<endl;
          ans+=fun(pos+1,0,sum+i);
      }

      ans+=fun(pos+1,1,sum+(a[pos]-'0'));
  }
  else
  {
      for(int i=0;i<=9;i++)
      {ans+=fun(pos+1,0,sum+i);}
  }
return dp[pos][t][sum]=ans;
}
int main()
{   for(int i=2;i*i<=90;i++)
       if(prime[i]==0)
         for(int j=i*i;j<=90;j+=i)
           prime[j]=1;
    prime[0]=prime[1]=1;


    int t;
   scanf("%d",&t);
    
    while(t--)
    { int q,w;
   scanf("%d %d",&w,&q);     
 // cin>>w>>q;
      if(w!=0)
        w--;
      string as,b;
as=to_string(w);
      b=to_string(q);
      
      
      int ans=0;
      memset(dp,-1,sizeof(dp));
      a=as;
      ans-=fun(0,1,0);
      memset(dp,-1,sizeof(dp));
      a=b;
      ans+=fun(0,1,0);
   printf("%d\n",ans);    
  //cout<<ans<<endl;
    }

return 0;}
