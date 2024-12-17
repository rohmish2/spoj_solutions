// Problem: PT07Z
// Submission ID: 25486880
// Language: 4824

#include<bits/stdc++.h>
using namespace std;
int main()
{
    long n;
    cin>>n;
    vector<vector<long>>adj(n+1);
    vector<long>v(n+1,0);
    vector<long>path(n+1,0);
    for(int i=1;i<n;i++)
    { int t1,t2;
      cin>>t1>>t2;
      adj[t1].push_back(t2);
      adj[t2].push_back(t1);
    }
    //long st=0;
    stack<long>st;
    st.push(1);
    v[1]=1;
    while(!st.empty())
    { long top=st.top();
      st.pop();
      //cout<<top;
     for(auto j:adj[top])
     { if(v[j]==0)
          {path[j]=max(path[j],path[top]+1);
           v[j]=1;
           st.push(j);
          }
     }
    }
    long ver=0;
    for(int i=1;i<=n;i++)
    {
      if(path[ver]<path[i])
       ver=i;
    }
    fill(v.begin(),v.end(),0);
    fill(path.begin(),path.end(),0);
    long ans=0;
    st.push(ver);
    v[ver]=1;
    while(!st.empty())
    { long top=st.top();
      //cout<<top<<endl;
      st.pop();
     for(auto j:adj[top])
     { if(v[j]==0)
          {path[j]=max(path[j],path[top]+1);
           ans=max(ans,path[j]);
           v[j]=1;
           st.push(j);
          }
     }
    }
    cout<<ans;
return 0;}
