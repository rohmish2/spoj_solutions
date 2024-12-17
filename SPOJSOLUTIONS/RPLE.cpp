// Problem: RPLE
// Submission ID: 26004403
// Language: 4656

#include<bits/stdc++.h>
using namespace std;
int main()
{ int t;
  scanf("%d",&t);
  for(int c=1;c<=t;c++)
  { map<int,int>a;
    int p,n;
    scanf("%d%d",&p,&n);
    int k=1;
    while(n--)
    { int t1,t2;
      scanf("%d%d",&t1,&t2);
      if(a[t1]!=1)
            a[t1]=-1;
      else
        k=0;
      if(a[t2]!=-1)
           a[t2]=1;
      else
       k=0;
    }
    if(k==1)
        printf("Scenario #%d: spying\n",c);
    else
        printf("Scenario #%d: spied\n",c);
  }
return 0;}
