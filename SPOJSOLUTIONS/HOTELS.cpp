// Problem: HOTELS
// Submission ID: 25498072
// Language: 5572

#include<bits/stdc++.h>
using namespace std;
int main()
{ long long  a,b;
  cin>>a>>b;
  long ans=0;
  vector<long long>v(a);
  long long sum=0;
  for(int i=0;i<a;i++)
    {cin>>v[i];
    sum+=v[i];}
   long lp=0,rp=0,s=v[0];
    while(lp<=rp)
    {
     if(s==b)
     {ans=s;
         break;}
     else if(s>b)
     { s=(s-v[lp++]);}
     else
     {ans=max(ans,s);
         if(rp<a-1)
         s=s+v[++rp];
         else
         break;   
         }
    }
    cout<<ans;
return 0;}
