// Problem: UPDATEIT
// Submission ID: 25584208
// Language: 4512

#include<bits/stdc++.h>
using namespace std;
int a[100010],s[100010];
int main()
{ int t;
  cin>>t;
  while(t--)
  { memset(a,0,sizeof(a));
    memset(s,0,sizeof(s));
    long n,q;
    cin>>n>>q;
    for(int i=0;i<q;i++)
    {  long a1,a2,a3;
       cin>>a1>>a2>>a3;
       s[a1]+=a3;
       s[a2+1]-=a3;
    }
    long sum=0;
    for(int i=0;i<n;i++)
    { sum+=s[i];
      a[i]=sum;
    }
    long qu;
    cin>>qu;
    while(qu--)
    { cin>>n;
      cout<<a[n]<<endl;

    }
  }

return 0;}
