// Problem: SUPPER
// Submission ID: 26600773
// Language: 5084

#include<bits/stdc++.h>
using namespace std;
int mx(vector<int>&v,int in)
{ int maxi=0;

   while(in>0)
   {   maxi=max(maxi,v[in]);
      in-=(in&-(in));
   }

  return maxi;}
void  update(vector<int>&v,int in,int val)
{
     while(in<=100000)
     { v[in]=max(v[in],val);
        in+=(in&-(in));
     }

}
void fun(vector<int>&m,int in,vector<int>&a,int v,vector<int>&dp,vector<bool>&mp,int ender)
{

     m.push_back(a[in]);
     mp[in]=true;
    for(int i=in+1;i<ender;i++)
    {

        if(a[i]<a[in]&&dp[i]==v-1&&!mp[i])
        fun(m,i,a,v-1,dp,mp,ender);

    }
}
int main()
{

    for(int k=0;k<10;k++)
    { int n;
      scanf("%d",&n);
     vector<int>a(n,0);
     for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    vector<int>fen(100001,0);
     vector<int>dp(n,0);
  int solu=0;
  for(int i=0;i<n;i++)
  {
    dp[i]=mx(fen,a[i])+1;
    update(fen,a[i],dp[i]);
    solu=max(dp[i],solu);
    }
   reverse(dp.begin(),dp.end());
   reverse(a.begin(),a.end());
   vector<int>sol;
   vector<bool>sex(n,false);
   int ender=n;
   for(int i=n-1;i>=0;i--)
    { if(dp[i]==solu)
       {fun(sol,i,a,solu,dp,sex,ender);
        ender=i;
       }

    }


  sort(sol.begin(),sol.end());
 printf("%d\n",(int)sol.size());
 for(int i=0;i<sol.size();i++)
 printf("%d ",sol[i]);

  printf("\n");  }
  return 0;}
