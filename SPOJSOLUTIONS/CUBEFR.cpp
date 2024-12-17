// Problem: CUBEFR
// Submission ID: 25608561
// Language: 19180

#include<bits/stdc++.h>
using namespace std;
long position[1000001],iscube[1000001];
int main()
{ for(int i=2;i<=100;i++)
     {
      for(int j=i*i*i;j<=1000000;j+=i*i*i)
      {
        iscube[j]=1;
      }
     }
  long cnt=1;
  for(int j=1;j<=1000000;j++)
  {
    if(iscube[j]==0)
    {
        position[j]=cnt++;}
  }
int t;
cin>>t;
for(int i=1;i<=t;i++)
{ long n;
  cin>>n;
  if(iscube[n]==0)
  printf("Case %d: %ld\n",i,position[n]);
  else
  printf("Case %d: Not Cube Free\n",i);
}
return 0;}
