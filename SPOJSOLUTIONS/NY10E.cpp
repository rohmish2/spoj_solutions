// Problem: NY10E
// Submission ID: 25602979
// Language: 4640

#include<bits/stdc++.h>
using namespace std;
long long a[65][10];
int main()
{ for(int i=0;i<=9;i++)
   a[1][i]=1;

  for(int i=2;i<=64;i++)
  {
      for(int j=0;j<10;j++)
      {
          if(j==0)
            a[i][j]=1;
          else
          a[i][j]=a[i][j-1]+a[i-1][j];
      }}
 long t;
 cin>>t;
 while(t--)
 { int q,n;

    cin>>q>>n;

    if(n==1)
        {cout<<q<<" "<<10<<endl;
        continue;}
    n--;
    long long ans=0;
  for(int i=10,j=0;i>=1;i--,j++)
  {
      ans+=a[n][j]*i;
  }

 cout<<q<<" "<<ans<<endl;
 }

return 0;}
