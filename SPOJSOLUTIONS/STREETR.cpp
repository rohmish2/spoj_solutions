// Problem: STREETR
// Submission ID: 25651293
// Language: 4828

#include <bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{ if(b==0)
    return a;
  return gcd(b,a%b);
}
int main()
{
int n;
cin>>n;
int k;
vector<int>arr(n),arr1(n-1);
for(int i=0;i<n;i++)
    cin>>arr[i];
sort(arr.begin(),arr.end());
for(int i=1;i<n;i++)
{arr1[i-1]=arr[i]-arr[i-1];
 if(i==1)
    k=arr[i]-arr[i-1];
 else
    k=gcd(k,arr1[i-1]);
}
int ans=0;
for(int i=0;i<n-1;i++)
    ans+=(arr1[i]-1)/k;
cout<<ans;
return 0;
}
