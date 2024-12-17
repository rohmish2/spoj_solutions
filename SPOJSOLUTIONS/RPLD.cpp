// Problem: RPLD
// Submission ID: 26045817
// Language: 5212

#include<bits/stdc++.h>
using namespace std;
int main()
{ int t;
  scanf("%d",&t);
  int l=1;
  while(l<=t)
  { int n,m;
     scanf("%d%d",&n,&m);
     vector<pair<int,int>>a;
     for(int i=0;i<m;i++)
     { int t1,t2;
       scanf("%d%d",&t1,&t2);
       a.push_back({t1,t2});
     }
    sort(a.begin(),a.end(),[](pair<int,int>a1,pair<int,int>a2)
         { if(a1.first!=a2.first)
             return a1.first<a2.first;
             return a1.second<a2.second;
         });
    int k=0;

    for(int i=1;i<m;i++)
    { if(a[i]==a[i-1])
       {k=1;
    break;}
    }
    printf("Scenario #%d: ",l++);
    if(k==0)
    printf("possible\n");
    else
    printf("impossible\n");
  }
 return 0;}
