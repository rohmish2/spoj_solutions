// Problem: TULIPNUM
// Submission ID: 26597457
// Language: 4544

#include<bits/stdc++.h>
using namespace std;
int main()
{ int t;
  scanf("%d",&t);
  for(int i=1;i<=t;i++)
  {
   printf("Case %d:\n",i);
   int n,q;
   scanf("%d%d",&n,&q);
   vector<int>a(n),d(n,0);
   for(int i=0;i<n;i++)
    {scanf("%d",&a[i]);
      if(i!=0)
      { if(a[i]!=a[i-1])
          d[i]=d[i-1]+1;
         else
          d[i]=d[i-1];
      }
    }
     while(q--)
     { int l,r;
       scanf("%d%d",&l,&r);
       l--;r--;
       printf("%d\n",d[r]-d[l]+1);
     }

  }

return 0;}
