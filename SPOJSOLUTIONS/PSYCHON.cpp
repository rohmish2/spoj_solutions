// Problem: PSYCHON
// Submission ID: 26602829
// Language: 17104

#include <bits/stdc++.h>

using namespace std;

#define mx 10000040

bool a[mx];

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

int main()
{
    int t;
    sieve();
    //cin>>t;
    scanf("%d",&t);
    while(t--)
    {
        int n,even=0,odd=0;
        //cin>>n;
        scanf("%d",&n);
        //if(n==0||n==1)
           // printf("Ordinary Number\n");
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
            printf("Psycho Number\n");
        else
            printf("Ordinary Number\n");
    }
    return 0;
}