// Problem: BENEFACT
// Submission ID: 25801525
// Language: 9348

#include<bits/stdc++.h>
using namespace std;
int target,maxi;
void dfs(int in,vector<vector<int>>&adj,vector<vector<int>>&dist,vector<int>&v,int dis)
{ v[in]=1;
  if(maxi<dis)
  {maxi=dis;
  target=in;
  //return;
  }
  for(int i=0;i<adj[in].size();i++)
  {
    if(v[adj[in][i]]==0)
    {v[adj[in][i]]=1;
     dfs(adj[in][i],adj,dist,v,dis+dist[in][i]);
     v[adj[in][i]]=0;
    }
  }

}
int main()
{ int t;
  scanf("%d",&t);
  while(t--)
  { int s;
    maxi=0;
    target=0;
    scanf("%d",&s);
    vector<vector<int>>adj(s+1),dis(s+1);
    vector<int>v(s+1,0);
    for(int i=1;i<s;i++)
    { int t1,t2,t3;
      scanf("%d%d%d",&t1,&t2,&t3);
      adj[t2].push_back(t1);
      adj[t1].push_back(t2);
      dis[t2].push_back(t3);
      dis[t1].push_back(t3);
    }
  dfs(1,adj,dis,v,0);
  fill(v.begin(),v.end(),0);
 //printf("target=%d",target);
  dfs(target,adj,dis,v,0);
  printf("%d\n",maxi);

  }

return 0;}
