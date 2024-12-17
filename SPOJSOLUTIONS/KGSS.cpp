// Problem: KGSS
// Submission ID: 25534978
// Language: 11884

#include<bits/stdc++.h>
using namespace std;
void build(long long l,long long r,long long node,vector<long long>&a,vector<pair<long long,long long>>&s)
{ if(l==r)
   {
     s[node]=make_pair(a[l],0);
     return;
   }
  long long mid=(l+r)>>1;
  build(l,mid,2*node+1,a,s);
  build(mid+1,r,2*node+2,a,s);
  long long arr[4];
  arr[0]=s[2*node+1].first;
  arr[1]=s[2*node+1].second;
  arr[2]=s[2*node+2].first;
  arr[3]=s[2*node+2].second;
  sort(arr,arr+4);
  s[node]=make_pair(arr[2],arr[3]);

}
pair<long long,long long>rq(long long l,long long r,long long sl,long long sr,long long node,vector<pair<long long,long long>>&s)
{ if(sl>r||sr<l)
  {return make_pair(0,0);}
  if(sl>=l&&sr<=r)
   return s[node];
  long long m=(sl+sr)>>1;
  pair<long long,long long>q,w;
  q=rq(l,r,sl,m,2*node+1,s);
  w=rq(l,r,m+1,sr,2*node+2,s);
  long long arr[4];
  arr[0]=q.first;
  arr[1]=q.second;
  arr[2]=w.first;
  arr[3]=w.second;
  sort(arr,arr+4);
  return make_pair(arr[2],arr[3]);
}
void update(long long l,long long r,long long in,long long val,long long node,vector<pair<long long,long long>>&s,vector<long long>&a)
{
    if(l==r&&l==in)
     {a[in]=val;
     s[node]=make_pair(val,0);
     return ;}
     long long mid=(l+r)>>1;
     if(in>=l&&in<=mid)
            update(l,mid,in,val,2*node+1,s,a);
     else
            update(mid+1,r,in,val,2*node+2,s,a);
     long long arr[4];
  arr[0]=s[2*node+1].first;
  arr[1]=s[2*node+1].second;
  arr[2]=s[2*node+2].first;
  arr[3]=s[2*node+2].second;
  sort(arr,arr+4);
  s[node]=make_pair(arr[2],arr[3]);

}
int main()
{ long long s;
  cin>>s;
  vector<long long>a(s);
  vector<pair<long long ,long long>>seg(5*s);
  for(int i=0;i<s;i++)
    cin>>a[i];
    build(0,s-1,0,a,seg);
  long long q;
  cin>>q;
  while(q--)
  { string p;
    cin>>p;
    if(p=="Q")
    {
     long long l,h;
     cin>>l>>h;
     pair<long long,long long>z=rq(l-1,h-1,0,s-1,0,seg);
     cout<<z.first+z.second<<endl;
    }
    else
    {long long l,h;
     cin>>l>>h;
     update(0,s-1,l-1,h,0,seg,a);
    }
  }
return 0;}
