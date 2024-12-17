// Problem: FIBOSUM
// Submission ID: 25507616
// Language: 4676

#include<bits/stdc++.h>
#define  mod  1000000007
using namespace std;
int main()
{ int t;
  cin>>t;
  while(t--)
  { long long a[2][2],temp[2][2];
    a[0][0]=a[0][1]=a[1][0]=1;
    a[1][1]=0;
    memset(temp,0,sizeof(temp));
    temp[0][0]=temp[1][1]=1;
    //temp [1];
    long long n,m,sumtilln=0,sumtillm=0;
    cin>>n>>m;
    long exp=n;
    // cout<<"s";
      while(exp>1)
       {
        if(exp%2==0)
          { long long s[2][2];

            s[0][0]=a[0][0];s[0][1]=a[0][1];s[1][0]=a[1][0];s[1][1]=a[1][1];
            a[0][0]=(((s[0][0]%mod)*(s[0][0]%mod))%mod + ((s[0][1]%mod)*(s[1][0]%mod)))%mod;
            a[0][1]=(((s[0][0]%mod)*(s[0][1]%mod))%mod + ((s[0][1]%mod)*(s[1][1]%mod)))%mod;
            a[1][0]=(((s[1][0]%mod)*(s[0][0]%mod))%mod + ((s[1][1]%mod)*(s[1][0]%mod)))%mod;
            a[1][1]=(((s[1][0]%mod)*(s[0][1]%mod))%mod + ((s[1][1]%mod)*(s[1][1]%mod)))%mod;
            exp/=2;
          }
        else
        {  long long s[2][2];
           s[0][0]=temp[0][0];s[0][1]=temp[0][1];s[1][0]=temp[1][0];s[1][1]=temp[1][1];
           temp[0][0]=(((a[0][0]%mod)*(s[0][0]%mod))%mod + ((a[0][1]%mod)*(s[1][0]%mod)))%mod;
           temp[0][1]=(((a[0][0]%mod)*(s[0][1]%mod))%mod + ((a[0][1]%mod)*(s[1][1]%mod)))%mod;
           temp[1][0]=(((a[1][0]%mod)*(s[0][0]%mod))%mod + ((a[1][1]%mod)*(s[1][0]%mod)))%mod;
           temp[1][1]=(((a[1][0]%mod)*(s[0][1]%mod))%mod + ((a[1][1]%mod)*(s[1][1]%mod)))%mod;
           s[0][0]=a[0][0];s[0][1]=a[0][1];s[1][0]=a[1][0];s[1][1]=a[1][1];
            a[0][0]=(((s[0][0]%mod)*(s[0][0]%mod))%mod + ((s[0][1]%mod)*(s[1][0]%mod)))%mod;
            a[0][1]=(((s[0][0]%mod)*(s[0][1]%mod))%mod + ((s[0][1]%mod)*(s[1][1]%mod)))%mod;
            a[1][0]=(((s[1][0]%mod)*(s[0][0]%mod))%mod + ((s[1][1]%mod)*(s[1][0]%mod)))%mod;
            a[1][1]=(((s[1][0]%mod)*(s[0][1]%mod))%mod + ((s[1][1]%mod)*(s[1][1]%mod)))%mod;

            exp/=2;
        }
       }
            long long s[2][2];
            s[0][0]=a[0][0];s[0][1]=a[0][1];s[1][0]=a[1][0];s[1][1]=a[1][1];
            a[0][0]=(((s[0][0]%mod)*(temp[0][0]%mod))%mod + ((s[0][1]%mod)*(temp[1][0]%mod)))%mod;
            a[0][1]=(((s[0][0]%mod)*(temp[0][1]%mod))%mod + ((s[0][1]%mod)*(temp[1][1]%mod)))%mod;
            a[1][0]=(((s[1][0]%mod)*(temp[0][0]%mod))%mod + ((s[1][1]%mod)*(temp[1][0]%mod)))%mod;
            a[1][1]=(((s[1][0]%mod)*(temp[0][1]%mod))%mod + ((s[1][1]%mod)*(temp[1][1]%mod)))%mod;
     long f1=a[0][0];
    a[0][0]=a[0][1]=a[1][0]=1;
    a[1][1]=0;
    memset(temp,0,sizeof(temp));
    temp[0][0]=temp[1][1]=1;
      exp=m+1;
    // cout<<"s";
      while(exp>1)
       {
        if(exp%2==0)
          { long long s[2][2];

            s[0][0]=a[0][0];s[0][1]=a[0][1];s[1][0]=a[1][0];s[1][1]=a[1][1];
            a[0][0]=(((s[0][0]%mod)*(s[0][0]%mod))%mod + ((s[0][1]%mod)*(s[1][0]%mod)))%mod;
            a[0][1]=(((s[0][0]%mod)*(s[0][1]%mod))%mod + ((s[0][1]%mod)*(s[1][1]%mod)))%mod;
            a[1][0]=(((s[1][0]%mod)*(s[0][0]%mod))%mod + ((s[1][1]%mod)*(s[1][0]%mod)))%mod;
            a[1][1]=(((s[1][0]%mod)*(s[0][1]%mod))%mod + ((s[1][1]%mod)*(s[1][1]%mod)))%mod;
            exp/=2;
          }
        else
        {  long long s[2][2];
           s[0][0]=temp[0][0];s[0][1]=temp[0][1];s[1][0]=temp[1][0];s[1][1]=temp[1][1];
           temp[0][0]=(((a[0][0]%mod)*(s[0][0]%mod))%mod + ((a[0][1]%mod)*(s[1][0]%mod)))%mod;
           temp[0][1]=(((a[0][0]%mod)*(s[0][1]%mod))%mod + ((a[0][1]%mod)*(s[1][1]%mod)))%mod;
           temp[1][0]=(((a[1][0]%mod)*(s[0][0]%mod))%mod + ((a[1][1]%mod)*(s[1][0]%mod)))%mod;
           temp[1][1]=(((a[1][0]%mod)*(s[0][1]%mod))%mod + ((a[1][1]%mod)*(s[1][1]%mod)))%mod;
           s[0][0]=a[0][0];s[0][1]=a[0][1];s[1][0]=a[1][0];s[1][1]=a[1][1];
            a[0][0]=(((s[0][0]%mod)*(s[0][0]%mod))%mod + ((s[0][1]%mod)*(s[1][0]%mod)))%mod;
            a[0][1]=(((s[0][0]%mod)*(s[0][1]%mod))%mod + ((s[0][1]%mod)*(s[1][1]%mod)))%mod;
            a[1][0]=(((s[1][0]%mod)*(s[0][0]%mod))%mod + ((s[1][1]%mod)*(s[1][0]%mod)))%mod;
            a[1][1]=(((s[1][0]%mod)*(s[0][1]%mod))%mod + ((s[1][1]%mod)*(s[1][1]%mod)))%mod;

            exp/=2;
        }
       }

            s[0][0]=a[0][0];s[0][1]=a[0][1];s[1][0]=a[1][0];s[1][1]=a[1][1];
            a[0][0]=(((s[0][0]%mod)*(temp[0][0]%mod))%mod + ((s[0][1]%mod)*(temp[1][0]%mod)))%mod;
            a[0][1]=(((s[0][0]%mod)*(temp[0][1]%mod))%mod + ((s[0][1]%mod)*(temp[1][1]%mod)))%mod;
            a[1][0]=(((s[1][0]%mod)*(temp[0][0]%mod))%mod + ((s[1][1]%mod)*(temp[1][0]%mod)))%mod;
            a[1][1]=(((s[1][0]%mod)*(temp[0][1]%mod))%mod + ((s[1][1]%mod)*(temp[1][1]%mod)))%mod;
     long f2=a[0][0];

  cout<<(f2-f1+mod)%mod<<endl;
  }

return 0;}
