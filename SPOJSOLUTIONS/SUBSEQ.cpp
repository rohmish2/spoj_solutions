// Problem: SUBSEQ
// Submission ID: 26166680
// Language: 95536

#include<bits/stdc++.h>
using namespace std;
int main()
{ int t;
  scanf("%d",&t);
  while(t--)
  { map<int,int>m;
    int s;
    scanf("%d",&s);
    m[0]=1;
    int ss;
    int sol=0;
    int ans=0;
    for(int i=0;i<s;i++)
    { int tmp;
      scanf("%d",&tmp);

      m[ans+tmp]++;

      ans+=tmp;
      sol+=m[ans-47];

    }
    printf("%d\n",sol);
  }
  return 0;}
