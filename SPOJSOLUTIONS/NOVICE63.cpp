// Problem: NOVICE63
// Submission ID: 26597744
// Language: 4824

#include<bits/stdc++.h>
using namespace std;



long long int binomialCoeff(long long int n, long long int k)
{
    long long int C[100][100];
    long long int i, j;
     for (i = 0; i <= n; i++)
    {
        for (j = 0; j <= min(i, k); j++)
        {
            if (j == 0 || j == i)
                C[i][j] = 1;

            else
                C[i][j] = C[i - 1][j - 1] +
                          C[i - 1][j];
        }
    }

    return C[n][k];
}


int main()
{ vector<long long int>a(62,0);
   a[0]=0;
   a[1]=1;
   a[2]=1;
  for(int i=3;i<62;i++)
  {a[i]=a[i-1];
   if(i%2==0)
   {
       a[i]+=binomialCoeff(i-1,i/2);
   }
  }
  map<long long ,int>con;
  con[1]=0;
  for(long long j=1;j<=61;j++)
  {
      con[ (long long)((long long)1<<j)]=j;
  }
 int t;
  cin>>t;
  while(t--)
  {
    long long ss;
     cin>>ss;
     int tt=con[ss];
     cout<<a[tt]<<endl;
  }
}
