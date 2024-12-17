// Problem: PYRA
// Submission ID: 26163073
// Language: 4668

#include<bits/stdc++.h>
using namespace std;
//long ans;
 void dfs(int cur,vector<int>&v,vector<vector<int>>&a,vector<int>&vol)
 { v[cur]=1;
   int cnt=0;
   int dracaris=0;
    for(auto i:a[cur])
    { if(v[i]==0)
        { cnt++;
          dfs(i,v,a,vol);
          dracaris+=vol[i];
        }
    }

  vol[cur]=dracaris+cnt+1;

 }
int main()
{ int t;
  scanf("%d",&t);
  while(t--)
  { int n;
    scanf("%d",&n);
    vector<vector<int>>a(n);
    for(int i=1;i<n;i++)
        {int t1,t2;
        scanf("%d%d",&t1,&t2);
        a[t1].push_back(t2);
        a[t2].push_back(t1);}
    vector<int>v(n,0),vol(n,0);
    dfs(0,v,a,vol);
   long ans=0;
   for(auto i:vol)
    ans+=i;//<<endl;
   printf("%ld\n",ans);


  }

return 0;}
