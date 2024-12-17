// Problem: ADADIG
// Submission ID: 26120460
// Language: 6204

#include<bits/stdc++.h>
using namespace std;
long long mod=1000000007;
long long fact[300001];
long long ans;
//long bin
long  long bin(long long a,long long p)
{ long long md1=p+2;
 if(p==0)
   return 1;
 long long rem=1;
 while(p>1)
  { if(p&1)
      {rem=(rem*a)%md1;}
    a=(a*a)%md1;
    p>>=1;
  }
 return (a*rem)%md1;
}
void fun(long long int dig,long long int n,long long pr,long long sum,long long den,long long int num)
{ if(sum>num)
   return;
  if(pr==1)
   { long long ones=num-sum;
     long long nume=fact[n+ones];
     den=(den*fact[ones])%mod;
     ans=(ans+(nume*bin(den,mod-2))%mod)%mod;
     return;
  }
 if(dig>9)
    return;
 long long int cnt=0;
 fun(dig+1,n,pr,sum,den,num);
 while(pr%dig==0)
 { cnt++;
    pr/=dig;
    fun(dig+1,n+cnt,pr,sum+(dig*cnt),(den*fact[cnt])%mod,num);
 }

}

int main()
{ fact[0]=1;
  for(long long int i=1;i<=300000;i++)
     fact[i]=(fact[i-1]*i)%mod;
 int t;
  scanf("%d",&t);
 // cin>>t;
  while(t--)
   {   long long n;
       scanf("%lld",&n);
      // cin>>n;
       ans=0;
       fun(2,0,n,0,1,n);
       printf("%lld\n",ans);

   }
return 0;}
