// Problem: PAIRSUM
// Submission ID: 26591877
// Language: 4848

#include<bits/stdc++.h>
using namespace std;
int main()
{ ios_base::sync_with_stdio(false);
    cin.tie(NULL);
  int n;
  cin>>n;
  vector<unsigned long long >prefix(n,0);
  vector<unsigned long long> dp(n,0);
  for(int i=0;i<n;i++)
    { unsigned long long tmp;
      cin>>tmp;
      if(i==0)
         {prefix[i]=tmp;dp[i]=tmp*tmp;}
      else
        { prefix[i]=prefix[i-1]+tmp;
         dp[i]=(tmp*tmp)+dp[i-1]+tmp*prefix[i-1];
        }
     }
    int q;
     cin>>q;
     while(q--)
     { int l,r;
       cin>>l>>r;
       if(l==0)
        cout<<dp[r]<<endl;
       else
       {unsigned long long s=dp[r]-dp[l-1]-(prefix[l-1]*(prefix[r]-prefix[l-1]));
       cout<<s<<endl;}
     }

  return 0;}
