// Problem: AP2
// Submission ID: 25475444
// Language: 4800

#include <bits/stdc++.h>
#define scan(a) scanf("%lld",&a)
using namespace std;

int main()
{
  long long t;
  scan(t);
  while(t--)
  { long long a,b,s,n,d;
    scan(a);
    scan(b);
    scan(s);
    n=(s*2)/(a+b);
    d= (b-a)/(n-5);
    a=a-(2*d);
    printf("%lld\n",n);
    printf("%lld ",a);
    for(int i=1;i<n;i++)
        printf("%lld ",a+(i*d));
   printf("\n");
  }
    return 0;
}
