// Problem: MULTQ3
// Submission ID: 25646602
// Language: 18676

#include<bits/stdc++.h>
using namespace std;
vector<tuple<long,long,long>>segment(500000);
vector<long>lazy(500000,0);
void build(long l,long r,long node)
{ if(l==r)
    {segment[node]=make_tuple(1,0,0);
    return;}
  long m=(l+r)>>1;

  build(l,m,2*node+1);
  build(m+1,r,2*node+2);
  segment[node]=make_tuple(get<0>(segment[2*node+1])+get<0>(segment[2*node+2]),get<1>(segment[2*node+1])+get<1>(segment[2*node+2]),get<2>(segment[2*node+1])+get<2>(segment[2*node+2]));
}
void update(long l,long r,long sl,long sr,long node)
{
    if(lazy[node]>=1)
      { if(sl!=sr)
          { lazy[2*node+1]+=lazy[node];
            lazy[2*node+2]+=lazy[node];
          }
          lazy[node]=lazy[node]%3;
        while(lazy[node]!=0)
        {tuple<long ,long,long>a=segment[node];
          get<0>(segment[node])=get<2>(a);
          get<1>(segment[node])=get<0>(a);
          get<2>(segment[node])=get<1>(a);
          lazy[node]--;
        }
       //lazy[node]=0;
      }
      if(sl>r||sr<l)
      return ;
  if(sl>=l&&sr<=r)
    {
        if(sl!=sr)
          { lazy[2*node+1]+=1;
            lazy[2*node+2]+=1;
          }

        tuple<long ,long,long>a=segment[node];
          get<0>(segment[node])=get<2>(a);
          get<1>(segment[node])=get<0>(a);
          get<2>(segment[node])=get<1>(a);

      return;
    }
    long m=(sl+sr)>>1;
    update(l,r,sl,m,2*node+1);
    update(l,r,m+1,sr,2*node+2);
     segment[node]=make_tuple(get<0>(segment[2*node+1])+get<0>(segment[2*node+2]),get<1>(segment[2*node+1])+get<1>(segment[2*node+2]),get<2>(segment[2*node+1])+get<2>(segment[2*node+2]));
}
long rmq(long l,long r,long sl,long sr,long node)
{ if(lazy[node]>=1)
      { if(sl!=sr)
          { lazy[2*node+1]+=lazy[node];
            lazy[2*node+2]+=lazy[node];
          }
          lazy[node]=lazy[node]%3;
        while(lazy[node]!=0)
        {tuple<long ,long,long>a=segment[node];
          get<0>(segment[node])=get<2>(a);
          get<1>(segment[node])=get<0>(a);
          get<2>(segment[node])=get<1>(a);
          lazy[node]--;
      }
       //lazy[node]=0;
      }

  if(sl>r||sr<l)
   return 0;
  if(sl>=l&&sr<=r)
   {  // cout<<sl<<" "<<sr<<" "<<get<0>(segment[node])<<endl;
       return get<0>(segment[node]);}
  long m=(sl+sr)>>1;

 return rmq(l,r,sl,m,2*node+1)+rmq(l,r,m+1,sr,2*node+2);
}
int main()
{ long n,q;
  ios_base::sync_with_stdio(false);
    cin.tie(NULL);
  cin>>n>>q;
  build(0,n-1,0);
  while(q--)
  {
    long a,b,c;
    cin>>a>>b>>c;
    if(a==0)
    update(b,c,0,n-1,0);
    else
    cout<<rmq(b,c,0,n-1,0)<<endl;

  }

return 0;}
