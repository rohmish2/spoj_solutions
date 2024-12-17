// Problem: CEQU
// Submission ID: 25591079
// Language: 4716

#include<bits/stdc++.h>
using namespace std;
long long gcd(long long a,long long b)
{ if(b==0)
  return a;
  return gcd(b,a%b);
}
int main()
{ int t;
cin>>t;
for(int i=1;i<=t;i++)
{ long long a,b,c;
  cin>>a>>b>>c;
  if(!(c%gcd(a,b)))
  printf("Case %d: Yes\n",i);
  else
  printf("Case %d: No\n",i);

}

return 0;}
