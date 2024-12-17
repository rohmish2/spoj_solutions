// Problem: TRIKA
// Submission ID: 25834388
// Language: 4784

#include<bits/stdc++.h>
using namespace std;
int main()
{ int n,m,x,y;
  cin>>n>>m>>x>>y;
  vector<vector<int>>a(n,vector<int>(m)),b(n,vector<int>(m,200000));
  for(int i=0;i<n;i++)
    for(int j=0;j<m;j++)
       cin>>a[i][j];
  x--;
  y--;
  for(int i=n-1;i>=0;i--)
    for(int j=m-1;j>=0;j--)
      { if(i==n-1&&j==m-1)
        b[i][j]=a[i][j];

        if(i>0)
        b[i-1][j]=min(b[i-1][j],a[i-1][j]+b[i][j]);
        if(j>0)
        b[i][j-1]=min(b[i][j-1],a[i][j-1]+b[i][j]);
      }


  if(a[x][y]-b[x][y]+a[x][y]>=0)
        cout<<"Y"<<" "<<a[x][y]-b[x][y]+a[x][y];
  else
        cout<<"N";
  return 0;}
