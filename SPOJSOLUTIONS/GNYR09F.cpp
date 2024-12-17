// Problem: GNYR09F
// Submission ID: 25656669
// Language: 4532

#include<bits/stdc++.h>
using namespace std;
unsigned long long f1[101][100],f2[101][100];
int main()
{ f1[1][0]=1;
  f2[1][0]=1;
  for(int i=2;i<=100;i++)
  {
    for(int j=0;j<=i-1;j++)
     {
       f1[i][j]=f1[i-1][j]+f2[i-1][j];
        if(j==0)
         f2[i][j]=f1[i-1][j];
        else
         f2[i][j]=f1[i-1][j]+f2[i-1][j-1];

      //cou<<i<<"  "<<j<<" "<<f1[i][j]<<" "<<f2
     }
  }
    int t;
    cin>>t;
    while(t--)
    { int i,j,k;
      cin>>i>>j>>k;
      cout<<i<<" "<<f1[j][k]+f2[j][k]<<endl;
    }
return 0;}
