// Problem: CRZYSMKR
// Submission ID: 26078198
// Language: 4844

#include<bits/stdc++.h>
using namespace std;
int main()
{ int t;
  scanf("%d",&t);
  while(t--)
  { long long n;
    scanf("%lld",&n);
     int mod=1;
    mod=(mod+(30%11*n%11)%11)%11;
    mod=(mod+10)%11;
    if(mod==0)
        printf("0\n");
        else
    printf("%d\n",abs(11-mod));
  }

return 0;}
