// Problem: DIVFACT
// Submission ID: 26006984
// Language: 4812

#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
int sieve[50001];
int main()
{ for(int i=2;i*i<=50000;i++)
    if(sieve[i]==0)
        for(int j=i*i;j<=50000;j+=i)
            sieve[j]=1;
 vector<int>prime;
 for(int i=2;i<=50000;i++)
        if(sieve[i]==0)
          prime.push_back(i);

 int t;
 scanf("%d",&t);
 while(t--)
 { int q;
   scanf("%d",&q);
   long ans=1;
   for(int i=0;prime[i]<=q;i++)
    { int l=0;

      for(int j=prime[i];j<=q;j*=prime[i])
      {
          l+=q/j;
      }

     ans=(ans*(l+1))%mod;

   }

  printf("%ld\n",ans);
 }

return 0;}
