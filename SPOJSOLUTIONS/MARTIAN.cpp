// Problem: MARTIAN
// Submission ID: 25844165
// Language: 4648

#include<bits/stdc++.h>
using namespace std;
int main()
{ int n,m;
 cin>>n>>m;
  while(n!=0&&m!=0){
 vector<vector<int>>l(n,vector<int>(m,0)),u(n,vector<int>(m,0)),a(n,vector<int>(m,0));
   for(int i=0;i<n;i++)
      for(int j=0;j<m;j++)
      { int temp;
        cin>>temp;
        if(j==0)
        l[i][j]=temp;
        else
        l[i][j]=l[i][j-1]+temp;
      }
   for(int i=0;i<n;i++)
      for(int j=0;j<m;j++)
      { int temp;
        cin>>temp;
        if(i==0)
        u[i][j]=temp;
        else
        u[i][j]=u[i-1][j]+temp;
      }
   for(int i=0;i<n;i++)
      for(int j=0;j<m;j++)
      {
       if(i==0&&j==0)
       {a[i][j]=max(l[i][j],u[i][j]); }
       else if(i==0)
       {
        a[i][j]=max(l[i][j],u[i][j]+a[i][j-1]);
       }
       else if(j==0)
       {
        a[i][j]=max(l[i][j]+a[i-1][j],u[i][j]);
       }
       else
       a[i][j]=max(l[i][j]+a[i-1][j],u[i][j]+a[i][j-1]);

      }
   cout<<a[n-1][m-1]<<endl;
   cin>>n>>m;
  }
return 0;}
