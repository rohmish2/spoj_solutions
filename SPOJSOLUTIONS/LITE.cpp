// Problem: LITE
// Submission ID: 25629856
// Language: 4756

#include<bits/stdc++.h>
using namespace std;
int seg[500000],lazy[500000];
inline void lzy(int l,int r,int sl,int sr,int node)
{
  if(lazy[node]==1)
  {
   seg[node]=sr-sl+1-seg[node];
    if(sl!=sr)
    {lazy[2*node+1]=lazy[2*node+1]^1;
    lazy[2*node+2]=lazy[2*node+2]^1;
    }
   lazy[node]=0;
  }
  if(sl>r||sr<l)
    return;
  if(sl>=l&&sr<=r)
  {
    seg[node]=sr-sl+1-seg[node];
    if(sl!=sr)
    {
      lazy[2*node+1]=lazy[2*node+1]^1;
      lazy[2*node+2]=lazy[2*node+2]^1;
    }
   lazy[node]=0;
   return ;
  }

  if(sl<sr)
  { int m=(sl+sr)>>1;
    lzy(l,r,sl,m,2*node+1);
    lzy(l,r,m+1,sr,2*node+2);
    seg[node]=seg[2*node+1]+seg[2*node+2];
  }
}
inline long int rmq(int l,int r,int sl,int sr,int node)
{ int mid=(sl+sr)>>1;
  if(lazy[node]==1)
  {
   seg[node]=sr-sl+1-seg[node];
    if(sl!=sr)
    {
      lazy[2*node+1]=lazy[2*node+1]^1;
        lazy[2*node+2]=lazy[2*node+2]^1;
    }
   lazy[node]=0;
  }

   if(sl>=l&&sr<=r)
   { //cout<<sl<<" "<<sr<<" "<<node<<" "<<endl;
       return seg[node];}
   if(sl>r||sr<l)
   return 0;
   return rmq(l,r,sl,mid,2*node+1)+rmq(l,r,mid+1,sr,2*node+2);

}
int main()
{ int n,q;
   scanf("%d%d",&n,&q);
   while(q--)
   {       int k,a,b;
    scanf("%d%d%d",&k,&a,&b);
     if(k==1)
     printf("%d\n",rmq(a-1,b-1,0,n-1,0));
     else
     lzy(a-1,b-1,0,n-1,0);
}
return 0;}
