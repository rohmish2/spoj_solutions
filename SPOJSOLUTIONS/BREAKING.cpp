// Problem: BREAKING
// Submission ID: 26124712
// Language: 81828

#include <bits/stdc++.h>

using namespace std;
long sieve[10000001];
void factor(long  a,set<int>&muth)
{    while(a!=1)
    {
      muth.insert(sieve[a]);
      a/=sieve[a];
    }
}
int main()
{
    for(int i=1;i<=10000000;i++)
    sieve[i]=i;
    for(int i=2;i*i<=10000000;i++)
    if(sieve[i]==i)
        { //sieve[i]=i;
         for(int j=i*i;j<=10000000;j+=i)
         {if(sieve[j]==j)
          sieve[j]=i;}
        }
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    { int n;
      scanf("%d",&n);
     printf("Case %d:",i);
     set<int>m;
     factor(n,m);
     for(auto i:m)
        printf(" %d",i);
     printf("\n");

    }

    return 0;
}
