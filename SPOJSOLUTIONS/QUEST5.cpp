// Problem: QUEST5
// Submission ID: 26195637
// Language: 4548

#include<bits/stdc++.h>
using namespace std;
int main()
{ int t;
   scanf("%d",&t);
   while(t--)
  {
    int n;
    scanf("%d",&n);
    vector<pair<int,int>>q(n);
    for(int i=0;i<n;i++)
        scanf("%d%d",&q[i].first,&q[i].second);
    sort(q.begin(),q.end(),[](pair<int,int> a,pair<int,int>b){return a.second<b.second;});
    int ans=1;
    int fin=q[0].second;
    for(int i=1;i<n;i++)
      { if(q[i].first>fin)
         {ans++;
         fin=q[i].second;}

      }

   printf("%d\n",ans);

   }

return 0;}
