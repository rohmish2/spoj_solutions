// Problem: OPCPIZZA
// Submission ID: 25876739
// Language: 4644

#include<bits/stdc++.h>
using namespace std;
int main()
{ int t;
  cin>>t;
  while(t--)
  { int n,s;
    cin>>n>>s;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    cin>>v[i];
    sort(v.begin(),v.end());
    int ans=0;
    for(auto i=v.begin();i<v.end();i++)
    {  if(i==v.end())
        break;
     auto k=equal_range(i+1,v.end(),s-*i);
     ans+=(k.second-k.first);
    }

  cout<<ans<<endl;
  }
return 0;}
