// Problem: OAE
// Submission ID: 26157845
// Language: 11652

#include <bits/stdc++.h>
#define mod 314159
using namespace std;
int odd[1000001],e[1000001];
int main()
{ e[1]=9;
  odd[1]=1;
   for(int i=2;i<=1000000;i++)
      {e[i]=(9*e[i-1]+odd[i-1])%mod;
      odd[i]=(9*odd[i-1]+e[i-1])%mod;}
   int t;
   scanf("%d",&t);
   while(t--)
   { int n;
     scanf("%d",&n);
     printf("%d\n",e[n]);

   }
    return 0;
}
