// Problem: GOODB
// Submission ID: 26207602
// Language: 4676

#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
long long C[301][301];

int main()
{  for (int i = 0; i <=300; i++)
    {
        for (int j = 0; j <= i; j++)
        {

            if (j == 0 || j == i)
                C[i][j] = 1;

            else
                C[i][j] = (C[i - 1][j - 1] + C[i - 1][j])%mod;
        }
    }

   int a;
     vector<int>q(3);
    scanf("%d%d%d%d",&a,&q[0],&q[1],&q[2]);
    long long ans=1;
    for(int i=0;i<3;i++)
      {
          ans=(ans*C[a][q[i]])%mod;
          a-=q[i];
      }
    printf("%lld\n",ans);



return 0;}
