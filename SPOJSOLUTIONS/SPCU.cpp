// Problem: SPCU
// Submission ID: 26004977
// Language: 4680

#include<bits/stdc++.h>
using namespace std;
int main()
{ int t;
  scanf("%d",&t);
  while(t--)
  { int s;
    scanf("%d",&s);
    int k=1;
    for(int i=0;i<s;i++)
      { int t1;
        scanf("%d",&t1);
        if(t1>i)
            k=0;

      }
    if(k==1)
        printf("YES\n");
    else
        printf("NO\n");

  }

return 0;}
