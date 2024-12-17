// Problem: ALCATRAZ1
// Submission ID: 25619456
// Language: 4712

#include<bits/stdc++.h>
using namespace std;
int main()
{ int t;
 cin>>t;
 while(t--)
 {
  string a;
  long long ans=0;
  cin>>a;
  for(auto i:a)
  {
      ans+=i-'0';
  }
 cout<<ans<<endl;


 }

return 0;}
