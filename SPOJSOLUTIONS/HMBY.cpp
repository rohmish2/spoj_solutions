// Problem: HMBY
// Submission ID: 26606572
// Language: 4812

#include<bits/stdc++.h>
using namespace std;
int main()
{ int a,b,c,d,e,w;
  cin>>a>>b>>c>>d>>e>>w;
  int sum=2*a +4*b +8*c +16*d +32*d;

  if(w<=sum&&w%2==0)
    cout<<"YES";
  else
    cout<<"NO";
  return 0;}
