// Problem: GERGOVIA
// Submission ID: 25653813
// Language: 4516

#include<bits/stdc++.h>
using namespace std;
int main()
{ int t;
  //cin>>t;
  while(1)
  { int n;
    cin>>n;
    if(n==0)
        return 0;
    long long int prev=0,work=0;
    for(int i=0;i<n;i++)
    { int k;
      cin>>k;
    work+=abs(prev);
        prev+=k;
    //cout<<prev<<" "<<work<<endl;
    }
  cout<<work<<endl;
  }
return 0;}
