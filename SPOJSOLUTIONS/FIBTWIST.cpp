// Problem: FIBTWIST
// Submission ID: 26172375
// Language: 4804

#include<bits/stdc++.h>
//#define mod 1000000007
using namespace std;
long long int mod;
inline vector<vector<long long>> mul(vector<vector<long long>>a,vector<vector<long long>>temp)
{  vector<vector<long long>>t(4,vector<long long>(4,0));
    for(int i=0;i<4;i++)
        for(int j=0;j<4;j++)
          for(int k=0;k<4;k++)
            {
                t[i][j]=(t[i][j]+(a[i][k]*temp[k][j])%mod)%mod;
            }

    return t;
}
void power(vector<vector<long long>>&a,long long q)
{ if(q==1)
  return;
  vector<vector<long long int>>rem={ {1,0,0,0},{0,1,0,0},{0,0,1,0},{0,0,0,1}};
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
    scanf("%lld%lld",&q,&mod);
    if(q==0)
    printf("0\n");
    else
    { vector<vector<long long>>a={{0,1,0,0},{1,1,0,0},{0,1,1,0},{0,0,1,1}};
       power(a,q);
       long long ans=( (a[1][0])%mod  +(a[2][0])%mod + (a[3][0])%mod)%mod;

       printf("%lld\n",ans);

    }


  }

return 0;}
