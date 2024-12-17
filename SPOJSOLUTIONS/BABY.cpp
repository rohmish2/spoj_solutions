// Problem: BABY
// Submission ID: 26195770
// Language: 11964

#include<bits/stdc++.h>
using namespace std;
long  dp[16][66000];
long fun(int pos,long bitmask,vector<int>&a1,vector<int>&a2)
{ if(bitmask==0)
   return 0;
   if(dp[pos][bitmask]!=-1)
        return dp[pos][bitmask];
  dp[pos][bitmask]=100000;
  for(int i=0;i<a1.size();i++)
  {   long pp=(long)1<<(long)i;
      if(bitmask&pp)
        {
        dp[pos][bitmask]=min( dp[pos][bitmask],abs(pos-i)+abs(a1[i]-a2[pos])+fun(pos+1,bitmask-pp,a1,a2));
        }
  }

return dp[pos][bitmask];

}
int main()
{ int n;
    scanf("%d",&n);
  while(n)
  {
    vector<int>a1(n),a2(n);
    memset(dp,-1,sizeof(dp));
    for(int i=0;i<n;i++)
      scanf("%d",&a1[i]);
    for(int i=0;i<n;i++)
      scanf("%d",&a2[i]);
    long bitmask=(1<<n)-1;
    //cout<<bitmask<<endl;
    printf("%ld\n",fun(0,bitmask,a1,a2));
  //int n;
    scanf("%d",&n);
  }

return 0;}
