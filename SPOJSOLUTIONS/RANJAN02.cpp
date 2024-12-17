// Problem: RANJAN02
// Submission ID: 25997702
// Language: 4508

#include<bits/stdc++.h>
using namespace std;
int main()
{ unsigned long long a[36];
  a[1]=2;
  for(int i=2;i<36;i++)
        a[i]=(3*a[i-1])+2;

  int t;
  scanf("%d",&t);
  while(t--)
  { int q;
    scanf("%d",&q);
    printf("%llu\n",a[q]);
  }
  return 0;}
