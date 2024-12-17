// Problem: MAXWOODS
// Submission ID: 26008984
// Language: 4692

#include<bits/stdc++.h>
using namespace std;
int mp[200][200][3];
int fun(vector<vector<char>>&adj,int i,int j,int a,int t)
{ if(mp[i][j][a]!=-1)
      return mp[i][j][a];
  //cout<<i<<" "<<j<<" "<<a<<" "<<t<<endl;
  if(a==1)
  { int a1=t,a2=t;

      if(i+1!=adj.size()&&adj[i+1][j]!='#')
      {
       if(adj[i+1][j]=='T')
       a1=t+fun(adj,i+1,j,2,1);
       else
       a1=t+fun(adj,i+1,j,2,0);
      }
      if(j+1!=adj[0].size()&&adj[i][j+1]!='#')
       {
        if(adj[i][j+1]=='T')
       a2=t+fun(adj,i,j+1,1,1);
       else
       a2=t+fun(adj,i,j+1,1,0);
       }
      return mp[i][j][a]=max(a1,a2);}
     else
     {
         int a1=t,a2=t;

      if(i+1!=adj.size()&&adj[i+1][j]!='#')
      {
       if(adj[i+1][j]=='T')
       a1=t+fun(adj,i+1,j,1,1);
       else
       a1=t+fun(adj,i+1,j,1,0);
      }
      if(j-1>=0&&adj[i][j-1]!='#')
       {
        if(adj[i][j-1]=='T')
       a2=t+fun(adj,i,j-1,2,1);
       else
       a2=t+fun(adj,i,j-1,2,0);
       }
      return mp[i][j][a]=max(a1,a2);

     }

}
int main()
{





    int t;
 scanf("%d",&t);
 while(t--)
  { int r,c;
   scanf("%d%d",&r,&c);
    for(int i=0;i<r;i++)
     for(int j=0;j<c;j++)
        for(int k=1;k<3;k++)
        mp[i][j][k]=-1;


  vector<vector<char>>a(r,vector<char>(c));
    //cout<<"ss";
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            cin>>a[i][j];

    if(a[0][0]=='#')
      cout<<"0\n";
    else if(a[0][0]=='0')
      cout<<fun(a,0,0,1,0)<<"\n";
    else
      cout<<fun(a,0,0,1,1)<<"\n";



  }

return 0;}
