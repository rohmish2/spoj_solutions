// Problem: SCUBADIV
// Submission ID: 25639302
// Language: 25424

#include<bits/stdc++.h>
using namespace std;
long long  sol[1010][31][89];
int main()
{ int t;
  cin>>t;
  while(t--)
    { //memset(sol,9999,sizeof(sol));
      for(int i=0;i<1010;i++)
        for(int j=0;j<31;j++)
          for(int k=0;k<89;k++)
             {sol[i][j][k]=INT_MAX;
              if(j==0&&k==0)
              sol[0][0][0]=0;         
             }

      //sol[0][0][0]=1;
      int o,n;
      cin>>o>>n;
      int q;
      cin>>q;
      vector<vector<long long>>a(q,vector<long long>(3));
      for(int i=0;i<q;i++)
      {long  long o1,o2,o3;
        cin>>a[i][0]>>a[i][1]>>a[i][2];

      }

    for(int i=1;i<=q;i++)
    {
      for(int j=0;j<=o;j++)//minimum value of oxy
         {
           for(int k=0;k<=n;k++)//minimum value of nitrogen
              {
             long  long m1=INT_MAX,m2=INT_MAX,m3=INT_MAX;
               if(a[i-1][0]>=j&&a[i-1][1]<=k)
                 m1=a[i-1][2]+sol[i-1][0][k-a[i-1][1]];

               if(a[i-1][0]<=j&&a[i-1][1]>=k)
                 m2=a[i-1][2]+sol[i-1][j-a[i-1][0]][0];

               if(a[i-1][0]<=j&&a[i-1][1]<=k)
                 m3=a[i-1][2]+sol[i-1][j-a[i-1][0]][k-a[i-1][1]];
               //cout<<sol[i-1][j][k]<<" " <<m1<<"  "<<m2<<"  "<<m3<<endl;
               sol[i][j][k]=min(min(sol[i-1][j][k],m1),min(m2,m3));

              }

         }
    }
    cout<<sol[q][o][n]<<endl;
   }
return 0;}
