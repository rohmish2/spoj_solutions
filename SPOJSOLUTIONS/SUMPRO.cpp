// Problem: SUMPRO
// Submission ID: 26171788
// Language: 4772

#include<bits/stdc++.h>
#define ll  long long
#define mod 1000000007
using namespace std;
ll range_sum(ll a, ll b)
 {
     ll sa=a*(a+1)>>1;
     ll sb=b*(b+1)>>1;
     return (sa-sb)%mod;
 }

int main()
{

    int t;
    ll n;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lld",&n);
        ll root=sqrt(n);
        ll low,up;
        ll sum=0;
        for(int i=1;i<=root;i++)
        {
            up=n/i;
            low=max(n/(i+1),root);
            sum+=(range_sum(up,low)*i)%mod;
            if(sum>=mod) sum-=mod;
            sum+=(i*(n/i))%mod;
            if(sum>=mod) sum-=mod;
        }
        printf("%lld\n",sum);
    }
    return 0;
}
