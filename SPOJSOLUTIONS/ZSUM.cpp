// Problem: ZSUM
// Submission ID: 25579262
// Language: 4496

#include<bits/stdc++.h>
#define mod 10000007
using namespace std;
long long p(long long  a,long long b,long long mul)
{
    if(b==1)
   return (a*mul)%mod;

  long long t=(a*a)%mod;
  if(b%2!=0)
   mul=(mul*a)%mod;
  return p(t,b/2,mul);
}
int main()
{
   while(1)
   {   long long n,k;

       cin>>n>>k;
       if(n==0&&k==0)
        return 0;
       cout<<(p(n,n,1)+p(n,k,1)+(2*p(n-1,n-1,1))+(2*p(n-1,k,1)))%mod<<endl;
   }
return 0;}
