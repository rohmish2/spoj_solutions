// Problem: RPLB
// Submission ID: 25875221
// Language: 10800

#include<bits/stdc++.h>
using namespace std;
int main()
{ long long t;
  cin>>t;
  for(long long tt=1;tt<=t;tt++)
 { long long n,w;
   cin>>n>>w;
   vector<vector<long long>>a(n+1,vector<long long>(w+1,0));
   vector<long long>ww(n+1);
   for(long long i=1;i<=n;i++)
    cin>>ww[i];
   for(long long i=1;i<=n;i++)
   {
     for(long long j=1;j<=w;j++)
      { if(i>=2)
          {    
              if(ww[i]<=j)
              a[i][j]=max(a[i-2][j-ww[i]]+ww[i],a[i-1][j]);
              else
              a[i][j]=a[i-1][j];
          }
        else
          {
              if(ww[i]<=j)
               a[i][j]=max(ww[i],a[i-1][j]);

          }
      }

   }
    
   printf("Scenario #%lld: %lld\n",tt,a[n][w]);
     //cout<<a[n][w]<<endl;

  }
return 0;}
