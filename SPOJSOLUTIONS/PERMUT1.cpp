// Problem: PERMUT1
// Submission ID: 25601018
// Language: 4592

#include <iostream>

using namespace std;
long long a[13][1000];
int main()
{  a[1][0]=1;
   a[1][1]=0;
   for(int i=2;i<=12;i++)
    {
      for(int j=0;j<=((i)*(i-1))/2;j++)
        {  //cout<<j<<"qq  "<<((i)*(i-1))/2<<endl;
            if(j==0)
                a[i][j]=1;
            else
            { for(int k=j,f=1;f<=i&&k>=0;k--,f++)
               {   // cout<<k<<endl;
                   a[i][j]+=a[i-1][k];
               }
            }
        }

    }
   int n,k,t;
   cin>>t;
   while(t--)
   {cin>>n>>k;
   cout<<a[n][k]<<endl;}

    return 0;
}
