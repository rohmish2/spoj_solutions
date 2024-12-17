// Problem: PR003004
// Submission ID: 25912898
// Language: 4248

#include<bits/stdc++.h>
using namespace std;
long long dp[16][2][139];
string k;
 long long fun(int pos,int t,int sum)
{ if(pos==k.size())
    return sum;
  if(dp[pos][t][sum]!=-1)
        return dp[pos][t][sum];
   long long ans=0;
  if(t==1)
  {    for(int i=0;i<k[pos]-'0';i++)
      { ans+=  fun(pos+1,0,sum+i);    }

      ans+=fun(pos+1,1,sum+k[pos]-'0');
  }
  else
  {
      for(int i=0;i<=9;i++)
      { ans+=fun(pos+1,0,sum+i);
      }
  }


return dp[pos][t][sum]=ans;
}
int main()
{
    int t;
    scanf("%d",&t);

long a,b;
  
  while(t--)
    { scanf("%ld%ld",&a,&b);
        string a1=to_string(b);
      if(a!=0)
        a--;
      k=a1;  
      memset(dp,-1,sizeof(dp));  
      long long ans=0;
    ans+=fun(0,1,0);
    
      k=to_string(a);  
      memset(dp,-1,sizeof(dp));  
      ans-=fun(0,1,0);
      printf("%lld\n",ans);
     //scanf("%ld%ld",&a,&b);
    }
return 0;}
