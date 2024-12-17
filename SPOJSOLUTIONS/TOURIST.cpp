// Problem: TOURIST
// Submission ID: 26622160
// Language: 44852

#include<bits/stdc++.h>
using namespace std;
int dp[251][251][251];
bool v[251][251][251];
bool dpc[251][251][251];
int r,c;
 int fun(int len,int i1,int i2,vector<vector<char>>&mat)
{ if(dpc[len][i1][i2])// this state is visited
     return dp[len][i1][i2];


  long int g=0;

  if(mat[i1][len-i1]=='*'&&!v[len][i1][len-i1])//gold is not visited
        {g++;v[len][i1][len-i1]=true;}

  if(mat[i2][len-i2]=='*'&&!v[len][i2][len-i2])//gold and not visited
        {g++;v[len][i2][len-i2]=true;}
  if(len==c+r-2)
    {   dpc[len][i1][i2]=true;
        return dp[len][i1][i2]=g;}


  if(mat[i1][len-i1]=='#'||mat[i2][len-i2]=='#')//Any one path  in a blockade
    {v[len][i1][len-i1]=false;
    v[len][i2][len-i2]=false;
        return -10000000;}
  long a1=-10000000,a2=-1000000,a3=-1000000,a4=-1000000;
  if(i1+1<r&&i2+1<r)//R R
   {   a1=fun(len+1,i1+1,i2+1,mat);}
  if(i1+1<r&&(len-i2)+1<c)//L R
   {
       a2=fun(len+1,i1+1,i2,mat);
   }
  if(len-i1+1<c&&i2+1<r)
   {
       a3=fun(len+1,i1,i2+1,mat);
   }
  if( (len-i1)+1<c&&(len-i2)+1<c)
   {
       a4=fun(len+1,i1,i2,mat);
   }
    v[len][i1][len-i1]=false;
    v[len][i2][len-i2]=false;
    dpc[len][i1][i2]=true;
   //cout<<len<<" "<<i1<<"  "<<i2<<" "<<g<<" "<<mat[i1][len-i1]<<" "<<g+max( a4,max(a3,max(a1,a2)))<<endl;


   return dp[len][i1][i2]= g+max( a4,max(a3,max(a1,a2)));
 //return g+dp[len][i1][i2];
}

int main()
{
    int t;
   cin>>t;
    while(t--)
    {memset(v,0,sizeof(v));
     memset(dpc,0,sizeof(dpc));
      //memset(dp,0,sizeof(dp));
     cin>>c>>r;
     vector<vector<char>>mat(r,vector<char>(c));
     for(int i=0;i<r;i++)
            for(int j=0;j<c;j++)
              cin>>mat[i][j];

    cout<<max(0,fun(0,0,0,mat))<<endl;
    }
return 0;}
