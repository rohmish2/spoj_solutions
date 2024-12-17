// Problem: CCHESS
// Submission ID: 26078833
// Language: 4524

#include<bits/stdc++.h>
using namespace std;
struct place{
int p1,p2,d;
place(int a,int b,int c)
{ p1=a;
  p2=b;
  d=c;
}
};
struct comp{
bool operator()(place a,place b)
{ return a.d>b.d;}};
int main()
{ int s1,s2,e1,e2;
  while(scanf("%d%d%d%d",&s1,&s2,&e1,&e2)!=EOF)
    { vector<vector<int>>a(8,vector<int>(8,-1));
      priority_queue<place,vector<place>,comp>p;
      p.push(place(s1,s2,0));
      //v[s1][s2]=0;
int      ans=-1;
      while(!p.empty())
      { place v=p.top();
        p.pop();
        if(a[v.p1][v.p2]!=-1)
            continue;
        else
        a[v.p1][v.p2]=v.d;

        if(v.p1==e1&&v.p2==e2)
            {ans=v.d;
            break;}

        if(v.p1+1<8&&v.p2+2<8)
            if(a[v.p1+1][v.p2+2]==-1)
            p.push(place(v.p1+1,v.p2+2,v.d+(v.p1*(v.p1+1))+(v.p2*(v.p2+2))));
        if(v.p1+1<8&&v.p2-2>=0)
            if(a[v.p1+1][v.p2-2]==-1)
            p.push(place(v.p1+1,v.p2-2,v.d+(v.p1*(v.p1+1))+(v.p2*(v.p2-2))));

       if(v.p1+2<8&&v.p2+1<8)
            if(a[v.p1+2][v.p2+1]==-1)
            p.push(place(v.p1+2,v.p2+1,v.d+(v.p1*(v.p1+2))+(v.p2*(v.p2+1))));
       if(v.p1+2<8&&v.p2-1>=0)
            if(a[v.p1+2][v.p2-1]==-1)
            p.push(place(v.p1+2,v.p2-1,v.d+(v.p1*(v.p1+2))+(v.p2*(v.p2-1))));

        if(v.p1-1>=0&&v.p2+2<8)
            if(a[v.p1-1][v.p2+2]==-1)
            p.push(place(v.p1-1,v.p2+2,v.d+(v.p1*(v.p1-1))+(v.p2*(v.p2+2))));
        if(v.p1-1>=0&&v.p2-2>=0)
            if(a[v.p1-1][v.p2-2]==-1)
            p.push(place(v.p1-1,v.p2-2,v.d+(v.p1*(v.p1-1))+(v.p2*(v.p2-2))));


       if(v.p1-2>=0&&v.p2+1<8)
            if(a[v.p1-2][v.p2+1]==-1)
            p.push(place(v.p1-2,v.p2+1,v.d+(v.p1*(v.p1-2))+(v.p2*(v.p2+1))));
       if(v.p1-2>=0&&v.p2-1>=0)
            if(a[v.p1-2][v.p2-1]==-1)
            p.push(place(v.p1-2,v.p2-1,v.d+(v.p1*(v.p1-2))+(v.p2*(v.p2-1))));


      }
    printf("%d\n",ans);
    }
return 0;}
