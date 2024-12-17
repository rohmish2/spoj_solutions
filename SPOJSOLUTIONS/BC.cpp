// Problem: BC
// Submission ID: 26019644
// Language: 4572

#include<bits/stdc++.h>
using namespace std;
int main()
{ int t;
  scanf("%d",&t);
  for(int i=1;i<=t;i++)
  {
     long long int a,b,c;
     scanf("%lld%lld%lld",&a,&b,&c);
     printf("Case #%d: %lld %lld\n",i,(a*b-1)+(a*b*(c-1)),(long long)(ceil(log2(a))+ceil(log2(b))+ceil(log2(c))));


  }

return 0;}
