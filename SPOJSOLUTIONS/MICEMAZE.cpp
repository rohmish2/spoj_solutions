// Problem: MICEMAZE
// Submission ID: 25613168
// Language: 4816

#include<bits/stdc++.h>
using namespace std;
long fun(vector<long>d,vector<long>c)
{ long m=1000000,in=-1;
    for(int i=0;i<d.size();i++)
    { if(d[i]<=m&&c[i]==0)
        { in=i;
          m=d[i];
        }

    }
return in;
}
int main()
{ long n,e,t,q;
  cin>>n>>e>>t>>q;
  e--;
  vector<vector<pair<long,long>>>adj(n);
  vector<long>v(n,0),d(n,1000000);
  while(q--)
   { long s,d,c;
     cin>>s>>d>>c;
     adj[d-1].push_back(make_pair(s-1,c));
   }
  d[e]=0;
  while(1)
  { long sh=fun(d,v);
    if(sh==-1||d[sh]==1000000)
        break;
    v[sh]=1;
    for(auto j:adj[sh])
       {
         d[j.first]=min(d[j.first],d[sh]+j.second);
       }
  }
  long ans=0;
  for(auto k:d)
  { if(k<=t)
      ans++;
  }
  cout<<ans;
  return 0;}
