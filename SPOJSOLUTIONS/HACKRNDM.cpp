// Problem: HACKRNDM
// Submission ID: 25889771
// Language: 4816

#include<bits/stdc++.h>
using namespace std;
int main()
{ int n,k;
  cin>>n>>k;
  vector<int>a(n);
  for(int  i=0;i<n;i++)
    cin>>a[i];
  sort(a.begin(),a.end());
 int cnt=0;
 for(auto i=a.begin();i<a.end();i++)
 {
 auto q=equal_range(a.begin(),a.end(),*i+k);
 cnt+=q.second-q.first;
}
cout<<cnt;
 return 0;}
