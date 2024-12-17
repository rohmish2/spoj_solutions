// Problem: PRINT
// Submission ID: 26021696
// Language: 7716

#include<bits/stdc++.h>
using namespace std;
bool sieve[50001];
int main()
{
  for(int i=2;i*i<=50000;i++)
    if(sieve[i]==false)
        for(int j=i*i;j<=50000;j+=i)
            sieve[j]=true;

  vector<int>prime;
  prime.push_back(2);
  for(int i=3;i<=50000;i+=2)
    if(sieve[i]==false)
       prime.push_back(i);
 int t;
  scanf("%d",&t);
  while(t--)
  { long l,h;
    scanf("%ld%ld",&l,&h);
    vector<int>temp(h-l+1,0);
    for(int i=0;prime[i]*prime[i]<=h;i++)
    {  long int li=(l/prime[i])*prime[i];
       while(li<l||li==prime[i])
            li+=prime[i];

        for(long j=li;j<=h;j+=prime[i])
         temp[j-l]=1;


    }
    for(int i=0;i<temp.size();i++)
    { if(temp[i]==0)
        printf("%ld\n",l+i);
    }



  }

return 0;}
