// Problem: SOLDIER
// Submission ID: 26072137
// Language: 4820

#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,t;
scanf("%d%d",&n,&t);
vector<vector<int>>a(6,vector<int>(t+1,0));
vector<vector<pair<int,int>>>ob(6);
for(int i=0;i<n;i++)
{ int q,w,e;
  scanf("%d%d%d",&q,&w,&e);
  ob[q-1].push_back({w,e});
}
for(int i=0;i<6;i++)
sort(ob[i].begin(),ob[i].end(),[](pair<int,int> a, pair<int,int>b){return a.first<b.first;});

for(int i=0;i<6;i++)
    for(int j=1;j<=t;j++)
       {
         for(int k=0;k<ob[i].size()&&ob[i][k].first<=j;k++)
            {    if(i!=0)
                a[i][j]=max(a[i][j],min(ob[i][k].second,a[i-1][j-ob[i][k].first]));
                else
                a[i][j]=max(a[i][j],ob[i][k].second);
                }

       }
    cout<<a[5][t];


return 0;}
