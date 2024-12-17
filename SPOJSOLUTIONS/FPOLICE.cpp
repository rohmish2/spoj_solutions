// Problem: FPOLICE
// Submission ID: 25868984
// Language: 4520

#include<bits/stdc++.h>
using namespace std;
void dfs(int curnode,int time,int cost,vector<vector<int>>&c,vector<vector<int>>&t,vector<vector<int>>&memo,vector<int>&v,int ti)
{ v[curnode]=1;
    if(v[curnode]==1)
   {
       if(memo[curnode][time]>cost)
           memo[curnode][time]=cost;
       else
        return;
   }
   if(curnode==c.size()-1)
    return;
 for(int i=0;i<t.size();i++)
 {
    if(time+t[curnode][i]<=ti&&i!=curnode)
     { dfs(i,time+t[curnode][i],cost+c[curnode][i],c,t,memo,v,ti);}
 }
}

int main()
{   int q;
    cin>>q;

    int n,ti;

    while(q--)
    {cin>>n>>ti;
        vector<vector<int>>c(n,vector<int>(n,0)),t(n,vector<int>(n,0));
      vector<int>v(n,0);
      for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
              cin>>t[i][j];
      for(int i=0;i<n;i++)
         for(int j=0;j<n;j++)
               cin>>c[i][j];
      vector<vector<int>> memo(n,vector<int>(ti+1,100000));
      dfs(0,0,0,c,t,memo,v,ti);
      int ans1=memo[n-1][0],ans2=0;
      for(int i=0;i<=ti;i++)
        { if(ans1>memo[n-1][i])
           {ans1=memo[n-1][i];
           ans2=i;}

        }
    if(ans1!=100000)    
   cout<<ans1<<" "<<ans2<<endl;
    else 
    cout<<"-1\n";    
   //cin>>n>>ti;
    }
return 0;}
