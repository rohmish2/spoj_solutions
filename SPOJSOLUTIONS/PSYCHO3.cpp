// Problem: PSYCHO3
// Submission ID: 26603015
// Language: 4784

#include <bits/stdc++.h>

using namespace std;

#define mx 10040

bool a[mx],q[mx];

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
    }}

int main()
{
    int t;
    sieve();
    for(int ni=0;ni<=1111;ni++)
    {
       int  n=ni,even=0,odd=0;
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
        if(even>odd)
            q[ni]=true;
       }

    scanf("%d",&t);
    while(t--)
    { int nn,kk;
      scanf("%d %d",&nn,&kk);
      vector<int>ps;
      for(int i=0;i<nn;i++)
      { int tm;
        scanf("%d",&tm);
        if(q[tm])
            {ps.push_back(tm);
            }
      }
  //sort(ps.begin(),ps.end());
      vector<bool>dp(kk+1,false);
     dp[0]=true;
     bool sol=false;
     for(int i=0;i<ps.size()&&!dp[kk];i++)
      {
        for(int j=kk;j>=ps[i];j--)
           {
                if(dp[j-ps[i]])
                 dp[j]=true;
           }

      }
    if(dp[kk])
        printf("Yes\n");
    else
        printf("No\n");

    }
    return 0;
}
