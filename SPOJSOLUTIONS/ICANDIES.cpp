// Problem: ICANDIES
// Submission ID: 26157657
// Language: 4656

#include<bits/stdc++.h>
using namespace std;
int fun(int n)
{ int s=0;
  while(n>1)
   {  if(n%3==0&&s>0)return n;
      n-=5;
      s+=5;

   }
   return -1;
}
int main()
{
    int t;
     scanf("%d",&t);
     for(int i=1;i<=t;i++)
     {    int n;
          scanf("%d",&n);
          printf("Case %d: %d\n", i, fun(n));
     }
return 0;}
