// Problem: BAT3
// Submission ID: 26198841
// Language: 4712

#include<bits/stdc++.h>
using namespace std;
int main()
{ int t;
  scanf("%d",&t);
  while(t--)
  { int s,r;
    scanf("%d%d",&s,&r);
    vector<int>a(s),dp(s,0);
    dp[0]=1;
    for(int i=0;i<s;i++)
        scanf("%d",&a[i]);
    int ans=1;
    for(int i=1;i<s;i++)
      { int sol=0;
         for(int j=0;j<i;j++)
         { if(a[j]>a[i]||j==r)
                sol=max(sol,dp[j]);

         }
         dp[i]=sol+1;
         ans=max(ans,dp[i]);
      }


    printf("%d\n",ans);
  }

return 0;}
