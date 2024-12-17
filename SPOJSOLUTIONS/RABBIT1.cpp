// Problem: RABBIT1
// Submission ID: 26066806
// Language: 4624

#include<bits/stdc++.h>
using namespace std;
long long int power(long long n,long long mod)
{ vector<vector<long long>>a={{0,1},{1,1}},rem={{1,0},{0,1}};
  vector<long long>q={1,2};
  if(n==0)
    return 1;
  while(n>1)
    { if(n%2==1)
        {vector<vector<long long>>temp(2,vector<long long>(2));
            temp[0][0]=((rem[0][0]*a[0][0])%mod +(rem[0][1]*a[1][0])%mod)%mod;
            temp[0][1]=((rem[0][0]*a[0][1])%mod +(rem[0][1]*a[1][1])%mod)%mod;
            temp[1][0]=((rem[1][0]*a[0][0])%mod +(rem[1][1]*a[1][0])%mod)%mod;
            temp[1][1]=((rem[1][0]*a[0][1])%mod +(rem[1][1]*a[1][1])%mod)%mod;
             rem=temp;
             }
       vector<vector<long long>>temp(2,vector<long long>(2));
            temp[0][0]=((a[0][0]*a[0][0])%mod +(a[0][1]*a[1][0])%mod)%mod;
            temp[0][1]=((a[0][0]*a[0][1])%mod +(a[0][1]*a[1][1])%mod)%mod;
            temp[1][0]=((a[1][0]*a[0][0])%mod +(a[1][1]*a[1][0])%mod)%mod;
            temp[1][1]=((a[1][0]*a[0][1])%mod +(a[1][1]*a[1][1])%mod)%mod;
            a=temp;
      n/=2;
    }
  vector<vector<long long>>temp(2,vector<long long>(2));
            temp[0][0]=((rem[0][0]*a[0][0])%mod +(rem[0][1]*a[1][0])%mod)%mod;
            temp[0][1]=((rem[0][0]*a[0][1])%mod +(rem[0][1]*a[1][1])%mod)%mod;
            temp[1][0]=((rem[1][0]*a[0][0])%mod +(rem[1][1]*a[1][0])%mod)%mod;
            temp[1][1]=((rem[1][0]*a[0][1])%mod +(rem[1][1]*a[1][1])%mod)%mod;
             //rem=temp;
 return ((q[0]*temp[0][0])%mod +(q[1]*temp[1][0])%mod)%mod;


 return 1;}
int main()
{ vector<long long>p2(21);
   p2[0]=1;
   for(int i=1;i<=20;i++)
     p2[i]=p2[i-1]*2;
  int t;
  scanf("%d",&t);
  while(t--)
  { long long a,b;
    scanf("%lld%lld",&a,&b);
    printf("%lld\n",power(a-1,p2[b]));
  }

  return 0;}
