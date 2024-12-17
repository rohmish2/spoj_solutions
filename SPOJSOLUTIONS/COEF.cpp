// Problem: COEF
// Submission ID: 26059054
// Language: 4700

#include<bits/stdc++.h>
using namespace std;
#define LL long long int
int main()
{
 LL fact[]={1,1,2,6,24,120,720,5040,40320,362880,3628800,39916800,479001600};
 int n,k,x,i;
 while(scanf("%d",&n)!=EOF)
 {
  scanf("%d",&k);
  LL ans=fact[n];
  for(i=1;i<=k;i++)
  {
   scanf("%d",&x);
   ans/=fact[x];
  }
  printf("%lld\n",ans);
 }
}
 
//Â© 2020 GitHub, Inc.