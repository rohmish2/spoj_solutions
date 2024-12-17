// Problem: PARTIT
// Submission ID: 26587688
// Language: 9536

#include<bits/stdc++.h>
using namespace std;
 long long dp[221][16][221];
int main()
{  ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   int t;
   cin>>t;
   while(t--)
   { memset(dp,0,sizeof(dp));
     int n,m;                              //n hua hai jab mth pos ka val k tha
      long long k;
     cin>>n>>m>>k;
     int maxi=n-(m-1)+1;
     for(int i=1;i<=n;i++)
       { dp[0][m][i]=1;}//correct

     for(int j=m-1;j>=0;j--)//nth
      for(int i=n;i>=0;i--)//left
       for(int k=1;k<=maxi;k++)
            {
             for(int l=k;l<=maxi&&i-l>=0;l++)//l can be equal or greater than k
                 {
                 dp[i][j][k]+=dp[i-l][j+1][l];
                 }
            }
 //cout<<dp[n-1][1][1]<<"  "<<dp[n-2][1][2];
 int left=n;
 int pre=0;
long long prefix=0;
 for(int i=1;i<=maxi&&left>=i;i++)
     {prefix+=dp[n-i][1][i];
         if(prefix>=k)
          {pre=i;
          left=n-pre;
          prefix-=dp[n-i][1][i];
          k-=(prefix);
          break;}}


   cout<<pre<<" ";
  for(int i=1;i<m;i++)
     {  prefix=0;
      //cout<<"k"<<k<<"left ="<<left<<dp[1][m][3]<<endl;
        for(int j=pre;j<=maxi&&left>=j;j++)
         { //if(dp[left-j][i+1][j]==0)

         prefix+=dp[left-j][i+1][j];
         //cout<<prefix<<" k"<<k<<" "<<left-j<<" "<<i+1<<" "<<j<<" "<<dp[left-j][i+1][j]<<endl;
         if(prefix>=k)
          {pre=j;

          //cout<<"bef "<<prefix<<" "<<dp[left-j][i+1][j]<<endl;
          prefix-=dp[left-j][i+1][j];
          //cout<<"aft"<<prefix<<endl;
          left=left-pre;
          k-=(prefix);
          break;
          }

          }
cout<<pre<<" ";
     }

cout<<endl;
   }

return 0;}
