// Problem: ROADS
// Submission ID: 26052603
// Language: 4620

#include<bits/stdc++.h>
using namespace std;
struct edge
{
 int in,l,c;
  edge(int a,int b,int v)
  { in=a;
    l=b;
    c=v;
  }

};
struct comp{
 bool operator()(edge &s1,edge &s2)
 {
     return s1.l>s2.l;
 }
};
int main()
{ int t;
  scanf("%d",&t);
  while(t--)
  { int g,n,r;
    scanf("%d%d%d",&g,&n,&r);
    vector<vector<edge>>r1(r);
    //vector<vector<int>>adj(n);
    for(int i=0;i<r;i++)
    { int t1,t2,t3,t4;
      scanf("%d%d%d%d",&t1,&t2,&t3,&t4);
      t1--;t2--;
      r1[t1].push_back(edge(t2,t3,t4));
    }
  priority_queue<edge,vector<edge>,comp> p1;
  p1.push(edge(0,0,0));
  int k=-1;
  while(!p1.empty())
  { edge sex=p1.top();
    p1.pop();
    if(sex.in==n-1)
        {k=sex.l;
        break;}
    for(auto i:r1[sex.in])
        { if(i.c+sex.c<=g)
           p1.push( edge(i.in,i.l+sex.l,i.c+sex.c));

        }

  }
  printf("%d\n",k);
  }

return 0;}
