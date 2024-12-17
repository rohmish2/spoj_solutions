// Problem: BUGLIFE
// Submission ID: 25478848
// Language: 3952876

#include<bits/stdc++.h>
using namespace std;
int report;
int main()
{ int t;
 void dfs(vector<long>&gen,int index,vector<vector<long>>adj);
 cin>>t;
 for(int k=1;k<=t;k++)
 { report=0;
  long n,in;


  cin>>n>>in;
  vector<vector<long>>adj(n+1);
  vector<long>gender(n+1,0),v(n+1,0);
  //assign 1 as male
  for(long i=0;i<in;i++)
   { long one,two;
     cin>>one>>two;
     adj[one].push_back(two);
     adj[two].push_back(one);}
     //adj[one][two]=adj[two][one]=1;
  for(int i=1;i<=n&&report==0;i++)
  {
      if(gender[i]==0)
      {  gender[i]=1;
          dfs(gender,i,adj);}
  }
  cout<<"Scenario #"<<k<<":\n";
 if(report==0)
    cout<<"No suspicious bugs found!\n";
 else
    cout<<"Suspicious bugs found!\n";
 }
return 0;}
void dfs(vector<long>&gen,int index,vector<vector<long>>adj)
{ if(report!=1)
   {for(int i=0;i<adj[index].size()&&report!=1;i++)
   {
      if(gen[adj[index][i]]==0)
       { gen[index]==1?gen[adj[index][i]]=2:gen[adj[index][i]]=1;
       dfs(gen,adj[index][i],adj);
       }
     else if(gen[adj[index][i]]==gen[index]&&i!=index)
      {// cout<<"lol"<<index<<"  "<<i<<endl;
          report=1;
      }

   }
   }

   }
