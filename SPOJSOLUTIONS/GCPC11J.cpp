// Problem: GCPC11J
// Submission ID: 25879692
// Language: 10356

#include<bits/stdc++.h>
using namespace std;
int dis,ver;
int main()
{ int t;
  cin>>t;
  while(t--)
  { int n;
    cin>>n;
    vector<vector<int>>adj(n);
    for(int i=0;i<n-1;i++)
    { int q,w;
      cin>>q>>w;
      adj[q].push_back(w);
      adj[w].push_back(q);
    }
   vector<int>v(n,0);

   void bfs(int cur,vector<vector<int>>&adj,vector<int>&v);
   bfs(1,adj,v);
   fill(v.begin(),v.end(),0);
   bfs(ver,adj,v);
   cout<<(dis+1)/2<<endl;
  }

return 0;}
void bfs(int cur,vector<vector<int>>&adj,vector<int>&v)
{ queue<pair<int,int>>q;
  q.push({cur,0});
  dis=0;
  v[cur]=1;
  while(!q.empty())
  {
      for(auto i:adj[q.front().first])
        { if(v[i]==0)
            {
             q.push({i,q.front().second+1});
            if(q.front().second+1>dis)
            {
                dis=q.front().second+1;
                ver=i;
            }
                v[i]=1;
            }
        }
    q.pop();
  }

}
