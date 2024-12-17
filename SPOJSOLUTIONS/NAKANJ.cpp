// Problem: NAKANJ
// Submission ID: 25580813
// Language: 4584

#include<bits/stdc++.h>
using namespace std;
int d1,d2;
int ans;
int visited[10][10];
int d[10][10];
int bfs(int s1,int s2)
{
  queue<pair<int,int>>q;
  pair<int,int>p=make_pair(s1,s2);
  q.push(p);

  while(!q.empty())
  { // cout<<q.front().first<<"  "<<q.front().second<<" "<<d1<<" "<<d2<<endl;

     visited[q.front().first][q.front().second]=1;
    if(q.front().first==d1&&q.front().second==d2)
        { //cout<<"yeah";
            return d[d1][d2];}

    if(q.front().first+2<8)
    {
      if(q.front().second+1<8&&visited[q.front().first+2][q.front().second+1]==0)
       {   visited[q.front().first+2][q.front().second+1]=1;
           d[q.front().first+2][q.front().second+1]=d[q.front().first][q.front().second]+1;
           q.push(make_pair(q.front().first+2,q.front().second+1));
       }
      if(q.front().second-1>=0&&!visited[q.front().first+2][q.front().second-1])
       {   visited[q.front().first+2][q.front().second-1]=1;
           d[q.front().first+2][q.front().second-1]=d[q.front().first][q.front().second]+1;
           q.push(make_pair(q.front().first+2,q.front().second-1));
       }

    }
    if(q.front().first-2>=0)
    {
        if(q.front().second+1<8&&!visited[q.front().first-2][q.front().second+1])
            { visited[q.front().first-2][q.front().second+1]=1;
           d[q.front().first-2][q.front().second+1]=d[q.front().first][q.front().second]+1;
            q.push(make_pair(q.front().first-2,q.front().second+1));
            }

      if(q.front().second-1>=0&&!visited[q.front().first-2][q.front().second-1])
         { visited[q.front().first-2][q.front().second-1]=1;
           d[q.front().first-2][q.front().second-1]=d[q.front().first][q.front().second]+1;
           q.push(make_pair(q.front().first-2,q.front().second-1));
       }

    }
    if(q.front().second+2<8)
    {
      if(q.front().first+1<8&&visited[q.front().first+1][q.front().second+2]==0)
       {   visited[q.front().first+1][q.front().second+2]=1;
           d[q.front().first+1][q.front().second+2]=d[q.front().first][q.front().second]+1;
           q.push(make_pair(q.front().first+1,q.front().second+2));
       }
      if(q.front().first-1>=0&&!visited[q.front().first-1][q.front().second+2])
       {   visited[q.front().first-1][q.front().second+2]=1;
           d[q.front().first-1][q.front().second+2]=d[q.front().first][q.front().second]+1;
           q.push(make_pair(q.front().first-1,q.front().second+2));
       }

    }
    if(q.front().second-2>=0)
    {
        if(q.front().first+1<8&&!visited[q.front().first+1][q.front().second-2])
            { visited[q.front().first+1][q.front().second-2]=1;
           d[q.front().first+1][q.front().second-2]=d[q.front().first][q.front().second]+1;
            q.push(make_pair(q.front().first+1,q.front().second-2));
            }

      if(q.front().first-1>=0&&!visited[q.front().first-1][q.front().second-2])
         { visited[q.front().first-1][q.front().second-2]=1;
           d[q.front().first-1][q.front().second-2]=d[q.front().first][q.front().second]+1;
           q.push(make_pair(q.front().first-1,q.front().second-2));
       }

    }
  q.pop();
  }
}
int main()
{ int t;
   cin>>t;
   while(t--)
   {char a,b;
   memset(visited,0,sizeof(visited));
   memset(d,0,sizeof(d));
    int a1,a2;
    cin>>a>>a1>>b>>a2;
    d1=b-'a';
    d2=a2-1;
   cout<<bfs(a-'a',a1-1)<<endl;


   }

return 0;}
