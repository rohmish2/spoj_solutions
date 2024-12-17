// Problem: PTIME
// Submission ID: 25833657
// Language: 4784

#include<bits/stdc++.h>
using namespace std;
bool sieve[100100];
int main()
{  vector<int>prime;
    for(int i=2;i*i<=100000;i++)
    if(sieve[i]==false)
       for(int j=i*i;j<=100000;j+=i)
          sieve[j]=true;
   for(int i=2;i<=100000;i++)
     if(sieve[i]==false)
       prime.push_back(i);
  int n;
  cin>>n;
  for(int i=0;prime[i]<=n;i++)
  { cout<<prime[i]<<"^";
    int exp=0;
    for(int j=prime[i];j<=n;j*=prime[i])
    exp+=n/j;
   cout<<exp;
   if(prime[i+1]<=n)
   cout<<" * ";
  }

  return 0;}
