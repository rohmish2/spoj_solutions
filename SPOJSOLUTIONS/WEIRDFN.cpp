// Problem: WEIRDFN
// Submission ID: 26171592
// Language: 6680

#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
int main()
{
   int  t;
   scanf("%d",&t);
   while(t--)
     {
      long long int a,b,c,d;
      scanf("%lld%lld%lld%lld",&a,&b,&c,&d);
      priority_queue<long long int>maxi;
       priority_queue<long long int,vector<long long int>,greater<long long int>>mini;
       long long int med=1;
       long long int temp;
       long long int ans=1;
      for(long long int i=2;i<=d;i++)
      {
        ans+=temp=((a*med)%mod+(b*i)%mod+c)%mod;
        if(i==d)
            break;
      if(temp>med)
         mini.push(temp);
      else
      maxi.push(temp);
      if(mini.size()==maxi.size()+2)
        {maxi.push(med);
         med=mini.top();
         mini.pop();}
      if(mini.size()+1==maxi.size())
        {mini.push(med);
         med=maxi.top();
         maxi.pop();}
         }
   printf("%lld\n",ans);


  }

  return 0;}
