// Problem: EDIST
// Submission ID: 25475353
// Language: 19176

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    { string a,b;
      cin>>a>>b;
      vector<vector<int>>r(a.size()+1,vector<int>(b.size()+1,0));
     for(int i=0;i<=a.size();i++)
        for(int j=0;j<=b.size();j++)
        { if(i==0||j==0)
            r[i][j]=max(i,j);
          else
          { if(a[i-1]==b[j-1])
              r[i][j]=r[i-1][j-1];
            else
               r[i][j]=min(r[i][j-1]+1,min(r[i-1][j-1]+1,(r[i-1][j]+1)));
          }

        }
    cout<<r[a.size()][b.size()]<<endl;
    }
    return 0;
}
