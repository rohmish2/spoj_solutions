// Problem: QTREE2
// Submission ID: 25944696
// Language: 6400

#include<bits/stdc++.h>
using namespace std;
int ax[10010][21],lvl[10010],par[10010],cst[10010];
void dfs(vector<vector<int>>&a,vector<vector<int>>&cost,vector<int>&v,int node,int c)
{ v[node]=1;
  for(int i=0;i<a[node].size();i++)
      {
          if(v[a[node][i]]==0)
          {
              cst[a[node][i]]=c+cost[node][i];
              lvl[a[node][i]]=lvl[node]+1;
              par[a[node][i]]=node;
              dfs(a,cost,v,a[node][i],cst[a[node][i]]);
          }
      }
}
void preprocess(int n)
{

    for(int i=1;i<=n;i++)
    ax[i][0]=par[i];
  for(int j=1;(1<<j)<=n;j++)
     for(int i=1;i<=n;i++)
        if(ax[i][j-1]!=-1)
            ax[i][j]=ax[ax[i][j-1]][j-1];
}
int lca(int u,int v)
{ //cout<<"first"<<u<<" "<<v<<endl;
    if(lvl[u]<lvl[v])
  swap(u,v);
  int d=lvl[u]-lvl[v];

  for(int i=0;(d>>i)!=0;i++)
  if((d>>i)&1){u=ax[u][i];}
  if(u==v)
    return u;

  for(int i=19;i>=0;i--)
    if(ax[v][i]!=-1&&ax[u][i]!=-1&&ax[u][i]!=ax[v][i])
      {
      u=ax[u][i];
      v=ax[v][i];}
 return par[u];
}
int dist(int v,int u)
{return cst[v]+cst[u]-2*cst[lca(v,u)];}
int kth(int u,int v,int k)
{
 int l=lca(u,v);
 if(lvl[u]-lvl[l]+1>=k)
  { k--;
    int ans=u;
    for(int i=0;(k>>i)!=0;i++)
    if((k>>i)&1){ans=ax[ans][i];}
    return ans;
  }
 else
 {  int ll=lvl[u]-lvl[l]+1;
    int ak=lvl[v]-lvl[l]-(k-ll);
    int ans=v;
    for(int i=0;(ak>>i)!=0;i++)
    if((ak>>i)&(int)(1))
        {ans=ax[ans][i];}

    return ans;

 }
}
int main()
{ int t;
    scanf("%d",&t);
  while(t--)
  { int n;
    scanf("%d",&n);
    vector<vector<int>>adj(n+3),cost(n+3);
    //memset(a,0,sizeof(a));
    for(int i=0;i<=n;i++)
        for(int j=0;j<=20;j++)
            ax[i][j]=-1;
    memset(lvl,0,sizeof(lvl));
    memset(par,0,sizeof(par));
    for(int i=1;i<n;i++)
    { int t1,t2,t3;
      scanf("%d%d%d",&t1,&t2,&t3);
      adj[t1].push_back(t2);
      cost[t1].push_back(t3);
      adj[t2].push_back(t1);
      cost[t2].push_back(t3);
    }
     vector<int>v(n+1,0);
    par[1]=1;
    dfs(adj,cost,v,1,0);
    preprocess(n);
    //cout<<"dddsd";
      while(1)
      {char s[20];
       scanf("%s",s);
       if(s[1]=='O')
            break;
       else if(s[0]=='K')
       {
           int q,w,e;
           scanf("%d%d%d",&q,&w,&e);
           printf("%d\n",kth(q,w,e));

        }
       else
       {
           int q,w;
           scanf("%d%d",&q,&w);
           //COUT
           printf("%d\n",dist(q,w));
       }

      }

     }
return 0;}
