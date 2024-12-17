// Problem: KATHTHI
// Submission ID: 26615141
// Language: 12864

#include<bits/stdc++.h>
using namespace std;
int dis1[4]= {0,0,-1,1};
int dis2[4]={1,-1,0,0};
bool isval(int x,int y,int r,int c)
{ if(x<0||y<0||x>=r||y>=c)
     return false;
  return true;
}
int main()
{ int t;
  scanf("%d",&t);
  while(t--)
  { int r,c;
    scanf("%d%d",&r,&c);
    vector<vector<char>>a(r,vector<char>(c));
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
           cin>>a[i][j];

   deque<pair<int,int>>q;
   q.push_back({0,0});
   vector<vector<int>>dis(r,vector<int>(c,-1));
   dis[0][0]=0;
   while(q.size())
   {
   int x=q.front().first,y=q.front().second;
   q.pop_front();
   if(x==r-1&&y==c-1)
    break;
   for(int i=0;i<4;i++)
    { int xx=x+dis1[i],yy=y+dis2[i];
      if(isval(x+dis1[i],y+dis2[i],r,c))
          { int w=0;
            if(a[x][y]!=a[xx][yy])
              w=1;
            if(dis[xx][yy]==-1 || dis[x][y]+w<dis[xx][yy])
              { dis[xx][yy]=dis[x][y]+w;
                if(w==0)
                q.push_front({xx,yy});
                else
                q.push_back({xx,yy});
              }

          }

    }

   }

 printf("%d\n",dis[r-1][c-1]);
}
  return 0;}
