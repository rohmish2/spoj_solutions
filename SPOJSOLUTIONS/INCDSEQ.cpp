// Problem: INCDSEQ
// Submission ID: 26606227
// Language: 12620

#include<bits/stdc++.h>
#define mod 5000000
using namespace std;
// dp[n][k]=sum of all p<n dp[p][k-1];
long int sum(vector<long int>&fen,long int in)
{ long int s=0;
    while(in>0)
    {   s=(s+fen[in])%mod;
        in-=(in&-in);
    }
return s;
}
void putt(vector<long int>&fen,int in,long int val)
{ while(in<=10100)
   { fen[in]=(fen[in]+val)%mod;
     in+=(in&-in);
   }
}

int  main()
{ int n,k;
  cin>>n>>k;
  vector<vector<long int>>fen(k+1,vector<long int>(10101,0)),vec(10100,vector<long>(k+1,0));
  vector<long long int>a(n);
  set<long long>q;
  for(int i=0;i<n;i++)
    {cin>>a[i];
    q.insert(a[i]);}

  unordered_map<long long,int>mp;
  int sp=2;
  for(auto i:q)
  mp[i]=sp++;
  long ans=0;
for(int i=0;i<n;i++)
    a[i]=mp[a[i]];
  for(int i=0;i<n;i++)
    for(int j=1;j<=k;j++)
     { long inc= j==1?1:sum(fen[j-1],a[i]-1);
       inc=(inc -vec[a[i]][j]+mod)%mod;
       putt(fen[j],a[i],inc);
       if(j==k)ans=(ans+inc)%mod;
       vec[a[i]][j]=(vec[a[i]][j]+inc)%mod;
     }

  cout<<ans;
  return 0;}
