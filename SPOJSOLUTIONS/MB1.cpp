// Problem: MB1
// Submission ID: 26125707
// Language: 5028

#include<bits/stdc++.h>
using namespace std;
bool sieve[10000000];
string a[10]={"0","1","2","3","4","5","6","7","8","9"};
long  check(long a1)
{ string b;
   long aa=1;
   while(a1>0)
   { int k=a1%10;
     if(k!=0)
        aa*=k;
     b+=a[k];
    a1/=10;
   }
 string c=b;
  reverse(c.begin(),c.end());
  if(c==b)
   return  aa;
  return -1;
}
int main()
{ vector<long int>p,o,tr;
  for(int i=2;i*i<1000000;i++)
    if(sieve[i]==false)
       for(int j=i*i;j<1000000;j+=i)
          sieve[j]=true;
int k=1;
for(int i=2;i<1000000;i++)
    if(sieve[i]==false)
       p.push_back(i);
   for(int i=2;i<100000;i++)
   {    long k;
       if(sieve[i]==false&&(k=check(i))!=-1)
         {o.push_back(k);tr.push_back(i);}}

   int t;
   scanf("%d",&t);
   while(t--)
   { int n;
      scanf("%d",&n);
      printf("%ld %ld\n",tr[n-1],p[o[n-1]-1]);

   }

return 0;}
