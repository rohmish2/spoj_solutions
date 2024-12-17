// Problem: ADADUNG
// Submission ID: 26123572
// Language: 81936

#include <bits/stdc++.h>
#define mod 1000000007
using namespace std;
long int a[100000000];
int main()
{
    for(  int i=2;i<=10000000;i++)
     {int adder=(i%2==1?-1:1);
     a[i]=(i*a[i-1]+adder+mod)%mod;
     }
     int t;
    scanf("%d",&t);
    while(t--)
    { int n;
      scanf("%d",&n);
      printf("%ld\n",a[n]);

    }
    return 0;
}
