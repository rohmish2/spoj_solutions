// Problem: DIEHARD
// Submission ID: 25511104
// Language: 27216

#include <bits/stdc++.h>

using namespace std;
long long ans[1001][1001][3];
int fun(int a,int b,int c)
{ //cout<<a<<" "<<b<<endl;
    if(a<=0||b<=0)
   return 0;
   else if(ans[a][b][c]!=-1)
   return ans[a][b][c];
  else
  { if(c==0)
    { ans[a][b][c]=max(fun(a-20,b+5,2)+1,fun(a-5,b-10,1)+1);
        return  ans[a][b][c];}
    else if(c==1)
    { ans[a][b][c]=max(fun(a-20,b+5,2)+1,fun(a+3,b+2,0)+1);
        return  ans[a][b][c];}
    else
    {   ans[a][b][c]=max(fun(a+3,b+2,0)+1,fun(a-5,b-10,1)+1);
        return ans[a][b][c];

    }
}
}

int main()
{
    memset(ans,-1,sizeof(ans));
    int t;
    cin>>t;
    while(t--)
    { int a,b;

      cin>>a>>b;
      cout<<max(fun( a+3, b+2,0),max(fun(a-20,b+5,2),fun(a-5,b-10,1)))<<endl;
//      cout<<ans[a][b]<<endl;

    }
    return 0;
}
