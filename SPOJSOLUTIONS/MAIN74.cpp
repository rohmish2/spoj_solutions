// Problem: MAIN74
// Submission ID: 26172217
// Language: 4824

#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
inline vector<vector<long long>> mul(vector<vector<long long>>a,vector<vector<long long>>temp)
{  vector<vector<long long>>t(2,vector<long long>(2,0));
    t[0][0]=((a[0][0]*temp[0][0])%mod +(a[0][1]*temp[1][0])%mod)%mod;
    t[0][1]=((a[0][0]*temp[0][1])%mod +(a[0][1]*temp[1][1])%mod)%mod;
    t[1][0]=((a[1][0]*temp[0][0])%mod +(a[1][1]*temp[1][0])%mod)%mod;
    t[1][1]=((a[1][0]*temp[0][1])%mod +(a[1][1]*temp[1][1])%mod)%mod;
    return t;
}
void power(vector<vector<long long>>&a,long long q)
{ if(q==1)
  return;
  vector<vector<long long int>>rem={ {1,0},{0,1}};
  while(q!=1)
  {
   if(q&((long long)1))
   { rem=mul(rem,a);}
     a=mul(a,a);
     q/=2;
  }
a=mul(rem,a);
}

int main()
{ int t;
  scanf("%d",&t);
  while(t--)
  { long long q;
    scanf("%lld",&q);
    if(q==0)
    printf("0\n");
    else if(q==1)
    printf("2\n");
    else
    { vector<vector<long long>>a={{0,1},{1,1}};
      if(q==2)
      printf("5\n");
      else if(q==3)
      printf("8\n");
      else
      { power(a,q-2);
        long long ans=((a[0][0]*5)%mod +(a[1][0]*8)%mod)%mod;
        printf("%lld\n",ans);
      }
    }


  }

return 0;}
