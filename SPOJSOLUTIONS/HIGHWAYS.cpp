// Problem: HIGHWAYS
// Submission ID: 25612613
// Language: 8736

#include<bits/stdc++.h>
#define maxq 1000000000
using namespace std;
int mini(vector<int>&d,vector<int>&v)
{ int di=maxq,in=-1;
    for(int i=0;i<d.size();i++)
    {
      if(d[i]<=di&&v[i]==0)
        {in=i;
        di=d[i];}
    }
return in;}
int main()
{   int t;
    cin>>t;
    while(t--)
    { int a,q,s,di;
      cin>>a>>q>>s>>di;
      vector<vector<pair<int,int>>>adj(a);
      vector<int>d(a,maxq),v(a,0);
      while(q--)
      { int s1,s2,a1;
        cin>>s1>>s2>>a1;
        adj[s1-1].push_back(make_pair(s2-1,a1));
        adj[s2-1].push_back(make_pair(s1-1,a1));
      }

      d[s-1]=0;


      for(1;1;)
       {
        int sh=mini(d,v);
                if(sh==-1||d[sh]==maxq||sh==di-1)
       break;
       v[sh]=1;

       for(auto j:adj[sh])
         { if(v[j.first]==0)
              d[j.first]=min(d[j.first],d[sh]+j.second);
         }

           //if(d[di-1]!=maxq)
           // break;

       }
   d[di-1]<maxq?cout<<d[di-1]:cout<<"NONE";
  cout<<endl;
    }

return 0;}
