// Problem: GSS4
// Submission ID: 26639340
// Language: 7796

#include<bits/stdc++.h>
using namespace std;
void build_tree(int l,int r,int node,vector<long long int>&seg,vector<long long>&a)
{ if(l==r)
	{seg[node]=a[l];return ;}
  int mid=(l+r)>>1;
  build_tree(l,mid,2*node+1,seg,a);
  build_tree(mid+1,r,2*node+2,seg,a);
  seg[node]=seg[2*node+1]+seg[2*node+2];
}
long long query(int l,int r,int node,int sl,int sr,vector<long long>&s)
{ if(sl>r||sr<l)//not accesible 
	return 0;
  if(sl>=l&&sr<=r)//correct
  	return s[node]; 

  int mid=(sl+sr)>>1;
 long long q1=query(l,r,2*node+1,sl,mid,s);
   q1+=query(l,r,2*node+2,mid+1,sr,s);
 return q1;
}
void updatee(int l,int r,int sl,int sr,int node,vector<long long>&seg)
{ if(seg[node]==sr-sl+1)
	 return;
  if(sl>r||sr<l)
	return ; 

  if(sl==sr)
  {seg[node]=(long long )sqrt(seg[node]);return;}
  int mid=(sl+sr)>>1;
  updatee(l,r,sl,mid,2*node+1,seg);
  updatee(l,r,mid+1,sr,2*node+2,seg);
 seg[node]=seg[2*node+1]+seg[2*node+2];

}

int main()
{ 
  #ifndef ONLINE_JUDGE 
    freopen("gsin.txt","r",stdin);
    freopen("gsout.txt","w",stdout);
  #endif
   int n;
   int cas=1;

   while(scanf("%d",&n)!=EOF)
   { std::vector<long long int> v(n),s(4*n +10);
   	for(int i=0;i<n;i++){scanf("%lld",&v[i]);}
   build_tree(0,n-1,0,s,v);
    int q;
    scanf("%d",&q);

       printf("Case #%d:\n",cas++);
    while(q--)
    {
            int c,l,r;
            scanf("%d%d%d",&c,&l,&r);
            l--;
            r--;
            if(l>r) swap(l,r); ///l may be greater than r
            if(c==0) updatee(l,r,0,n-1,0,s);
            else printf("%lld\n",query(l,r,0,0,n-1,s));


    }
   
   printf("\n");}

return 0;}