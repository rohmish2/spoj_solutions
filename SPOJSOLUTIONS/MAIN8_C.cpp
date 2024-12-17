// Problem: MAIN8_C
// Submission ID: 25888834
// Language: 4568

#include<bits/stdc++.h>
using namespace std;
bool check(vector<long>&v,long a,long n)
{ long sum=0;

    for(auto i:v)
    {
        sum+=i/a;
    }
  if(sum>=n)
  return true;
  else
  return false;//too big
}
int main()
{ int t;
  cin>>t;
  while(t--)
  { long int s,n;
    cin>>s>>n;
    vector<long>v(s);
    long int maxi=0;
    for(int i=0;i<s;i++)
        {cin>>v[i];
        maxi=max(v[i],maxi);}
    long high=max(maxi,(long)0),low=1;
    long ans=0;
    while(high>=low)
    {long mid=low + (high - low)/2;
    // cout<<high<<"  "<<low<<endl;
     if(check(v,mid,n))
        {ans=mid;
        low=mid+1;}
     else
        high=mid-1;

   }
  cout<<ans<<endl;

  }
return 0;}
