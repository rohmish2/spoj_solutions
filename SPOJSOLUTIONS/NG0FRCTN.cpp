// Problem: NG0FRCTN
// Submission ID: 26154136
// Language: 4600

#include<bits/stdc++.h>
using namespace std;
pair<long long,long long> res(long long n)
{ pair<long long,long long> q={0,0};
   if(n==1)
    return {1,1};
   q=res(n>>1);
   if(n==((n >> 1) << 1))
   return {q.first,q.first+q.second};
   else
   return {q.first+q.second,q.second};
}
int main()
{ long long a;
  scanf("%lld",&a);
  while(a)
  { pair<long long int,long long int>q={0,0};
      q=res(a);
      printf("%lld/%lld\n",q.first,q.second);
  scanf("%lld",&a);}
return 0;}
