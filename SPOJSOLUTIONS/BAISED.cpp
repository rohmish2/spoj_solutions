// Problem: BAISED
// Submission ID: 25805895
// Language: 4672

#include<bits/stdc++.h>
using namespace std;
int main()
{ int t;
  cin>>t;
  while(t--)
  {   long n;
      cin>>n;
      vector<long int>a(n);
      long long ans=0;
      string qww;
      for(int i=0;i<n;i++)
        cin>>qww>>a[i];
      sort(a.begin(),a.end());
      //long long ans=0;
      for(int i=0;i<n;i++)
         ans+=abs(a[i]-(i+1));
      cout<<ans<<endl;

  }

return 0;}
