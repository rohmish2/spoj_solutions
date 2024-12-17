// Problem: GOO
// Submission ID: 26197077
// Language: 4820

#include<bits/stdc++.h>
using namespace std;
int main()
{ vector<pair<long long int,long long int>>a(51);
  a[0].first=0;
  a[0].second=0;
  a[1].first=1;
  a[1].second=1;
  long long sex=1;
  for(int i=2;i<51;i++)
  { a[i].first=a[i-1].first*2;
    a[i].second=sex+a[i].first;
    sex+=a[i].second;
  }
  int t;
  scanf("%d",&t);
  while(t--)
  { int n;
    scanf("%d",&n);
    printf("%lld %lld\n",a[n].first,a[n].second);

  }
return 0;}
