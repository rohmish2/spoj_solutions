// Problem: ULM09
// Submission ID: 25917324
// Language: 6352

#include<bits/stdc++.h>
using namespace std;
int pa[200100];
struct edge{
int v1,v2,val;
edge(int a,int b,int c)
{ v1=a;
  v2=b;
  val=c;
}
};
int findkey(int a)
{
  if(a==pa[a])
        return a;
  return  pa[a]=findkey(pa[a]);
}
int unioni(int a,int b)
{  if(a==pa[a])
       return pa[a]=findkey(b);
   return pa[a]=unioni(pa[a],b);
}
int main()
{

int n,m;
scanf("%d%d",&n,&m);
while(n!=0&&m!=0)
{ for(int i=0;i<n;i++)
   pa[i]=i;
  int total=0;
  vector<edge>e;
  while(m--)
    { int v1,v2,val;
      scanf("%d%d%d",&v1,&v2,&val);
      total+=val;
      e.push_back(edge(v1,v2,val));
    }
sort(e.begin(),e.end(),[](edge a,edge b){return a.val<b.val;});
int mini=0;
for(auto i:e)
{ if(findkey(i.v1)!=findkey(i.v2))
    mini+=i.val;
    unioni(i.v1,i.v2);
}
printf("%d\n",total-mini);
scanf("%d%d",&n,&m);
}
return 0;}
