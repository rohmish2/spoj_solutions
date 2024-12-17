// Problem: ADATAXES
// Submission ID: 26133211
// Language: 223212

#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
void build(int node,int l,int r,vector<int>&a,vector<vector<long  >>&seg,vector<vector< long>>&seg2)
{ if(l==r)
     { seg[node].push_back(a[r]);
       seg2[node].push_back(a[r]);
       return ;
     }
  int mid=(l+r)>>1;
  build(2*node+1,l,mid,a,seg,seg2);

  build(2*node+2,mid+1,r,a,seg,seg2);
  int ptr1=0,ptr2=0;
  while(ptr1<seg[2*node+1].size()&&ptr2<seg[2*node+2].size())
    { if(seg[2*node+1][ptr1]<=seg[2*node+2][ptr2])
         {seg[node].push_back(seg[2*node+1][ptr1]);
          if(seg2[node].size()==0)
                seg2[node].push_back(seg[2*node+1][ptr1]);
          else
                seg2[node].push_back(  (seg[2*node+1][ptr1] * seg2[node][seg2[node].size()-1])%mod);
         ptr1++;
         }
      else
         {seg[node].push_back(seg[2*node+2][ptr2]);

          if(seg2[node].size()==0)
                seg2[node].push_back(seg[2*node+2][ptr2]);
          else
                seg2[node].push_back((seg[2*node+2][ptr2]*seg2[node][seg2[node].size()-1])%mod);
         ptr2++;
         }
    }
  while(ptr1<seg[2*node+1].size())
    {seg[node].push_back(seg[2*node+1][ptr1]);
          if(seg2[node].size()==0)
                seg2[node].push_back(seg[2*node+1][ptr1]);
          else
                seg2[node].push_back((seg[2*node+1][ptr1]*seg2[node][seg2[node].size()-1])%mod);

                ptr1++;}
 while(ptr2<seg[2*node+2].size())
  {seg[node].push_back(seg[2*node+2][ptr2]);

          if(seg2[node].size()==0)
                seg2[node].push_back(seg[2*node+2][ptr2]);
          else
                seg2[node].push_back((seg[2*node+2][ptr2]*seg2[node][seg2[node].size()-1])%mod);
                ptr2++;}

  

}
long   rmq(int l,int r,int sl,int sr,int node,int k,vector<vector<long  int>>&seg,vector<vector<long int>>&seg2)
{  if(sl>r||sr<l)
     return 1;
   if(sl>=l&&sr<=r)
     { int ind=upper_bound(seg[node].begin(),seg[node].end(),k)-seg[node].begin();
       if(ind>0)
       return seg2[node][ind-1];
       return 1;
     }
   int mid=(sl+sr)>>1;
   long int ans=1;
   ans=(rmq(l,r,sl,mid,2*node+1,k,seg,seg2) *rmq(l,r,mid+1,sr,2*node+2,k,seg,seg2))%mod;
   return ans;
}
int main()
{ int n,q;
  scanf("%d %d",&n,&q);
  vector<vector< long int>>seg(5*n),seg1(5*n);
  vector<int>a(n);
  for(int i=0;i<n;i++)
     scanf("%d",&a[i]);
  build(0,0,n-1,a,seg,seg1);
  while(q--)
  { int t1,t2,t3;
    scanf("%d%d%d",&t1,&t2,&t3);
    printf("%ld\n",rmq(t1,t2,0,n-1,0,t3,seg,seg1));


  }

  return 0;}
