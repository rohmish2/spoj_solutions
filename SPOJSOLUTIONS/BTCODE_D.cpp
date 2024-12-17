// Problem: BTCODE_D
// Submission ID: 26198673
// Language: 4688

#include<bits/stdc++.h>
using namespace std;
int main()
{ int t;
  scanf("%d",&t);
  while(t--)
  { int n,m;
    scanf("%d%d",&m,&n);
    vector<vector<long long int>>aij(m,vector<long long int>(n)),bij(m,vector<long long int>(n)),cij(m,vector<long long int>(n));
   for(int i=0;i<m;i++)
    for(int j=0;j<n;j++)
        scanf("%lld",&aij[i][j]);
   for(int i=0;i<m;i++)
    for(int j=0;j<n;j++)
        scanf("%lld",&bij[i][j]);

   for(int i=0;i<m;i++)
    for(int j=0;j<n;j++)
        scanf("%lld",&cij[i][j]);
     long long ans=0;
   for(int i=0;i<m;i++)
     {long long int sol=0;
      //int sl=0;
         for(int j=0;j<n;j++)
           {
               sol=max(sol,min(bij[i][j],aij[i][j])*cij[i][j]);



           }
     ans+=sol;
     //cout<<ans<<endl;
     }
   printf("%lld\n",ans);

  }


return 0;}
