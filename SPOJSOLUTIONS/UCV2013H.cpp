// Problem: UCV2013H
// Submission ID: 26004689
// Language: 4696

#include<bits/stdc++.h>
using namespace std;
int bfs(int i,int j,vector<vector<int>>&a,vector<vector<int>>&v)
{  int sum=1;
   queue<pair<int,int>>q;
   q.push({i,j});
   v[i][j]=1;
   while(!q.empty())
   { int ti,tj;
      ti=q.front().first;
      tj=q.front().second;
     if(ti+1<a.size()&&a[ti+1][tj]==1&&v[ti+1][tj]==0)
     { sum++;
       q.push({ti+1,tj});
       v[ti+1][tj]=1;
     }
     if(ti-1>=0&&a[ti-1][tj]==1&&v[ti-1][tj]==0)
     { sum++;
       q.push({ti-1,tj});
       v[ti-1][tj]=1;
     }
     if(tj+1<a[0].size()&&a[ti][tj+1]==1&&v[ti][tj+1]==0)
     { sum++;
       q.push({ti,tj+1});
       v[ti][tj+1]=1;
     }
     if(tj-1>=0&&a[ti][tj-1]==1&&v[ti][tj-1]==0)
     { sum++;
       q.push({ti,tj-1});
       v[ti][tj-1]=1;
     }



     q.pop();
   }
   return sum;
  }
int main()
{ int r,c;
  scanf("%d%d",&r,&c);
  while(r!=0)
  { int cnt=0;
      vector<vector<int>> a(r,vector<int>(c)),vis(r,vector<int>(c,0));
    map<int,int>mp;
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            scanf("%d",&a[i][j]);
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
          {
             if(vis[i][j]==0&&a[i][j]==1)
             { cnt++;
              mp[bfs(i,j,a,vis)]++;
             }
          }
          printf("%d\n",cnt);
  for(auto j:mp)
    printf("%d %d\n",j.first,j.second);
  scanf("%d%d",&r,&c);
  }

  return 0;}
