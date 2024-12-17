// Problem: GSS1
// Submission ID: 25534019
// Language: 11352

#include<bits/stdc++.h>
#define mini -10000000000000000
using namespace std;
void build(long long l,long long r,long long node,vector<long long>&a,vector<tuple<long long ,long long,long long,long long >>&s)
{
 if(l==r)
  {s[node]=make_tuple(a[l],a[l],a[l],a[l]);return;}
 else
  { long long m=(l+r)>>1;
    build(l,m,2*node+1,a,s);
    build(m+1,r,2*node+2,a,s);
    get<0>(s[node])=max(get<0>(s[2*node+1]),get<2>(s[2*node+1])+get<0>(s[2*node+2]));
    get<1>(s[node])=max(get<1>(s[2*node+2]),get<2>(s[2*node+2])+get<1>(s[2*node+1]));
    get<2>(s[node])=get<2>(s[2*node+1])+get<2>(s[2*node+2]);
    get<3>(s[node])=max(get<1>(s[2*node+1])+get<0>(s[2*node+2]),max(get<3>(s[2*node+1]),get<3>(s[2*node+2])));
  }
}
tuple<long long ,long long,long long,long long  > rq(long long l,long long r,long long sl,long long sr,long long node,vector<tuple<long long ,long long,long long,long long >>&s)
{ tuple<long long ,long long,long long,long long  >t=make_tuple(-100000000000,-100000000000,-100000000000,-100000000000),a,b,c;
  if(sl>r||sr<l)
       return t;
  if(sl>=l&&sr<=r)
    return s[node];
  long long mid=(sl+sr)>>1;
  a=rq(l,r,sl,mid,2*node+1,s);
  b=rq(l,r,mid+1,sr,2*node+2,s);

    get<0>(c)=max(get<0>(a),get<2>(a)+get<0>(b));
    get<1>(c)=max(get<1>(b),get<2>(b)+get<1>(a));
    get<2>(c)=get<2>(a)+get<2>(b);
    get<3>(c)=max(get<1>(a)+get<0>(b),max(get<3>(a),get<3>(b)));
    return c;

}
int main()
{ int t;
  //cin>>t;
  t=1;
  while(t--)
  {
    long long s;
    cin>>s;
    vector<long long>a(s);
    vector<tuple<long long ,long long,long long,long long >>seg(5*s);
    for(int i=0;i<s;i++)
        cin>>a[i];
    build(0,s-1,0,a,seg);
   // for(auto i:seg)
     //   cout<<max(get<0>(i),max(get<1>(i),get<2>(i)))<<" ";
    int q;
    cin>>q;
    while(q--)
     { long long a1,a2;
       cin>>a1>>a2;
       tuple<long long ,long long,long long ,long long>p=rq(a1-1,a2-1,0,s-1,0,seg);
       cout<<max(max(get<0>(p),get<3>(p)),max(get<1>(p),get<2>(p)))<<endl;

     }

  }

return 0;}
