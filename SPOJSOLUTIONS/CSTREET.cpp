// Problem: CSTREET
// Submission ID: 25914909
// Language: 6468

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
   int p,n,k;
   cin>>p>>n>>k;
   vector<edge>e;
   for(int i=1;i<=n;i++)
      a[i]=i;//initially everybody is associated with itself

    for(int i=1;i<=k;i++)
   {
        int j,q;
         long long v;
       scanf("%d%d%lld",&j,&q,&v);
       e.push_back(edge(j,q,v));
     }

//cout<<endl;
   sort(e.begin(),e.end(),[](edge ar,edge br)
        {return (ar.val)<(br.val);});
    long long ans=0;
   for(auto i:e)
   {
       //cout<<i.v<<" "<<i.u<<" "<<i.val<<endl;
       if(findkey(i.v)!=findkey(i.u))
      {
      ans+=i.val;
       unioni(i.v,i.u);
      }
    }
   printf("%lld\n",ans*p);
}
   return 0;}
