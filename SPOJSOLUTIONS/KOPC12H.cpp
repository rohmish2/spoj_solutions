// Problem: KOPC12H
// Submission ID: 25911731
// Language: 4780

#include<bits/stdc++.h>
using namespace std;
long int dp[10][2][81][81];
string str;
long dig(int pos,int t,int even,int odd)
{ if(pos==str.size())
  { if(even>odd)
    return 1;
    return 0;
  }
  if(dp[pos][t][even][odd]!=-1)
        return dp[pos][t][even][odd];
  long ans=0;
  if(t==1)
  {    for(int i=0;i<str[pos]-'0';i++)
      { if(i%2==0)
       ans+=dig(pos+1,0,even+i,odd);
       else
       ans+=dig(pos+1,0,even,odd+i);
      }
      if((str[pos]-'0')%2==0)
       ans+=dig(pos+1,1,even+(str[pos]-'0'),odd);
      else
       ans+=dig(pos+1,1,even,odd+(str[pos]-'0'));
  }
  else
  {
      for(int i=0;i<=9;i++)
      { if(i%2==0)
       ans+=dig(pos+1,0,even+i,odd);
       else
       ans+=dig(pos+1,0,even,odd+i);
      }
  }
return dp[pos][t][even][odd]=ans;
}
int main()
{ int t;
  cin>>t;
  //scanf("%d",&t);
  while(t--)
  { int q1,q2;
    cin>>q1>>q2;
    if(q1>1)
    q1--;
   int ans=0;
   string a,b;
   a=to_string(q2);
   b=to_string(q1);
   memset(dp,-1,sizeof dp);

   str=a;
   ans+=dig(0,1,0,0);
   memset(dp,-1,sizeof dp);

   str=b;
   ans-=dig(0,1,0,0);
  cout<<ans<<endl;
  }
return 0;}
