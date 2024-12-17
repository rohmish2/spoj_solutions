// Problem: BVAAN
// Submission ID: 26639601
// Language: 4728

#include<bits/stdc++.h>
using namespace std;
int main()
{ 
 #ifndef ONLINE_JUDGE
	freopen("in.txt","r",stdin);
	freopen("ou.txt","w",stdout);
 #endif
 int t;
 /*ios_base::sync_with_stdio(false);
 cin.tie(NULL);*/
 cin>>t;
 while(t--)
 {
   string s1,s2;
   cin>>s1>>s2;

   int k;
   cin>>k;
  vector<vector<vector<int>>>dp(k+1,vector<vector<int>>((int)s1.size()+1,vector<int>((int)s2.size()+1,0)));
   for(int i=1;i<=k;i++)
   {
    for(int j=s1.size()-1;j>=0;j--)
      {
       for(int l=s2.size()-1;l>=0;l--)
          { int maxi=0;
            if(s1[j]==s2[l]&&(dp[i-1][j+1][l+1]!=0||i==1))
              { //cout<<"ss"<<(int)s1[j]<<"fw\n";
              	maxi=(int)(s1[j])+dp[i-1][j+1][l+1];
                
              }
            maxi=max(dp[i][j+1][l],max(maxi,dp[i][j][l+1]));
           dp[i][j][l]=maxi;
           //cout<<i<<" "<<j<<" "<<k<<"  "<<maxi<<endl;
          }
      }

   }
 
cout<<dp[k][0][0]<<endl;
 }	


return 0;}