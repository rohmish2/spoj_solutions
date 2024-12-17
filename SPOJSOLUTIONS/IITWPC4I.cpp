// Problem: IITWPC4I
// Submission ID: 25917576
// Language: 8300

#include<bits/stdc++.h>
using namespace std;
int pa[400000];
struct edge
{ int v1,v2;
  long val;
  edge(int a,int b,long c)
  { v1=a;
    v2=b;
    val=c;
  }
};
int findkey(int a)
{ if(a==pa[a])
    return a;
   return pa[a]=findkey(pa[a]);
}

int unioni(int a,int b)
{ if(a==pa[a])
    return pa[a]=findkey(b);
   return pa[a]=unioni(pa[a],b);
}
int main()
{ int t;
  scanf("%d",&t);
  while(t--)
  { int n,m;
    scanf("%d%d",&n,&m);
    for(int i=1;i<=n;i++)
      pa[i]=i;
    vector<int>ismilk(n+1,0);
    int key=0;
    for(int i=1;i<=n;i++)
    {scanf("%d",&ismilk[i]);
     key+=ismilk[i];
    }

    vector<edge>e;
    while(m--)
    { int v1,v2;
      long val;
      scanf("%d%d%ld",&v1,&v2,&val);
      e.push_back(edge(v1,v2,val));
    }
    if(key==0)
        {printf("impossible\n");
        continue;}
    sort(e.begin(),e.end(),[](edge a,edge b){return a.val<b.val;});
    long mini=0;
    for(auto i:e)
    { int p1=findkey(i.v1);
      int p2=findkey(i.v2);
      if(p1!=p2)
      { if(ismilk[p1]==1&&ismilk[p2]==0)
          { mini+=i.val;
            unioni(i.v2,i.v1);
          }
        if(ismilk[p1]==0&&ismilk[p2]==1)
          { mini+=i.val;
            unioni(i.v1,i.v2);
          }
        if(ismilk[p1]==0&&ismilk[p2]==0)
          { mini+=i.val;
            unioni(i.v2,i.v1);
          }

      }
    }
    int k=1;
    //int prev=findkey(i);

   for(int i=1;i<=n&&k==1;i++)
       {  if(ismilk[findkey(i)]==0)
              k=0;}
    if(k==0)
        printf("impossible\n");
    else
        printf("%ld\n",mini);

  }
  return 0;}
