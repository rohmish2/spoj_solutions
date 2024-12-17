// Problem: BABTWR
// Submission ID: 25894174
// Language: 4388

#include<bits/stdc++.h>
using namespace std;
struct block
{ int l,b,h;
  block(int a,int br,int c)
     {  l=max(a,br);
        b=min(a,br);
        h=c;
     }
};
int main()
{ int n;
 while(1)
  {cin>>n;
  if(n==0)
    return 0;
  vector<block>a;

  while(n--)
  { int q,w,e;
    cin>>q>>w>>e;
    a.push_back(block(q,w,e));
    a.push_back(block(w,e,q));
    a.push_back(block(q,e,w));
  }
sort(a.begin(),a.end(),[](block z,block y){
     if(z.l!=y.l)
        return z.l>y.l;
     return z.b>y.b;
     });

vector<int>maxi(a.size());
maxi[0]=a[0].h;
int ans=maxi[0];
for(int i=0;i<a.size();i++)
{ int m=a[i].h;
  for(int j=i-1;j>=0;j--)
    {
      if(a[j].l>a[i].l&&a[j].b>a[i].b)
         m=max(m,maxi[j]+a[i].h);

    }
 maxi[i]=m;
 ans=max(m,ans);
}
cout<<ans<<endl;
  }
return 0;}
