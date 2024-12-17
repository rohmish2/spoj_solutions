// Problem: KFSTB
// Submission ID: 26125531
// Language: 5164

#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
int memo[10001];
int fun(vector<vector<int>>&adj,vector<int>&v,int cur,int &e)
{  if(memo[cur]!=-1)
       {return memo[cur];}
    if(cur==e)
        return 1;
    int ans=0;
    for(auto i:adj[cur])
    {
      if(v[i]==0)
      { v[i]=1;
          ans=(ans+fun(adj,v,i,e))%mod;
        v[i]=0;
      }
    }
  return memo[cur]=ans;
}
int main()
{ int t;
  scanf("%d",&t);
  while(t--)
  {  int c,d,s,e;
     memset(memo,-1,sizeof(memo));
     scanf("%d%d%d%d",&c,&d,&s,&e);
     vector<vector<int>>a(c+1);
     for(int i=0;i<d;i++)
     { int t1,t2;
       scanf("%d%d",&t1,&t2);
       a[t1].push_back(t2);
     }
  vector<int>v(c+1,0);
  printf("%d\n",fun(a,v,s,e));

  }
return 0;}
