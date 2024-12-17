// Problem: CHICAGO
// Submission ID: 25893382
// Language: 4396

#include<bits/stdc++.h>
using namespace std;
int main()
{ int n,m;
  cin>>n;
  while(n!=0)
  {  int m;
      cin>>m;
      vector<vector<double>>a(n,vector<double>(n,0.0));
      while(m--)
      { int p,b;
        double c,k=100;

        cin>>p>>b>>c;
        a[b-1][p-1]=c/k;
        a[p-1][b-1]=c/k;
      }
  for(int i=0;i<n;i++)
    for(int j=0;j<n;j++)
       for(int k=0;k<n;k++)
        {
          if(k!=i&&k!=j&&i!=j)
          {
              a[j][k]=max(a[j][k],a[j][i]*a[i][k]);
          }
        }
  printf("%.6lf percent\n",a[0][n-1]*100.0);
  cin>>n;
  }
return 0;}
