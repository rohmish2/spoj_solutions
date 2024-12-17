// Problem: AE00
// Submission ID: 25462748
// Language: 4832

#include<bits/stdc++.h>
using namespace std;
int main()
{ long n,ans=0;
  cin>>n;
  for(int i=1;i*i<=n;i++)
  {
      long l,h;
      l=i*i-1;

      ans+=(n/i)-(l/i);
  }
  cout<<ans;
return 0;}
