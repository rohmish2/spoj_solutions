// Problem: RPLN
// Submission ID: 25645311
// Language: 6412

#include<bits/stdc++.h>
using namespace std;
long long seg[500000];
long long arr[100100];
 long int n,q;
void build(long l,long r,long node)
{
if(l==r)
   {seg[node]=arr[l];
   return;}
 long mid=(l+r)>>1;
 build(l,mid,2*node+1);
 build(mid+1,r,2*node+2);
 seg[node]=min(seg[2*node+1],seg[2*node+2]);
}
long long  rmq(long l,long r,long sl,long sr,long node)
{ if(sl>r||sr<l)
  return 11000000001;
  if(sl>=l&&sr<=r)
        return seg[node];
  long mid=(sl+sr)>>1;
  return min(rmq(l,r,sl,mid,2*node+1),rmq(l,r,mid+1,sr,2*node+2));

}
int main()
{ int t;
  ios_base::sync_with_stdio(false);
    cin.tie(NULL);
cin>>t;
int b=1;
while(t--)
{  cout<<"Scenario #"<<b<<":"<<endl;
   b++;
   cin>>n>>q;
   for(int i=0;i<n;i++)
   {cin>>arr[i];}
   build(0,n-1,0);
   while(q--)
    { long q1,q2;
      cin>>q1>>q2;
      cout<<rmq(q1-1,q2-1,0,n-1,0)<<"\n";

    }

}
return 0;}
