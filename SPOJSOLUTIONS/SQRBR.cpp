// Problem: SQRBR
// Submission ID: 25630975
// Language: 4532

#include<bits/stdc++.h>
using namespace std;
struct my{
unordered_map<int,int> open, close;
};
int main()
{ int t;
  cin>>t;
  while(t--)
    { unordered_map<int,int>a;
      int n,k;
      scanf("%d%d",&n,&k);
      for(int i=0;i<k;i++)
      {int t;scanf("%d",&t);a[t]=1;}
      
      my ar[39];
      ar[1].open[1]=1;


     for(int i=2;i<=2*n;i++)
     { //update for open
       for(auto j:ar[i-1].open)
         {  ar[i].open[j.first+1]=ar[i-1].open[j.first]; }
     for(auto j:ar[i-1].close)
         {  ar[i].open[j.first+1]+=ar[i-1].close[j.first]; }
      //update for close
     if(a[i]!=1)
         {
             for(auto j:ar[i-1].open)
         {    if(j.first!=0)
             ar[i].close[j.first-1]=ar[i-1].open[j.first]; }
     for(auto j:ar[i-1].close)
         {    if(j.first!=0)
             ar[i].close[j.first-1]+=ar[i-1].close[j.first]; }



         }

     }
     cout<<ar[2*n].close[0]<<endl;
    }
return 0;}
