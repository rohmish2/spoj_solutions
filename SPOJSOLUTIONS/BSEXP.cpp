// Problem: BSEXP
// Submission ID: 26194493
// Language: 4852

#include <bits/stdc++.h>
using namespace std;
unsigned long long expo( unsigned long long a,unsigned long long z)
{ if(z==0)
  return 1;
  if(z==1)
  return a;
unsigned  long long rem=1;
  while(z>1)
  { if(z%2==1)
       rem*=a;
    a*=a;
    z/=2;
    }
return a*rem;
}
/*long long fact(long long a)
{ long long int to=2;
 long long int z=0;

    while(a%to==0)
        {a/=to;
        z++;}

   for(long long int i=3;expo(i,z)<=a&&i*i<=a;i+=2)
        {  if(a%i==0)
            { long long  int x=0;
              while(a%i==0)
                {a/=3;
                x++;}
              if(x>z)
                {z=x;
                to=i;}
            }
        }


 if(z==0)
    return a;
 return to;


}*/

int main()
{  vector<bool>seive(1000001,false);
    for(int i=2;i*i<1000001;i++)
         if(seive[i]==false)
           for(int j=i*i;j<=1000000;j+=i)
             seive[j]=true;
vector<unsigned long long int>prime;
     for(unsigned long long  i=2;i<=1000000;i++)
         if(!seive[i])
           prime.push_back(i);
//cout<<prime.size();
int t;
 scanf("%d",&t);
 while(t--)
 {unsigned long long a;
  scanf("%llu",&a);
  unsigned long long ans=a,to=1;
   for(int i=0;i<prime.size()&&prime[i]*prime[i]<=a&&expo(prime[i],to)<=a;i++)
    { if(a%prime[i]==0)
         {unsigned  long long q=0;
          while(a%prime[i]==0)
             { a/=prime[i];
                q++;
             }

           if(q>to)
            {ans=prime[i];
            to=q;}
           if(q==to&&ans>prime[i])
             ans=prime[i];

         }
    }
  if(a>=2)
  { if(to==1&&ans>a)
       ans=a;
  }
  printf("%llu\n",ans);

 }



return 0;
}
