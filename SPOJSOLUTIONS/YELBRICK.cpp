// Problem: YELBRICK
// Submission ID: 26031402
// Language: 4608

#include<bits/stdc++.h>
using namespace std;
long long gcd(long long a,long long b)
{ if(b==0)
  return a;
  return gcd(b,a%b);
}
int main()
{ int s;
  scanf("%d",&s);
  while(s)
  { vector<vector<long long int>>a(s,vector<long long int>(3));
    for(int i=0;i<s;i++)
        scanf("%lld %lld %lld",&a[i][0],&a[i][1],&a[i][2]);
    long long hcf=a[0][0];
      for(int i=0;i<s;i++)
    { hcf=gcd(hcf,a[i][0]);
      hcf=gcd(hcf,a[i][1]);
      hcf=gcd(hcf,a[i][2]);
    }

    long long ans=0;
    for(int i=0;i<s;i++)
    { ans+=(a[i][0]*a[i][1]*a[i][2])/(hcf*hcf*hcf); }
  printf("%lld\n",ans);
  scanf("%d",&s);}


return 0;}
