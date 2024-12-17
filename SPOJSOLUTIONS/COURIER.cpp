// Problem: COURIER
// Submission ID: 26213819
// Language: 11572

#include<bits/stdc++.h>
using namespace std;
int dp[1000][2000];
struct tsk{
int  o,des,b;
};
int fun(int  vertex,int bitmask,vector<pair<int ,int >>&valbit,vector<vector<int >>&adj,int&h)
{ if(dp[vertex][bitmask]!=-1)
    return dp[vertex][bitmask];
  if(bitmask==0)
    return adj[vertex][h];

  int toret=INT_MAX;
  for(int i=0;i<valbit.size();i++)
  { int k=1<<i;
    if(bitmask&k)
         {
          bitmask-=k;
toret=min(toret,adj[vertex][valbit[i].first]+adj[valbit[i].first][valbit[i].second]+fun(valbit[i].second,bitmask,valbit,adj,h));
          bitmask+=k;
         }

  }
 return dp[vertex][bitmask]=toret;
}
int main()
{ int  t;
  scanf("%d",&t);
  while(t--)
  { int n,r,h;
    scanf("%d%d%d",&n,&r,&h);
    vector<vector<int>>adj(n+1,vector<int>(n+1,99999));
    memset(dp,-1,sizeof(dp));
    for(int i=0;i<r;i++)
    { int t1,t2,t3;
      scanf("%d%d%d",&t1,&t2,&t3);
       adj[t1][t2]=t3;
       adj[t2][t1]=t3;
    }
   for(int i=0;i<=n;i++)
    adj[i][i]=0;

   for(int k=1;k<=n;k++)
       for(int i=1;i<=n;i++)
         for(int j=1;j<=n;j++)
         {adj[i][j]=min(adj[i][j],adj[i][k]+adj[k][j]);}


  
   int tasks;
    scanf("%d",&tasks);;
   vector<pair<int,int>>valbit;
   for(int i=0;i<tasks;i++)
        {tsk q;
            scanf("%d%d%d",&q.o,&q.des,&q.b);
          for(int i=0;i<q.b;i++)
          valbit.push_back({q.o ,q.des});
        }

   int bitmask=(1<<valbit.size())-1;
   printf("%d\n",fun(h,bitmask,valbit,adj,h));
  }
  return 0;}
