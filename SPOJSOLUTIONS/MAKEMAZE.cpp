// Problem: MAKEMAZE
// Submission ID: 25809707
// Language: 4792

#include<bits/stdc++.h>
using namespace std;
int sr,sc,key;
int exitpts(vector<vector<char>>&a)
{ vector<vector<bool>>vis(a.size(),vector<bool>(a[0].size(),false));
  int cnt=0;
  int k=1;
  for(int i=0;i<a.size();i++)
  {
      if(a[i][0]=='.'&&!vis[i][0])
      { cnt++;
        sr=i;
        sc=0;
        vis[i][0]=true;
      }
  }
 for(int i=0;i<a.size();i++)
  {   if(a[i][a[0].size()-1]=='.'&&!vis[i][a[0].size()-1])
      { cnt++;
        sr=i;
        sc=a[0].size()-1;
        vis[i][a[0].size()-1]=true;
      }

  }
 for(int i=0;i<a[0].size();i++)
  {
      if(a[0][i]=='.'&&!vis[0][i])
      { cnt++;
        sr=0;
        sc=i;
        vis[0][i]=true;
      }
  }
 for(int i=0;i<a[0].size();i++)
  {
      if(a[a.size()-1][i]=='.'&&!vis[a.size()-1][i])
      { cnt++;
        sr=a.size()-1;
        sc=i;
        vis[a.size()-1][i]=true;
      }
  }
return cnt;}
bool isvalid(int i,int j,vector<vector<char>>&a)
{ if(i<a.size()&&j<a[0].size()&&i>=0&&j>=0)
   return true;
   return false;
}
void dfs(int i,int j,vector<vector<char>>&a,vector<vector<bool>>vis)
{ vis[sr][sc]=1;
   //cout<<i<<" "<<j;
    if(i!=sr||j!=sc)
   { if(i+1==a.size()||i-1<0||j+1==a[0].size()||j-1<0)
       {key=1;
       return;}
   }
  if(isvalid(i+1,j,a)&&a[i+1][j]=='.'&&vis[i+1][j]==false&&key==0)
  {vis[i+1][j]=true;
    dfs(i+1,j,a,vis);
   vis[i+1][j]=false;
  }
  if(isvalid(i-1,j,a)&&a[i-1][j]=='.'&&vis[i-1][j]==false&&key==0)
  {vis[i-1][j]=true;
    dfs(i-1,j,a,vis);
   vis[i-1][j]=false;
  }
  if(isvalid(i,j+1,a)&&a[i][j+1]=='.'&&vis[i][j+1]==false&&key==0)
  {vis[i][j+1]=true;
    dfs(i,j+1,a,vis);
   vis[i][j+1]=false;
  }
  if(isvalid(i,j-1,a)&&a[i][j-1]=='.'&&vis[i][j-1]==false&&key==0)
  {vis[i][j-1]=true;
    dfs(i,j-1,a,vis);
   vis[i][j-1]=false;
  }

}
int main()
{ int t;
  cin>>t;
  while(t--)
  {int r,c;
   cin>>r>>c;
   vector<vector<char>>a(r,vector<char>(c));
   for(int i=0;i<r;i++)
     for(int j=0;j<c;j++)
        cin>>a[i][j];
   //cout<<"q"<<exitpts(a);
   if(exitpts(a)!=2)
   {
       cout<<"invalid\n";}
   else
   { //cout<<sr<<" "<<sc<<endl;
   vector<vector<bool>>v(r,vector<bool>(c,false));
   key=0;
   dfs(sr,sc,a,v);
   if(key==0)
    cout<<"invalid\n";
   else
    cout<<"valid\n";
   }

  }

return 0;}
