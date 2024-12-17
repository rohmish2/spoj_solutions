// Problem: NFURY
// Submission ID: 26027837
// Language: 4520

#include<bits/stdc++.h>
using namespace std;
int ans[1001];
int main()
{ for(int i=1;i<=1000;i++)
     { ans[i]=10000;
         for(int j=1;j*j<=i;j++)
       { int k=j*j;

         ans[i]=min(ans[i],1+ans[i-k]); }
     }
int t;
scanf("%d",&t);
while(t--)
{ int a;
  scanf("%d",&a);
  printf("%d\n",ans[a]);

}
return 0;}
