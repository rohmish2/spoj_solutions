// Problem: CRDS
// Submission ID: 25477484
// Language: 11376

#include <bits/stdc++.h>
#define mod 1000007
#define scan(a) scanf("%ld",&a)
using namespace std;
long long ans[1000001];
int main()
{ans[1]=2;
    for(long i=2;i<=1000000;i++)
    {
        ans[i]=((ans[i-1]%mod)+((3*i-1)%mod))%mod;
    }
    long int t;
    scan(t);
    while(t--)
    { long a;
      scan(a);
      printf("%lld\n",ans[a]);
    }

    return 0;
}
