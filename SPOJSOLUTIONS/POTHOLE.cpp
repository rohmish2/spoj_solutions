// Problem: POTHOLE
// Submission ID: 25957560
// Language: 5008

#include<bits/stdc++.h>
using namespace std;
int par[3010];
int cap[3010][3010];
int bfs(int s,int t,vector<vector<int>>&adj)
{
 queue<pair<int,int>>q;
 memset(par,0,sizeof(par));
 par[s]=-1;
 q.push(make_pair(s,35000));

 while(!q.empty())
  { int curp=q.front().first,curflow=q.front().second;
   q.pop();
   for(auto i:adj[curp])
    { if(par[i]==0&&cap[curp][i]!=0)
         { curflow=min(cap[curp][i],curflow);
           par[i]=curp;
           if(i==t)
           return curflow;
           q.push({i,curflow});
         }

    }
 }

 return 0;
}

int main()
{ int t;
  scanf("%d",&t);
  while(t--)
{ int n;
  scanf("%d",&n);
  vector<vector<int>>adj(n+1);
  //memset(cap,0,sizeof(cap));
  for(int i=1;i<n;i++)
  { int s;
    scanf("%d",&s);
     while(s--)
    {int t;
     scanf("%d",&t);

     adj[i].push_back(t);
     adj[t].push_back(i);
     if(i==1||t==n)
     {cap[i][t]=1;}
     else
      cap[i][t]=35000;
     cap[t][i]=0;
     }
  }
  int maxf=0;
  int nf=0;
  while(nf=bfs(1,n,adj))
   { //printf("%d\n",nf);
       maxf+=nf;
     int bas=n;
     while(par[bas]!=-1)
      { cap[par[bas]][bas]-=nf;
        cap[bas][par[bas]]+=nf;
        bas=par[bas];
      }
   }
  printf("%d\n",maxf);

}
return 0;}
