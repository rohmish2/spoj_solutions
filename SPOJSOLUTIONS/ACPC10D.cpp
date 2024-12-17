// Problem: ACPC10D
// Submission ID: 25577438
// Language: 14280

#include<bits/stdc++.h>
#define MAX 1000000000000
using namespace std;
int main()
{
    for(int t=1;;t++)
    { long a;
     cin>>a;

     if(a==0)
        return 0;
     vector<vector<long long>>v(a,vector<long long >(3,0)),ans(a,vector<long long >(3,0));
     for(int i=0;i<a;i++)
      cin>>v[i][0]>>v[i][1]>>v[i][2];
     ans[a-1][1]=v[a-1][1];
     ans[a-1][0]=v[a-1][1]+v[a-1][0];
     ans[a-1][2]=MAX;
     for(int i=a-2;i>=0;i--)
      {
         for(int j=2;j>=0;j--)
         {

                if(j==2)
                 ans[i][j]=min(ans[i+1][j-1]+v[i][j],ans[i+1][j]+v[i][j]);
                else if(j==1)
                 ans[i][j]=min(min(v[i][j]+ans[i+1][j],v[i][j]+ans[i][j+1]),min(v[i][j]+ans[i+1][j+1],v[i][j]+ans[i+1][j-1]));
                 else
                 ans[i][j]=min(v[i][j]+ans[i][j+1],min(v[i][j]+ans[i+1][j],v[i][j]+ans[i+1][j+1]));


    }
      }
    /*for(auto i:ans)
    {for(auto j:i)
           cout<<j<<" ";
       cout<<endl;
           }*/

    cout<<t<<". "<<ans[0][1]<<endl;
    }

return 0;}
