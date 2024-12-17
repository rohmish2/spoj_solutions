// Problem: WPC4F
// Submission ID: 25872651
// Language: 4508

#include<bits/stdc++.h>
using namespace std;
int main()
{ int t;
  cin>>t;
  while(t--)
  { int n;
    cin>>n;
    vector<vector<int>>a(n,vector<int>(3,0)),b(n,vector<int>(3,0));
    for(int i=0;i<n;i++)
        cin>>a[i][0]>>a[i][1]>>a[i][2];
    b[0][0]=a[0][0];
    b[0][1]=a[0][1];
    b[0][2]=a[0][2];
   for(int i=1;i<n;i++)
   { b[i][0]=a[i][0]+min(b[i-1][1],b[i-1][2]);
     b[i][1]=a[i][1]+min(b[i-1][0],b[i-1][2]);
     b[i][2]=a[i][2]+min(b[i-1][0],b[i-1][1]);
  }
  cout<<min(b[n-1][0],min(b[n-1][1],b[n-1][2]))<<endl;
  }
return 0;}
