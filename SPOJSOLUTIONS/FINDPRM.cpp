// Problem: FINDPRM
// Submission ID: 26176872
// Language: 43468

#include<bits/stdc++.h>
using namespace std;

int main()
{ bitset<10000001>a;
  vector<int>suffix(10000001,0);
  a.reset();
    for(int i=2;i*i<=10000000;i++)
     if(a[i]==0)
         for(int j=i*i;j<=10000000;j+=i)
           a[j]=1;
  a[0]=a[1]=1;
  suffix[2]=1;

  for(int i=3;i<10000001;i++)
     { suffix[i]=suffix[i-1];
       if(a[i]==0)
        suffix[i]++;
    }
    int t;
    scanf("%d",&t);
    while(t--)
    { int tt;
      scanf("%d",&tt);

      printf("%d\n",suffix[tt]-suffix[tt/2]);

    }
  return 0;}
