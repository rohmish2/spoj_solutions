// Problem: LABYR1
// Submission ID: 25578402
// Language: 20132

#include<bits/stdc++.h>
using namespace std;
int mp[1001][1001];
int visi[1001][1001];
long long dis[1001][1001];
int main()
{ int t;
  ios_base::sync_with_stdio(false);
    cin.tie(NULL);
  cin>>t;
  while(t--)
  { long long c,r;
    cin>>c>>r;
    vector<vector<char>>v(r,vector<char>(c,'0'));
    int k=0;

    memset(mp,0,sizeof(mp));
    pair<long,long>fir;
    for(int i=0;i<r;i++)
       for(int j=0;j<c;j++)
        {cin>>v[i][j];
         if(v[i][j]=='.')
         {

           mp[i][j]=1;
           if(k==0)
            {fir=make_pair(i,j);
            k=1;}
         }
        }

 pair<pair<long,long>,long long> bfs(pair<long,long>init);

 pair<pair<long,long>,long long>a1=bfs(fir);
 a1=bfs(a1.first);
  cout<<"Maximum rope length is "<<a1.second<<"."<<endl;
  }

return 0;}
pair<pair<long,long>,long long> bfs(pair<long,long>init)
{ queue<pair<long,long>>q;
  memset(visi,0,sizeof(visi));
  memset(dis,0,sizeof(dis));
  //map<pair<long,long>,long long int>visi,dis;
  pair<pair<long,long>,long long>maxd=make_pair(init,0);
  q.push(init);
  visi[init.first][init.second]=1;
  //dis[init.fi]=0;
  while(!q.empty())
  { long i=q.front().first;
    long j=q.front().second;
    pair<long,long>a1,a2,a3,a4;
    a1=make_pair(i+1,j);a2=make_pair(i-1,j);a3=make_pair(i,j+1);a4=make_pair(i,j-1);
    if(mp[a1.first][a1.second]==1)
    {
        if(visi[a1.first][a1.second]!=1)
          {visi[a1.first][a1.second]=1;
           dis[a1.first][a1.second]=dis[q.front().first][q.front().second]+1;
           q.push(a1);}
        else
           dis[a1.first][a1.second]=max(dis[q.front().first][q.front().second]+1,dis[a1.first][a1.second]);
         if(dis[a1.first][a1.second]>maxd.second)
         { maxd.first=a1;
           maxd.second=dis[a1.first][a1.second];
         }
    }
    if(mp[a2.first][a2.second]==1)
    {  if(visi[a2.first][a2.second]!=1)
          {visi[a2.first][a2.second]=1;
           dis[a2.first][a2.second]=dis[q.front().first][q.front().second]+1;
           q.push(a2);}
        else
           dis[a2.first][a2.second]=max(dis[q.front().first][q.front().second]+1,dis[a2.first][a2.second]);
         if(dis[a2.first][a2.second]>maxd.second)
         { maxd.first=a2;
           maxd.second=dis[a2.first][a2.second];
         }


    }
    if(mp[a3.first][a3.second]==1)
    {  if(visi[a3.first][a3.second]!=1)
          {visi[a3.first][a3.second]=1;
           dis[a3.first][a3.second]=dis[q.front().first][q.front().second]+1;
           q.push(a3);}
        else
           dis[a3.first][a3.second]=max(dis[q.front().first][q.front().second]+1,dis[a3.first][a3.second]);
         if(dis[a3.first][a3.second]>maxd.second)
         { maxd.first=a3;
           maxd.second=dis[a3.first][a3.second];
         }

    }
    if(mp[a4.first][a4.second]==1)
    {
      if(visi[a4.first][a4.second]!=1)
          {visi[a4.first][a4.second]=1;
           dis[a4.first][a4.second]=dis[q.front().first][q.front().second]+1;
           q.push(a4);}
        else
           dis[a4.first][a4.second]=max(dis[q.front().first][q.front().second]+1,dis[a4.first][a4.second]);
         if(dis[a4.first][a4.second]>maxd.second)
         { maxd.first=a4;
           maxd.second=dis[a4.first][a4.second];
         }
    }
    q.pop();
   }

return maxd;}
