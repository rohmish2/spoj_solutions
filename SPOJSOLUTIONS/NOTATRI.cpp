// Problem: NOTATRI
// Submission ID: 25584841
// Language: 4496

#include<bits/stdc++.h>
using namespace std;
int main()
{  int n;
   ios_base::sync_with_stdio(false);
    cin.tie(NULL);
  while(cin>>n)
  { int cnt=0;
  if(n==0)
break;
    vector<long int>a(n,0);
    for(int i=0;i<n;i++)
      cin>>a[i];
    sort(a.begin(),a.end());
    for(auto i=a.begin();i<a.end();i++)
        for(auto j=i+1;j<a.end();j++)
         { //cout<<cnt<<" "<<*i<<" "<<*j;
             cnt+=(a.end()-upper_bound(j,a.end(),((*i)+(*j))));
           //cout<<"new"<<cnt<<endl;
         }
  cout<<cnt<<endl;
  }
return 0;}
