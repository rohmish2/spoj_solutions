// Problem: DIVFACT3
// Submission ID: 26140520
// Language: 80980

#include<bits/stdc++.h>
using namespace std;
long long bin(long long a,long long b ,int modi)
{ if(b==1)
   return a%modi;
  long long rem=1;
  while(b>1)
    { if(b&1)
      rem=(rem*a)%modi;
      a=(a*a)%modi;
      b=b>>1;
    }
return (a*rem)%modi;
}
int main()
{ vector<long long int>prime;
  vector<bool>sieve(99999999,false);
  for(int i=3;i*i<99999999;i++)
        {if(sieve[i]==false)
         {for(int j=i*i;j<99999999;j+=i)
            sieve[j]=true;}}
 prime.push_back(2);
  prime.push_back(3);
  for(int i=1;i*6<99999999;i++)
  { long long int tgt=i*6;

      if(!sieve[tgt-1])
        {prime.push_back(tgt-1);}
      if(!sieve[tgt+1])
        {prime.push_back(tgt+1);}
      }

   //for(auto i:)
  int t;
scanf("%d",&t);
while(t--)
{long long  int a,b;
  scanf("%lld%lld",&a,&b);
    	
   long long ans=1;
   int i;
  for(i=0;prime[i]*prime[i]<=a;i++)
   {
    long long int div=prime[i];
    long long toadd=0;
       while(a>=div)
       { toadd+=a/div;
         div*=prime[i];
       }
       ans=(ans*(toadd+1))%b;}
        int tgt=a/prime[i];

     //cout<<ans<<endl;

     for( ;1;)
     { long long int high=prime.size()-1;
        long long int low=i,mid;
        long long int ars;
        while(high!=low)
        {
          mid= (high+low)>>1;
          //cout<<low<<" "<<high<<" "<<mid<<" "<<a/prime[mid]<<endl;
         if((a/prime[mid])<(a/prime[i]))
            { high=mid;}
          else
           { ars=mid;

             low=mid+1;}
        }
 low=ars;

       int cnt=low-i+1;
       //cout<<prime[low]<<" "<<tgt+1<<" "<<cnt<<"  "<<bin(tgt+1,cnt,b)<<" "<<ans<<endl;
             ans=(ans*bin(tgt+1,cnt,b))%b;


       i=low+1;
       if(i<prime.size())
       tgt=a/prime[i];
       else
       break;
       if(tgt==0)
        break;

     }

     printf("%lld\n",(ans));

}

 return 0;}
