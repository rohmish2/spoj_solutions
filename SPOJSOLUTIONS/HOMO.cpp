// Problem: HOMO
// Submission ID: 26010712
// Language: 8240

#include<bits/stdc++.h>
using namespace std;
int main()
{ int q;
  int homo=0,het=0;
  map<int,int>mp;
  scanf("%d",&q);
  while(q--)
  {
      string a;
      int in;
      cin>>a>>in;
      if(a=="insert")
      { mp[in]++;
        if(mp[in]==2)
            homo++;
        if(mp[in]==1)
            het++;
      }
      else
      { if(mp[in]!=0)
          { mp[in]--;
            if(mp[in]==1)
               homo--;
            if(mp[in]==0)
               het--;


          }

      }
   if(homo==0&&het<2)
    cout<<"neither\n";
   else if(homo>0&&het<2)
     cout<<"homo\n";
   else if(homo==0&&het>=2)
     cout<<"hetero\n";
   else
     cout<<"both\n";

  }


  return 0;}
