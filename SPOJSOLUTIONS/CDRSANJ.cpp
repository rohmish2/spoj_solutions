// Problem: CDRSANJ
// Submission ID: 26152262
// Language: 5408

#include<bits/stdc++.h>
using namespace std;
long long int sieve[100001],sum[100001];
int main()
{sieve[0]=0;
 sieve[1]=1;
 sieve[2]=2;
for(int i=0;i<=100000;i++)
    sum[i]=100000;

 for(int i=2;i*2<=100000;i++)
  {
    
        for(int j=2;j<=i&&i*j<=100000;j++)
            { 
               
           if(j+i<sum[j*i])
                 {
                  sieve[j*i]=sieve[j]+sieve[i];
                  sum[j*i]=j+i;
                 }
            }


  }

      int q;
    scanf("%d",&q);
    printf("%lld",sieve[q]);

 return 0;}
