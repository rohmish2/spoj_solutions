// Problem: BEHAPPY
// Submission ID: 25997624
// Language: 4460

#include<bits/stdc++.h>
using namespace std;
int main()
{ int m,n;
  scanf("%d%d",&m,&n);
  while(m!=0)
  { vector<pair<int,int>>a(m);
    for(int i=0;i<m;i++)
        scanf("%d%d",&a[i].first,&a[i].second);
    vector<vector<int>>dp(m,vector<int>(n+1,0));
    for(int i=a[0].first;i<=a[0].second;i++)
    { if(i<n)
       { if(n-i>=0)
         dp[0][n-i]=1;}
    }
    for(int i=1;i<m;i++)
    {
        for(int k=0;k<=n;k++)
           for(int j=a[i].first;j<=a[i].second;j++)
               if(k+j<=n)
               dp[i][k]+=dp[i-1][k+j];

    }
    printf("%d\n",dp[m-1][0]);
    scanf("%d%d",&m,&n);
  }
return 0;}
