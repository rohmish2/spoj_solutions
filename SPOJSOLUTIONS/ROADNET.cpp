// Problem: ROADNET
// Submission ID: 25851412
// Language: 4664

#include<bits/stdc++.h>
using namespace std;
int main()
{ int t;
  cin>>t;
  while(t--)
  { int n;
    cin>>n;
    vector<vector<int>>ar(n,vector<int>(n));
    for(int i=0;i<n;i++)
       for(int j=0;j<n;j++)
          cin>>ar[i][j];

   for(int i=0;i<n;i++)
      {
        for(int j=i+1;j<n;j++)
           { int key=0;
             for(int k=0;k<n;k++)
              { if(k!=i&&k!=j)
                   {
                     if(ar[i][k]+ar[k][j]==ar[i][j])
                       {key=1;
                       break;}
                   }

              }
           if(key==0)
                cout<<i+1<<" "<<j+1<<endl;
           }
      }

  cout<<endl;}

return 0;}
