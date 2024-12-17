// Problem: BEADS
// Submission ID: 25854445
// Language: 4792

#include<bits/stdc++.h>
using namespace std;
int main()
{ int t;
  cin>>t;
  while(t--)
  { string a;
    cin>>a;
    int tgt=a.size();
    a+=a;
    string best=a.substr(0,tgt);
    int ans=1;
    for(int i=1;i<tgt;i++)
      {  string q=a.substr(i,tgt);
         if(q<best)
          { ans=i+1;
            best=q;
          }

      }
   cout<<ans<<endl;
  }

return 0;}
