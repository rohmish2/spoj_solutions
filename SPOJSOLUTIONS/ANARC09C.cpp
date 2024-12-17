// Problem: ANARC09C
// Submission ID: 26080443
// Language: 7600

#include<bits/stdc++.h>
using namespace std;
int a[1000001];
int main()
{  for(int i=2;2*i<=1000000;i++)
     { if(a[i]==0)
         { a[i]=i;
             for(int j=2*i;j<=1000000;j+=i)
                 if(a[j]==0)
                    a[j]=i;
         }
     }
  //int t;
  //scanf("%d",&t);
  int cnt=1;
  while(1)
  { int b,c;
    scanf("%d%d",&b,&c);
    if(b==0)
        break;
    unordered_map<int,int>a1,a2;
    set<int>a3;
    while(b>1)
    {  if(a[b]==0)
        {a3.insert(b);
       a1[b]++;
       break;
       }
        a3.insert(a[b]);
       a1[a[b]]++;
      b/=a[b];
     }
   while(c>1)
    {  if(a[c]==0)
        {a3.insert(c);
       a2[c]++;
       break;
       }

        a3.insert(a[c]);
       a2[a[c]]++;
      c/=a[c];
    }
   int dis=0;
   for(auto i:a3)
   {dis+=abs(a1[i]-a2[i]);}

  printf("%d. %ld:%d\n",cnt++,a3.size(),dis);
  }
return 0;}
