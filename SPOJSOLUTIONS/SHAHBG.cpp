// Problem: SHAHBG
// Submission ID: 26004808
// Language: 4808

#include<bits/stdc++.h>
using namespace std;
int main()
{ unordered_map<int,int>a;
  int cnt=0;
  int s;
  scanf("%d",&s);
  while(s--)
   { int t;
     scanf("%d",&t);
     a[t]=1;
     if(a[t-1]==0&&a[t+1]==0)
      cnt++;
     else if(a[t-1]+a[t+1]==2)
      cnt--;
     printf("%d\n",cnt);

   }
    printf("Justice\n");

  return 0;}
