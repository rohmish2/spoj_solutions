// Problem: TEAM2
// Submission ID: 25848076
// Language: 4616

#include<bits/stdc++.h>
using namespace std;
int main()
{ long a,b,c,d;
  int cnt=1;
  while(scanf("%ld %ld %ld %ld",&a,&b,&c,&d)!=EOF)
    { vector<int>ar(4);
    ar[0]=a;
    ar[1]=b;
    ar[2]=c;
    ar[3]=d;
    sort(ar.begin(),ar.end());

     printf("Case %d: %ld\n",cnt,ar[3]+ar[2]);
    cnt++;}
return 0;}
