// Problem: CADYDIST
// Submission ID: 25589630
// Language: 5400

#include<bits/stdc++.h>
using namespace std;
long long a[10000000],b[10000000];
int main()
{
     while(1)
     { long long n;
       scanf("%lld",&n);
       if(n==0)
        return 0;
       for(long int i=0;i<n;i++)
            scanf("%lld",&a[i]);
       for(long int i=0;i<n;i++)
            scanf("%lld",&b[i]);

       sort(a,a+n);
       sort(b,b+n);
     long long ans=0;
     for(long int i=0,j=n-1;i<n;j--,i++)
        ans+=a[i]*b[j];
     printf("%lld\n",ans);
     }
  return 0;
}
