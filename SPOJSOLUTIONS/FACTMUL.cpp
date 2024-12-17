// Problem: FACTMUL
// Submission ID: 26117266
// Language: 17456

#include<bits/stdc++.h>
//#define md1 1000000007
using namespace std;
long bin(long a,long p)
{ long md1=p+2;
 if(p==0)
   return 1;
 long rem=1;
 while(p>1)
  { if(p&1)
      {rem=(rem*a)%md1;}
    a=(a*a)%md1;
    p>>=1;
  }
 return (a*rem)%md1;
}
long a1[10000001],b1[10000001],ans[10000001];
int main()
{ a1[0]=1;
  b1[0]=1;
  ans[0]=1;
  long fact1=1,fact2=1;
  long inv1=bin(186583,587115)%587117,inv2=bin(587117,186581)%186583;
    for(int i=1;i<=10000000;i++)
     {   fact1=(fact1*i)%186583;
         fact2=(fact2*i)%587117;
        // cout<<i<<" "<<fact1<<" "<<fact2<<endl;
         a1[i]=(a1[i-1]*fact1)%186583;
         b1[i]=(b1[i-1]*fact2)%587117;
           //cout<<i<<" "<<a1[i]<<" "<<b1[i]<<endl;
         ans[i]=((a1[i]*(587117*inv2)%109546051211)+(b1[i]*(186583*inv1)%109546051211))%109546051211;
         //cout<<i<<" "<<a1[i]<<" "<<b1[i]<<" "<<ans[i]<<endl;
      if(ans[i]==0)
        break;
     }
 int n;
 cin>>n;
 cout<<ans[n];

return 0;}
