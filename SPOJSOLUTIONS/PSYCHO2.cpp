// Problem: PSYCHO2
// Submission ID: 26603597
// Language: 31252

#include <bits/stdc++.h>

using namespace std;

#define mx 10000040

bool a[mx];
int ze[4000001];
vector <int> v;

void sieve()
{
    memset(a,true,sizeof(a));
    for(int i=4;i<=mx;i+=2)
        a[i]=false;
    for(int i=3;i<=sqrt(mx);i+=2)
    {
        if(a[i]==true)
        {
            for(int j=i*i;j<=mx;j+=i)
            {
               a[j]=false;
            }
        }
    }
    v.push_back(2);
    for(int i=3;i<=mx;i+=2)
    {
        if(a[i]==true)
            v.push_back(i);
    }
}
bool fun(int ni)
{
    int n=ni,even=0,odd=0;

        for(int i=0;v[i]<=sqrt(n);i++)
        {
            if(n%v[i]==0)
            {
                int coun=0;
                while(n%v[i]==0)
                {
                    n/=v[i];
                    coun++;
                }
                if(coun%2==0)
                   even++;
                else
                    odd++;
            }
        }
        if(n>1)
            odd+=1;
        return even>odd;


}
int main()
{
    int t;
    sieve();


    for(int i=1;i<4000001;i++)
    { long n=i,mul=5;
      int cnt=0;
      while(mul<=n)
       {cnt+=n/mul;
       mul*=5;}
      ze[i]=cnt;
    }
    vector<vector<int>>dig(10);
    dig[0].push_back(0);
    dig[1].push_back(1);
    dig[5].push_back(5);
    dig[6].push_back(6);
    dig[9].push_back(9);dig[9].push_back(1);
    dig[2].push_back(2);dig[2].push_back(4);dig[2].push_back(8);dig[2].push_back(6);
    dig[3].push_back(3);dig[3].push_back(9);dig[3].push_back(7);dig[3].push_back(1);
    dig[4].push_back(4);dig[4].push_back(6);
    dig[8].push_back(8);dig[8].push_back(4);dig[8].push_back(2);dig[8].push_back(6);
    dig[7].push_back(7);dig[7].push_back(9);dig[7].push_back(3);dig[7].push_back(1);
    scanf("%d",&t);
    while(t--)
    { long long k,b,p;
      scanf("%lld %lld %lld",&k,&b,&p);
      int process=ze[k];
       int sss=b%10;
      int tgt=1;
      if(p!=0)
        tgt=dig[sss][ ((p-1)%dig[sss].size())];
      if(fun(process*tgt))
      printf("Psycho Number\n");
      else
      printf("Ordinary Number\n");




    }
    return 0;
}
