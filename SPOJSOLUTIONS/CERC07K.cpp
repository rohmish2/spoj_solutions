// Problem: CERC07K
// Submission ID: 26086074
// Language: 4644

#include<bits/stdc++.h>
using namespace std;
int v[110][110][16];
struct bfs{
int r,c,bitt,dis;
bfs(int a,int b,int x,int y)
{ r=a;
  c=b;
  bitt=x;
  dis=y;
  }
};
//b=1st y=2nd r=3rd g=4th bit
int main()
{ int r,c;
  scanf("%d%d",&r,&c);
  while(r!=0)
  { vector<vector<char>>a(r,vector<char>(c));

    int s1,s2;
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
           {cin>>a[i][j];
            if(a[i][j]=='*')
               {s1=i;s2=j;}
           for(int l=0;l<16;l++)
           v[i][j][l]=-1;}
   queue<bfs>a1;
    int best=1000000000;
   a1.push(bfs(s1,s2,0,0));
   while(!a1.empty())
    { bfs cur=a1.front();
      int i=cur.r,j=cur.c;
      int d=cur.bitt;
      a1.pop();
      if(a[i][j]=='X')
        best=min(best,cur.dis);
      if(a[cur.r][cur.c]=='B'&& (d&1)==0)
      {continue;}
      if(a[cur.r][cur.c]=='Y'&& ((d>>1)&1)==0)
      {continue;}
      if(a[cur.r][cur.c]=='R'&& ((d>>2)&1)==0)
      {continue;}
      if(a[cur.r][cur.c]=='G'&&((d>>3)&1)==0)
      {continue;}
      if(v[i][j][d]!=-1)
      { if(v[i][j][d]<=cur.dis)
         continue;
        v[i][j][d]=cur.dis;}
      else
       v[i][j][d]=cur.dis;
      int k=0;
      if(a[cur.r][cur.c]=='b')
      {  d|=1;k=1;}
      if(a[cur.r][cur.c]=='y')
      {  d|=(1<<1);k=1;}
      if(a[cur.r][cur.c]=='r')
      {  d|=(1<<2);k=1;}
      if(a[cur.r][cur.c]=='g')
      {  d|=(1<<3);k=1;}

      if(i+1<r)
      { if(a[i+1][j]!='#')
        a1.push(bfs(i+1,j,d,cur.dis+1));
      }
      if(i-1>=0)
        {if(a[i-1][j]!='#')
         a1.push(bfs(i-1,j,d,cur.dis+1));
        }
     if(j-1>=0)
     {   if(a[i][j-1]!='#')
         a1.push(bfs(i,j-1,d,cur.dis+1));
     }
     if(j+1<c)
     {   if(a[i][j+1]!='#')
         a1.push(bfs(i,j+1,d,cur.dis+1));
     }

    }
    if(best==1000000000)
        printf("The poor student is trapped!\n");
    else
        printf("Escape possible in %d steps.\n",best);
  scanf("%d%d",&r,&c);}

return 0;}
