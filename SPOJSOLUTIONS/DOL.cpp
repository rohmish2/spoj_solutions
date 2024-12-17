// Problem: DOL
// Submission ID: 26064069
// Language: 4848

#include<bits/stdc++.h>
using namespace std;
int main()
{ int t;
  scanf("%d",&t);
  for(int i=1;i<=t;i++)
  {long long num;
   scanf("%lld",&num);
   while(num%2==0)
       { num=num/2;}
  printf("Case %d: %lld\n",i,num);

  }

return 0;}
