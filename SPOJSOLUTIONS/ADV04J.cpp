// Problem: ADV04J
// Submission ID: 26003541
// Language: 7284

#include<bits/stdc++.h>
using namespace std;
int a[1000001];
int main()
{ a[3]=3;
  a[4]=3;
  for(int i=5;i<=1000000;i++)
    a[i]=1+a[(i+1)/2];
  int t;
  cin>>t;
  while(t--)
  { int q;
    cin>>q;
    cout<<a[q]<<endl;
  }
return 0;}
