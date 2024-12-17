// Problem: DSUBSEQ
// Submission ID: 25606746
// Language: 11724

#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
long  a[26];
int  main()
{ long t;
  cin>>t;
  while(t--)
  { memset(a,-1,sizeof(a));
    string s;

    vector<long>ans(1000000,0);

    ans[0]=1;

    cin>>s;

   for(int i=1;i<=s.size();i++)
      { ans[i]=(ans[i-1]+ans[i-1])%mod;
        if(a[s[i-1]-'A']!=-1)
        ans[i]=(ans[i]-(ans[a[s[i-1]-'A']])+mod)%mod;

        a[s[i-1]-'A']=i-1;
      }
    printf("%lld\n",ans[s.size()]%mod);
  }

return 0;}
