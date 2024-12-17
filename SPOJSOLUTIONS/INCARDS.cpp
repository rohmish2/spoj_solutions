// Problem: INCARDS
// Submission ID: 26077871
// Language: 18944

#include<bits/stdc++.h>
using namespace std;

struct comp{

bool operator()(pair<int,int> q1,pair<int,int> q2)
{return q1.second>q2.second;}
};
int main()
{ int t;
  scanf("%d",&t);
  while(t--)
  { int n,r;
     scanf("%d%d",&n,&r);
     vector<pair<int,int>>a[n+1],rev[n+1];
     while(r--)
     {int t1,t2,t3;
     scanf("%d%d%d",&t1,&t2,&t3);
     a[t1].push_back({t2,t3});
     rev[t2].push_back({t1,t3});
     }
    priority_queue<pair<int,int>,vector<pair<int,int>>,comp>p;
    p.push({1,0});
    vector<int>v(n+1,-1);
    int ans=0;
    while(!p.empty())
    { pair<int,int>tgt=p.top();

      p.pop();
      if(v[tgt.first]!=-1)
         continue;
      v[tgt.first]=tgt.second;
      ans+=tgt.second;
      for(auto k:a[tgt.first])
         {  if(v[k.first]==-1)
               p.push({k.first,tgt.second+k.second});
             }

    }
    fill(v.begin(),v.end(),-1);
    p.push({1,0});
    while(!p.empty())
    { pair<int,int>tgt=p.top();
       //cout<<tgt.first<<"  "<<tgt.second<<endl;
      p.pop();
      if(v[tgt.first]!=-1)
         continue;
      v[tgt.first]=tgt.second;
      ans+=tgt.second;
      for(auto k:rev[tgt.first])
         {  if(v[k.first]==-1)
               p.push({k.first,tgt.second+k.second});
             }

    }

    printf("%d\n",ans);
  }

return 0;}
