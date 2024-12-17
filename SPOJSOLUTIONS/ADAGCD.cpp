// Problem: ADAGCD
// Submission ID: 26124635
// Language: 380032

#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
long  a[10000000],sieve[10000001],v[10000001],q[10000001],v2[10000001];
long  bin(long  a,long  k)
{ if(k==0)
   return 1;
   if(k==1)
    return a;
   long  rem=1;
   while(k>1)
   { if(k&1)
       rem=(rem*a)%mod;
    a=(a*a)%mod;
    k>>=1;
   }
   return (a*rem)%mod;
}
void factor(long  a,long  k,set<long >&muth)
{    while(a!=1)
    {
      muth.insert(sieve[a]);
      if(v[sieve[a]]==k)
      {q[sieve[a]]++;}
      else
      {q[sieve[a]]=1;
       v[sieve[a]]=k;}
      a/=sieve[a];
    }
}
int main()
{ for(int i=1;i<=10000000;i++)
    sieve[i]=i;
    for(int i=2;i*i<=10000000;i++)
    if(sieve[i]==i)
        { //sieve[i]=i;
         for(int j=i*i;j<=10000000;j+=i)
         {if(sieve[j]==j)
          sieve[j]=i;}
        }

  int k;
  scanf("%d",&k);
   for(int i=1;i<=k;i++)
   { int m;
     scanf("%d",&m);
     set<long >ww;
     for(int k=1;k<=m;k++)
       { long int k1;

         scanf("%ld",&k1);
         if(k1!=1)
          {
          factor(k1,i,ww);
          }

       }
     //  printf("sqwerfgh\n");
       for(auto j:ww)
          { //cout<<j<<" "<<q[j]<<endl;
              if(i==1)
              {a[j]=q[j];
               v2[j]=i;
              }
            else
            { if(v2[j]==i-1)
                {a[j]=min(a[j],q[j]);
                 v2[j]=i;
                }

            }
          }
     //
   }
   long  ans=1;
   //printf("ex");
   for(long  i=2;i<=10000000;i++)
   {   //printf("%d\n",i);
       if(v2[i]==k)
       { // printf("%d %d\n",i,a[i]);
         ans=(ans*bin(i,a[i]))%mod;
       }
   }
   printf("%ld",ans);
return 0;}
