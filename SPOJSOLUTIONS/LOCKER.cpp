// Problem: LOCKER
// Submission ID: 26089553
// Language: 4556

#include<bits/stdc++.h>

using namespace std;
long long m=1000000007;
long long fun(long long int base,long long int exp,long long q)
{ if(exp==0)
   return q;
  if(exp==1)
   return base*q;
  long long rem=q;
  while(exp>1)
  {
    if(exp%2==1)
       {rem=(rem*base)%m;}
    base=(base*base)%m;
    exp=exp>>1;}
 return (base*rem)%m;
}
int main()
{ int t;
  scanf("%d",&t);
  while(t--)
  { long long a;
    scanf("%lld",&a);
     if(a==1)
      printf("1\n");
     else if(a==2)
       printf("2\n");
     else if(a==3||a==4)
       printf("%lld\n",a);
     else
     { long long mul=1,k=3;
       long long pp=a/k;
       if(a%3==1)
            {mul=4;
              pp=(a-4)/k;}
       if(a%3==2)
         mul=2;

        printf("%lld\n",fun(k,pp,mul));

     }


  }

return 0;}
