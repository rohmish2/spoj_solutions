// Problem: MISERMAN
// Submission ID: 25517394
// Language: 4756

#include<bits/stdc++.h>
using namespace std;
int main()
{ int n,m;
 cin>>n>>m;
vector<vector<int>> input(n,vector<int>(m,0)),sol(n,vector<int>(m,0));
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
          cin>>input[i][j];

    int ans=INT_MAX;
    //cout<<ans;
    for(int i=n-1;i>=0;i--)
        for(int j=0;j<m;j++)
          { long x,y,z;
            if(i==n-1)
                sol[i][j]=input[i][j];
            else
            { j>0?x=sol[i+1][j-1]:x=INT_MAX;
              j<n-1?y=sol[i+1][j+1]:y=INT_MAX;
              z=sol[i+1][j];
              sol[i][j]=input[i][j]+min(x,min(y,z));
              if(i==0)
                ans=min(ans,sol[i][j]);

            }
          }


    cout<<ans;
return 0;}
