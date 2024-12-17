// Problem: ACMT
// Submission ID: 26033372
// Language: 4744

#include<bits/stdc++.h>
using namespace std;
int main()
{ int t;
  scanf("%d",&t);
  while(t--)
  { int a,b;
    scanf("%d%d",&a,&b);
    int ans=0;
    while(1)
    { if(a>b&&(b>0)&&a>1)
       {a-=2;b--;}
      else if(a<b&&(b>1)&&a>0)
        {b-=2;a--;}
      else if(a==b&&a>1)
        {a-=2;b--;}
      else
        break;

     ans++;
     }
     printf("%d\n",ans);


  }

return 0;}
