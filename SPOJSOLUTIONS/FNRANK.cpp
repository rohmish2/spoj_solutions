// Problem: FNRANK
// Submission ID: 26147562
// Language: 4504

#include<bits/stdc++.h>
using namespace std;
long long int a[900001];
int main()
{ int t;
  cin>>t;
  while(t--)
  {
    long long int n,p,q;
    cin>>n>>p>>q;
    
    for(long long i=1;i<=n;i++)
       {   
           a[i]= floor(i*p/q);}
    //a[1]=max(a[1],1);
    for(int i=1;i*2<=n;i++)
        for(int j=i*2;j<=n;j+=i)
            a[j]-=a[i];
    int ans=0;
   for(int i=1;i<n+1;i++)
    ans+=a[i];//<<" ";

     cout<<ans+1<<endl;

  }

return 0;}
