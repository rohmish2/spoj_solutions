// Problem: LCASQ
// Submission ID: 25926101
// Language: 4700

#include<bits/stdc++.h>
using namespace std;
void dfs(int node,vector<vector<int>>&a,vector<int>&par,vector<int>&level,vector<int>&up,int h,int clvl)
{  level[node]=clvl;
   if(clvl<h)
        up[node]=0;
           else if(!(clvl%h))
                up[node]=par[node];
               else
                 up[node]=up[par[node]];

  for(auto i:a[node])
   dfs(i,a,par,level,up,h+1,clvl+1);
}
int lca(int a,int b,vector<int>&par,vector<int>&level,vector<int>&up)
{
  while(up[a]!=up[b])
    level[a]>level[b]?(a=up[a]):(b=up[b]);

  while(a!=b)
      level[a]>level[b]?(a=par[a]):(b=par[b]);

return a;
}

int main()
{ /*int t;
  int cnt=1;
  scanf("%d",&t);
  while(t--)
  { */int n;
    scanf("%d",&n);
    vector<vector<int>>a(n);
    vector<int>par(n),level(n),up(n);
    for(int i=0;i<n;i++)
       { int c;
         scanf("%d",&c);
         while(c--)
          { int tp;
            scanf("%d",&tp);
            par[tp]=i;
           a[i].push_back(tp);
          }
        }
   int h=ceil(sqrt(n));
   dfs(0,a,par,level,up,h,0);
   int q;
    scanf("%d",&q);
   // printf("Case %d:\n",cnt++);
    while(q--)
    {   int z,x;
        scanf("%d%d",&z,&x);
        printf("%d\n",lca(z,x,par,level,up));
    }

  //}
return 0;}
