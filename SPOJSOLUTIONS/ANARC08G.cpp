// Problem: ANARC08G
// Submission ID: 25844433
// Language: 4584

#include<bits/stdc++.h>
using namespace std;
int main()
{ int cnt=1;
  int n;
  cin>>n;
  while(n!=0)
  { vector<int>a(n,0);
   int x=0;
    for(int i=0;i<n;i++)
     for(int j=0;j<n;j++)
       {int t;
        cin>>t;
        x+=t;
        a[i]-=t;
        a[j]+=t;
        }
        int ans=0;
  for(auto j:a)
  {
    if(j>0)
        ans+=j;
  }

  cout<<cnt<<". "<<x<<" "<<ans<<endl;
  cnt++;
  cin>>n;
  }

return 0;}
