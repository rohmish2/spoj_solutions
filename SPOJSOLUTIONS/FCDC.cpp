// Problem: FCDC
// Submission ID: 26137371
// Language: 42704

#include<bits/stdc++.h>
using namespace std;
int a[10000001];
int main()
{ for(int i=0;i<10000001;i++)
   a[i]=i;
  for(int i=2;i*i<=10000000;i++)
        if(a[i]==i)
         for(int j=i*i;j<=10000000;j+=i)
             if(a[j]==j)
               a[j]=i;

  int a1,b1;
  cin>>a1>>b1;
  int k1=0,k2=0;
  while(a1>1)
  { int pr=a[a1];
    int cnt=0;
    while(a1%pr==0)
        {a1/=pr;
        cnt+=pr;}

    k1=max(k1,cnt);
  }
  while(b1>1)
  { int pr=a[b1];
    int cnt=0;
    while(b1%pr==0)
        {b1/=pr;
        cnt+=pr;}

    k2=max(k2,cnt);
  }
  cout<<max(k2-k1,0);
  //if(a1==0)



  return 0;}
