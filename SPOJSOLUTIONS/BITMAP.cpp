// Problem: BITMAP
// Submission ID: 25498180
// Language: 4700

#include<bits/stdc++.h>
using namespace std;
int main()
{ int t;
  cin>>t;
  while(t--)
  { //vector<vector<int>>a;
    vector<pair<int,int>>w;
      long r,c;
      cin>>r>>c;
   vector<vector<char>>a(r);
  for(int i=0;i<r;i++)
    for(int j=0;j<c;j++)
    { char t1;
      cin>>t1;
      a[i].push_back(t1);
      if(t1=='1')
      {pair<int,int>q;
      q=make_pair(i,j);
      w.push_back(q);}
    }
   vector<vector<int>>an(r,vector<int>(c,0));
   for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
      { if(a[i][j]=='0')
          {
           int ans=99999;
           for(auto k:w)
           {
               ans=min(ans,abs(i-k.first)+abs(j-k.second));
           }
           an[i][j]=ans;
          }
      }
   for(int i=0;i<r;i++)
        {for(int j=0;j<c;j++)
            cout<<an[i][j]<<" ";
             cout<<endl;}

  cout<<endl;
  }

return 0;}
