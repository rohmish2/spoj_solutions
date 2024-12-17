// Problem: LCA
// Submission ID: 25928014
// Language: 4660

#include<bits/stdc++.h>
using namespace std;
int lca(int q1,int q2,vector<int>&level,vector<int>&par,vector<vector<int>>&a)
{ if(level[q1]<level[q2])
    swap(q1,q2);
  int log=0;
  for(log=0;(1<<log)<=level[q1];log++);
  log--;
  for(int j=log;j>=0;j--)
   { if(level[q1]-(1<<j)>=level[q2])
        q1=a[q1][j];}
  if(q1==q2)
  return q1+1;
  for(int j=log;j>=0;j--)
    { if(a[q1][j]!=-1&&a[q1][j]!=a[q2][j])
        {q1=a[q1][j];
          q2=a[q2][j];}
    }

 return par[q1]+1;
}


int main()
{ int t;
    int cnt=1;
   scanf("%d",&t);
  while(t--)
   { int s;
     scanf("%d",&s);
     vector<vector<int>>a(s,vector<int>(20,-1));
     vector<int>par(s,0),level(s,0);

       for(int i=0;i<s;i++)
        {  int d;
           scanf("%d",&d);
           while(d--)
           { int t;
             scanf("%d",&t);
             t--;
             par[t]=i;
             level[t]=level[i]+1;
            }
        }
    for(int i=0;i<s;i++)
        a[i][0]=par[i];

    for(int j=1;(1<<j)<s;j++) //because s is max height
      for(int i=0;i<s;i++)
         { if(a[i][j-1]>-1)
             a[i][j]=a[a[i][j-1]][j-1];
         }
   int q;
   scanf("%d",&q);
printf("Case %d:\n",cnt++);
   while(q--)
   { int q1,q2;
     scanf("%d%d",&q1,&q2);
     q1--;q2--;
     printf("%d\n",lca(q1,q2,level,par,a));


   }


   }

return 0;}
