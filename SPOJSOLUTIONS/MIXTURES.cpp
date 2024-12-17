// Problem: MIXTURES
// Submission ID: 25501696
// Language: 4676

#include<bits/stdc++.h>
using namespace std;
long dp[101][101];
long fun(int s,int e,vector<int>&v);
int sumation(int s,int e,vector<int>&v);
int main()
{ long s;
  while(scanf("%ld",&s)==1)
  {memset(dp,-1,sizeof(dp));
  vector<int>v(s);
  for(int i=0;i<s;i++)
  {cin>>v[i];}
  cout<<fun(0,s-1,v)<<endl;
  }

return 0;}
int sumation(int s,int e,vector<int>&v)
{
    int ans=0;
    for(int i=s;i<=e;i++)
        ans=(ans+v[i])%100;
return ans;}
long fun(int s,int e,vector<int>&v)
{
if(s>e)
return 0;
if(s==e)
return 0;
if(dp[s][e]!=-1)
return dp[s][e];
long ans=INT_MAX;
for(int k=s;k<e;k++)
ans=min(ans,(fun(s,k,v)+fun(k+1,e,v)+(sumation(s,k,v)*sumation(k+1,e,v))));
dp[s][e]=ans;
return ans;
}
