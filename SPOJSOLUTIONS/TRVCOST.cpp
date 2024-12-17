// Problem: TRVCOST
// Submission ID: 26049443
// Language: 4832

#include<bits/stdc++.h>
using namespace std;

int main()
{
 int n;
 scanf("%d",&n);
 vector<vector<int>>a(510,vector<int>(510,10000));
 for(int i=0;i<510;i++)
    a[i][i]=0;
 while(n--)
 { int t1,t2,c;
   scanf("%d%d%d",&t1,&t2,&c);
   a[t1][t2]=c;
   a[t2][t1]=c;
 }
 int u;
 scanf("%d",&u);
 vector<int>adj(510,10000),v(510,0);
 v[u]=1;
 for(int i=0;i<510;i++)
 {adj[i]=a[u][i];}
 for(int i=0;i<510;i++)
 { int sm=10000,in=-1;
   for(int i=0;i<510;i++)
       {
         if(v[i]==0&&sm>adj[i])
         {
           sm=adj[i];
           in=i;
         }
       }
  if(sm>=10000||in==-1)
    break;
  v[in]=1;
  for(int i=0;i<510;i++)
  { if(v[i]==0)
      adj[i]=min(sm+a[in][i],adj[i]);
  }

 }
 int q;
 scanf("%d",&q);
 while(q--)
 { int k;
   scanf("%d",&k);
   if(adj[k]>=10000)
        printf("NO PATH\n");
   else
        printf("%d\n",adj[k]);


 }
 return 0;}
