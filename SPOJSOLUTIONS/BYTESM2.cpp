// Problem: BYTESM2
// Submission ID: 25477341
// Language: 4684

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    { int r,c;
     cin>>r>>c;
     vector<vector<int>>ans(r,vector<int>(c,0)),v(r,vector<int>(c,0));
     for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
          {cin>>v[i][j];
           if(i==0)
            ans[i][j]=v[i][j];
           else
           {
            if(j>0&&j<c-1)
                ans[i][j]=v[i][j]+max(ans[i-1][j],max(ans[i-1][j-1],ans[i-1][j+1]));
            else if(j==c-1)
                ans[i][j]=v[i][j]+max(ans[i-1][j],ans[i-1][j-1]);
            else
                ans[i][j]=v[i][j]+max(ans[i-1][j],ans[i-1][j+1]);
           }
          }
          int answ=0;
          for(auto i:ans[r-1])
            answ=max(answ,i);
       cout<<answ<<endl;


    }
    return 0;
}
