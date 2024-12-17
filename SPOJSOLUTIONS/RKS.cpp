// Problem: RKS
// Submission ID: 26151611
// Language: 4800

#include<bits/stdc++.h>
using namespace std;
map<int,int>k;
map<int,int>p;
int main()
{ int n,c;
  cin>>n>>c;
  vector<int>a(n);

  for(int i=0;i<n;i++)
  { cin>>a[i];
    k[a[i]]++;
    if(p.find(a[i])==p.end())
        p[a[i]]=i;
  }

  stable_sort(a.begin(),a.end(),[](int a1,int b){
              if(k[a1]!=k[b])
              return k[a1]>k[b];
              return p[a1]<p[b];
              });
  for(auto i:a)
     cout<<i<<" ";
  return 0;}
