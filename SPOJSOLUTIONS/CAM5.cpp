// Problem: CAM5
// Submission ID: 25588878
// Language: 9936

#include<bits/stdc++.h>
using namespace std;
 vector<vector<long long>>d(110000);
int visited[110000];
void dfs(long long &ans,long long int i)
{visited[i]=1;
 for(auto j:d[i])
   { if(visited[j]==0)
       {   visited[j]=1;
           ans++;
           dfs(ans,j);
       }}
}
int main()
{ int t;
  cin>>t;
  while(t--)
  {
  // memset(visited,0,sizeof(visited));
   long long n,q;
   cin>>n>>q;
   for(int i=0;i<n;i++)
   { d[i].clear();
     visited[i]=0;
   }
   while(q--)
   { long long a1,a2;
     cin>>a1>>a2;
     d[a1].push_back(a2);
     d[a2].push_back(a1);
   }
  long long ans=0,counti=0;
  for(auto i=0;i<n;i++)
  {
       if(visited[i]==0)
          {   counti++;
              dfs(ans,i);
          }
  }
 if(ans>0)
    ans--;
  cout<<counti<<endl;
// d.clear();
  }

return 0;}
