// Problem: AMR10G
// Submission ID: 25501833
// Language: 4632

#include<bits/stdc++.h>
using namespace std;
int main()
{int t;
cin>>t;
while(t--)
{ long s,k;
  cin>>s>>k;
  vector<long long >v(s);

  for(auto i=0;i<s;i++)
        cin>>v[i];
  sort(v.begin(),v.end());
  long long m=INT_MAX;
  for(auto i=v.begin(),j=v.begin()+(k-1);j<v.end();i++,j++)
  {   //cout<<m<<" "<<*i<<" "<<*j<<endl;
      m=min(m,*(j)-*(i));

      if(m==0)
        break;
  }
cout<<m<<endl;
}

return 0;}
