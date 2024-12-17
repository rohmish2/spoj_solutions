// Problem: FACT0
// Submission ID: 25802537
// Language: 4736

#include<bits/stdc++.h>
using namespace std;
void fact(long long int n)
{long long int c=0;
    if(n%2==0)
    { printf("2^");

      while(n%2==0)
      {
          c++;
          n/=2;
      }
      printf("%lld ",c);
    }
for(long long int i=3;i*i<=n;i+=2)
{
    if(n%i==0)
    { printf("%lld^",i);
      c=0;
      while(n%i==0)
      {
          c++;
          n/=i;
      }
      printf("%lld ",c);
}}
if(n!=1)
    printf("%lld^1\n",n);
else
    printf("\n");

}
int main()
{
long long q;
scanf("%lld",&q);

while(q!=0)
    {

fact(q);

scanf("%lld",&q);
    }
}
