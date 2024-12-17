// Problem: EKO
// Submission ID: 25587413
// Language: 18880

#include<bits/stdc++.h>
using namespace std;
bool check(vector<long long >a,long long h,long long mini)
{ long long init=0;
    for(auto i:a)
{   if(i>h)
     init+=i-h;
     if(init>=mini)
        return true;
}
    return false;
}
int main()
{ long long n,m,h,l,mid,ans=0;
  cin>>n>>m;
  vector<long long>v(n);
  for(int i=0;i<n;i++)
    cin>>v[i];
  h=*max_element(v.begin(),v.end());
  l=0;
  while(h>=l)
  { mid=(l+h)>>1;
   //cout<<h<<" "<<l<<endl;
   if(check(v,mid,m))
      {  ans=max(mid,ans);
          l=mid+1;}
   else
      h=mid-1;
  }
  cout<<ans;

return 0;}
