// Problem: CODERE3
// Submission ID: 26032311
// Language: 4640

#include<bits/stdc++.h>
using namespace std;
int main()
{ int t;
  scanf("%d",&t);
  while(t--)
  { int n;
    scanf("%d",&n);
    vector<int>a(n);

    vector<vector<int>>ans(n,vector<int>(2,0));
    int toret=0;
    for(int i=0;i<n;i++)
    { scanf("%d",&a[i]);
        int l=0,d=0,p=0;
      for(int j=0;j<i;j++)
       { if(a[j]<a[i])
           { l=max(l,ans[j][0]);
            }
          if(a[i]<a[j])
          { d=max(d,ans[j][1]);
            p=max(p,ans[j][0]);
          }
       }
      ans[i][0]=1+l;
      ans[i][1]=1+max(p,d);
      //printf("%d %d\n",ans[i][0],ans[i][1]);
      toret=max(toret,max(ans[i][0],ans[i][1]));
     }
  printf("%d\n",toret);


  }
  return 0;}
