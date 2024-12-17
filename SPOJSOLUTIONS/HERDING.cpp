// Problem: HERDING
// Submission ID: 25797581
// Language: 8820

#include<bits/stdc++.h>
using namespace std;
int fun(int i,int j,vector<vector<char>>&a,vector<vector<bool>>&v,int &ans,vector<vector<int>>&sc)
{ // cout<<i<<"   "<<j<<endl;

    if(v[i][j]==1)
    { if(sc[i][j]==0)
        {ans++;
         //cout<<"visited ans"<<ans<<endl;
        return ans;}
      else
        {   //cout<<"iivisited ans"<<ans<<endl;
            return sc[i][j];}
     }
    v[i][j]=1;
   if(a[i][j]=='W')
    sc[i][j]=fun(i,j-1,a,v,ans,sc);
   if(a[i][j]=='E')
    sc[i][j]=fun(i,j+1,a,v,ans,sc);
   if(a[i][j]=='N')
    sc[i][j]=fun(i-1,j,a,v,ans,sc);
   if(a[i][j]=='S')
    sc[i][j]=fun(i+1,j,a,v,ans,sc);
  return sc[i][j];
 }

int main()
{ int r,c;
  scanf("%d%d",&r,&c);
  vector<vector<char>>a(r,vector<char>(c));
  vector<vector<bool>>v(r,vector<bool>(c,false));
  vector<vector<int>>sc(r,vector<int>(c,0));
  for(int i=0;i<r;i++)
    for(int j=0;j<c;j++)
       cin>>a[i][j];
  int ans=0;
  for(int i=0;i<r;i++)
    for(int j=0;j<c;j++)
   if(v[i][j]==0)
     fun(i,j,a,v,ans,sc);

  cout<<ans;

  return 0;}
