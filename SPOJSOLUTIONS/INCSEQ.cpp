// Problem: INCSEQ
// Submission ID: 25822750
// Language: 43980

#include<bits/stdc++.h>
#define mod 5000000
using namespace std;
long phen[52][100010];
void fen(int i,int k,long s)
{
    while(i<100010)
     {   phen[k][i]=(phen[k][i]+s)%mod;
         i+=(i&(-1*i));}
}
long  getsum(int i,int k)
{ long sum=0;
  while(i>0)
  {   sum=(sum+phen[k][i]%mod)%mod;
      i-=(i&(-1*i));
  }
 return sum;
}
int sum[52][11000];
int main()
{ int n,k;
  cin>>n>>k;
  vector<int>temp(n);
  for(int i=0;i<n;i++)
  {cin>>temp[i];
   temp[i]++;
   sum[1][i]=1;
  }
 if(k>1)
 {long ans=0;

  for(int i=1;i<=k-1;i++)
   for(int j=i-1;j<n;j++)
    {
        fen(temp[j],i,sum[i][j]);
        if(j+1<n)
        sum[i+1][j+1]=getsum(temp[j+1]-1,i);
        if(i==k-1)
        ans=(ans+sum[i+1][j+1])%mod;

    }

cout<<ans;}
else
cout<<n;

return 0;}
