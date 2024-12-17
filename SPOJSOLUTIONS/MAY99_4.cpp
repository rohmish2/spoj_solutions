// Problem: MAY99_4
// Submission ID: 26163659
// Language: 4840

#include <bits/stdc++.h>
#define mod 10000007
using namespace std;
long long tmp[501][501];
long long ncr(int a,int b)
{ if(a<0||b<0)
    return 0;
  if(b==0||a==b)
    return 1;
  if(tmp[a][b]!=0)
    return tmp[a][b];
  return tmp[a][b]=( ncr(a-1,b-1)%mod+ncr(a-1,b)%mod)%mod;
}
int main()
{
    int n,r;
    while(scanf("%d%d",&n,&r)!=EOF)
    {long long ans;
        if(n<r)
    printf("-1\n");
    else if(n==r)
    printf("1\n");
    else
    {ans=ncr(n-1,r-1)%mod;
        printf("%lld\n",ans);}
    }
    return 0;
}
