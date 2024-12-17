// Problem: WACHOVIA
// Submission ID: 25642592
// Language: 4532

#include <bits/stdc++.h>
#define scan(n) scanf("%d",&n)
using namespace std;
int ans[51][1001];
int obj[51][2];
int main()
{
   int t;
  scan(t);
   while(t--)
   { int n,w;

    scan(w);
    scan(n);
    for(int i=0;i<=w;i++)
        ans[0][i]=0;
    for(int i=0;i<n;i++)
       {scan(obj[i][0]);
       scan(obj[i][1]);}
         //cin>>obj[i][0]>>obj[i][1];
    for(int i=1;i<=n;i++)
       for(int j=0;j<=w;j++)
        { int b=0;
          if(j>=obj[i-1][0])
           b=obj[i-1][1]+ans[i-1][j-obj[i-1][0]];
         ans[i][j]=max(ans[i-1][j],b);
        }

   printf("Hey stupid robber, you can get %d.\n",ans[n][w]);
   }
    return 0;
}
