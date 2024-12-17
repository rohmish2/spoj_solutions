// Problem: KQUERYO
// Submission ID: 26022410
// Language: 10512

#include<bits/stdc++.h>
using namespace std;
void build(int idx,int l,int r,vector<vector<int>>&seg,vector<int>&a)
{ if(l>r)
   return ;
 //  printf("%d %d\n",l,r);
 if(l==r)
    {seg[idx].push_back(a[l]);
    return ;}
  int mid=(l+r)>>1;
 build(2*idx+1,l,mid,seg,a);
 build(2*idx+2,mid+1,r,seg,a);
 //printf("1");
 vector<int>b(seg[2*idx+1].size()+seg[2*idx+2].size());
 //printf("2");
 sort(seg[2*idx+1].begin(),seg[2*idx+1].end());
 sort(seg[2*idx+2].begin(),seg[2*idx+2].end());
 //printf("merge");
 merge(seg[2*idx+1].begin(),seg[2*idx+1].end(),seg[2*idx+2].begin(),seg[2*idx+2].end(),b.begin());
 seg[idx]=b;
}
int rmq(int node,int l,int r,int al,int ar,vector<vector<int>>&seg,int k)
{ if(l>ar||r<al||l>r)
  return 0;
  if(l>=al&&r<=ar)
  { //cout<<"l "<<l<<"r "<<r<<"  "<<seg[node].end()-upper_bound(seg[node].begin(),seg[node].end(),k)<<"\n";

   return seg[node].end()-upper_bound(seg[node].begin(),seg[node].end(),k);

  }
  int mid=(l+r)>>1;

 return rmq(2*node+1,l,mid,al,ar,seg,k)+rmq(2*node+2,mid+1,r,al,ar,seg,k);
}

int main()
{ int s;
  scanf("%d",&s);
  vector<int>a(s);
  for(int i=0;i<s;i++)
    scanf("%d",&a[i]);
    //printf("sex");
  vector<vector<int>>seg(5*s);
  //printf(":::::::::");
   build(0,0,s-1,seg,a);

  int q;
  scanf("%d",&q);
  int l=0;
  while(q--)
  {
   int w,e,r;
    scanf("%d%d%d",&w,&e,&r);
   // w--;e--;
    w=w^l;
    e=e^l;
    r=r^l;
   // printf("%d %d %d",w,e,r);
    w--;
    e--;
    if(w<0)
        w=0;
    if(e>s)
        e=s-1;
    l=rmq(0,0,s-1,w,e,seg,r);
    printf("%d\n",l);

  }

  return 0;}
