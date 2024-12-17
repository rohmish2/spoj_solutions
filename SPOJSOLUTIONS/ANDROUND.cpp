// Problem: ANDROUND
// Submission ID: 26020994
// Language: 5484

#include<bits/stdc++.h>
using namespace std;
void build(int idx,int l,int r,vector<int>&seg,vector<int>&b)
{ if(l>r)
    return;
 if(l==r)
    {seg[idx]=b[l];
     return ;}
 else
    {int mid=(l+r)>>1;
    build(2*idx+1,l,mid,seg,b);
    build(2*idx+2,mid+1,r,seg,b);
    seg[idx]=seg[2*idx+1]&seg[2*idx+2];
    }
}
int rmq(int idx,int l,int r,int al,int ar,vector<int>&seg)
{ if(l>ar||r<al||l>r)
    return 4294967295;
  if(l>=al&&r<=ar)
    return seg[idx];

  int mid=(l+r)>>1;
  return (rmq(2*idx+1,l,mid,al,ar,seg) & rmq(2*idx+2,mid+1,r,al,ar,seg));
}
int main()
{ int t;
  scanf("%d",&t);
  while(t--)
  { int s,k;
    scanf("%d%d",&s,&k);
    vector<int>a(s),b(3*s);
    for(int i=0;i<s;i++)
        scanf("%d",&a[i]);
    int idx=0;
    for(int i=0;i<3;i++)
        for(int j=0;j<s;j++)
            b[idx++]=a[j];
     vector<int>seg(15*s);
     build(0,0,3*s-1,seg,b);
     if(2*k +1>=s)
     { int y=rmq(0,0,3*s-1,0,s-1,seg);
       for(int i=0;i<s;i++)
        printf("%d ",y);
     }
    else
     {
       for(int i=0;i<s;i++)
        {
          printf("%d ",rmq(0,0,3*s-1,s+i-k,s+i+k,seg));
        }


     }

printf("\n");


  }

return 0;}
