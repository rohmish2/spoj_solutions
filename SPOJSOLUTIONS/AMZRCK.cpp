// Problem: AMZRCK
// Submission ID: 26002902
// Language: 4840

#include<bits/stdc++.h>
using namespace std;

int main()
{ vector<long>a;
  a.push_back(1);
  a.push_back(2);
  a.push_back(3);
  for(int i=3;a[i-1]<=1000000000;i++)
    { //cout<<i<<endl;
      a.push_back(a[i-2]+a[i-1]);
    }
  int t;
   cin>>t;
   while(t--)
   { int k;
     cin>>k;
     cout<<a[k]<<endl;

   }
return 0;}
