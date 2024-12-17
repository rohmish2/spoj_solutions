// Problem: ROHAAN
// Submission ID: 26198931
// Language: 4560

#include<bits/stdc++.h>
using namespace std;
int main()
{ int t;
  scanf("%d",&t);
  int cnt=1;
  while(t--)
  { int n;
    scanf("%d",&n);
    vector<vector<int>>a(n,vector<int>(n));
    for(int i=0;i<n;i++)
         for(int j=0;j<n;j++)
           scanf("%d",&a[i][j]);
    for(int k=0;k<n;k++)
         for(int i=0;i<n;i++)
           for(int j=0;j<n;j++)
              a[i][j]=min(a[i][j],a[i][k]+a[k][j]);
    int r;
    //cout<<"saax";
    scanf("%d",&r);
    int ans=0;
    while(r--)
    { int k1,k2;
      scanf("%d%d",&k1,&k2);
      ans+=a[k1-1][k2-1];
    }
  printf("Case #%d: %d\n",cnt++,ans);
  }

return 0;}
