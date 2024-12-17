// Problem: BLINNET
// Submission ID: 25914884
// Language: 12652

#include<bits/stdc++.h>
using namespace std;
class edge
{ public:
    long long v,u,val;
  edge(long long a,long long b,long long vq)
  { v=a;
    u=b;
    val=vq;
  }
};

int a[10001];
int findkey(int k)
{ if(a[k]==k)
  return k;
  return a[k]=findkey(a[k]);
}
int  unioni(int k1, int k2)
{ if(a[k1]==k1)
    return a[k1]=k2;
  return a[k1]=unioni(a[k1],k2);
}

int main()
{  int t;
   scanf("%d",&t);
   while(t--)
   {
   int n;
   cin>>n;
   vector<edge>e;
   for(int i=1;i<=n;i++)
      a[i]=i;//initially everybody is associated with itself
   string ttt;
   for(int i=1;i<=n;i++)
   { cin>>ttt;
       int d;

     scanf("%d",&d);
     while(d--)
     {   int q;
         long long v;
       scanf("%d%lld",&q,&v);
       e.push_back(edge(i,q,v));
     }

     }

//cout<<endl;
   sort(e.begin(),e.end(),[](edge ar,edge br)
        {return (ar.val)<(br.val);});
   unsigned long long ans=0;
   for(auto i:e)
   {
       //cout<<i.v<<" "<<i.u<<" "<<i.val<<endl;
       if(findkey(i.v)!=findkey(i.u))
      {
      ans+=i.val;
       unioni(i.v,i.u);
      }
    }
   printf("%llu\n",ans);
}
   return 0;}
