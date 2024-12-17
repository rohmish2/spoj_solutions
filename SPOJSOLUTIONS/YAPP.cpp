// Problem: YAPP
// Submission ID: 26026685
// Language: 4692

#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
long binary(long int m,long po)
{ long res=1;
  if(po==0)
        return 1;
  if(po==1)
        return m%mod;
  long rm=1;
  res=m%mod;
  while(po>1)
  { if(po%2==1)
      rm=(rm*res)%mod;
    //cout<<res<<"  "<<po<<endl;
    res=(res*res)%mod;
    po/=2;

  }
 //cout<<res<<" "<<rm;
 return (res*rm)%mod;
}
int main()
 { int t;
   cin>>t;
   while(t--)
    { long a;
       scanf("%ld",&a);
       printf("%ld\n",binary(2,a-1));
    }


return 0;}
