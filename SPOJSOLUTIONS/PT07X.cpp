// Problem: PT07X
// Submission ID: 25628809
// Language: 11016

#include<bits/stdc++.h>
using namespace std;
void dfs(long i,vector<vector<long>>&adj,vector<long>&v,vector<long>&col,long &ans)
{ int isleaf=1;
  v[i]=1;
  for(auto j:adj[i])
     {
         if(v[j]==0)
            {isleaf=0;
            dfs(j,adj,v,col,ans);}
     }

  if(isleaf==1)
  {col[i]=0;
   for(auto j:adj[i])
   {
       { if(col[j]!=1)
          ans++;
           col[j]=1;


       }
  }
  return;}
  //cout<<i<<"   "<<col[i]<<endl;
   if(col[i]==0)
   {
   for(auto j:adj[i])
   {   if(col[j]==-1||col[j]==0)
       {col[j]=1;
        ans++;
       }
    }
   return ;
   }

  if(col[i]==1)
   {
   for(auto j:adj[i])
    {  if(col[j]==-1)
        col[j]=0;}

   return ;
   }

}
int main()
{
 long  n;
 cin>>n;
vector<vector<long>>adj(n+1);
vector<long>v(n+1,0),col(n+1,-1);
for(int i=1;i<n;i++)
{ long l,r;
  cin>>l>>r;
  adj[r].push_back(l);
  adj[l].push_back(r);
}
long ans=0;
dfs(1,adj,v,col,ans);
cout<<ans;
return 0;}
