// Problem: CLEANRBT
// Submission ID: 26192000
// Language: 4608

#include<bits/stdc++.h>
using namespace std;
int mm[110][110];
int fori[4]={0,1,0,-1};
int forj[4]={1,0,-1,0};
void bfs(int vx,pair<int,int>st,vector<vector<char>>&a,vector<pair<int,int>>relevant)
{ vector<vector<bool>>v(a.size(),vector<bool>(a[0].size(),false));
  vector<vector<int>>dis(a.size(),vector<int>(a[0].size(),0));
   v[st.first][st.second]=true;
  queue<pair<int,int>>q;
   q.push(st);
   while(!q.empty())
   {  int sti=q.front().first;
      int stj=q.front().second;
       for(int i=0;i<4;i++)
       { int ni=sti+fori[i] ,nj=stj+forj[i];
           if(ni<a.size()&&ni>=0&&nj<a[0].size()&&nj>=0)
             { if(a[ni][nj]!='x'&&!v[ni][nj])
                  { dis[ni][nj]=dis[sti][stj]+1;
                    v[ni][nj]=true;
                    q.push({ni,nj});
                  }
            }
       }
     q.pop();
   }
   for(int i=0;i<relevant.size();i++)
   {   if(v[relevant[i].first][relevant[i].second])
       mm[vx][i]=dis[relevant[i].first][relevant[i].second];
   }
}
void fun(int cur,int num,int cost,vector<bool>&k,int rel,int &sol)
{ if(num==rel)
   { sol=min(cost,sol);
     return;
   }
  for(int i=0;i<rel;i++)
     { if(k[i]==true)
         { k[i]=false;
           fun(i,num+1,cost+mm[cur][i],k,rel,sol);
           k[i]=true;
         }
     }
}
int main()
{ int r,c;
  cin>>c>>r;
  //scanf("%d%d",&r,&c);
   while(r!=0)
   { vector<pair<int,int>>relevant;
     vector<vector<char>>a(r,vector<char>(c));
      int index;
     for(int i=0;i<r;i++)
         for(int j=0;j<c;j++)
          {char q;
            cin>>q;
            a[i][j]=q;
           if(a[i][j]=='*'||a[i][j]=='o')
          {  relevant.push_back({i,j});
             if(a[i][j]=='o')
             {index=relevant.size()-1;}
          }

          }
      swap(relevant[index],relevant[0]);

    for(int i=0;i<relevant.size()+10;i++)
         for(int j=0;j<relevant.size()+10;j++)
             mm[i][j]=-1;

    for(int i=0;i<relevant.size();i++)
      {bfs(i,relevant[i],a,relevant);}
    int flag=1;

    for(int i=0;i<relevant.size();i++)
          {for(int j=0;j<relevant.size();j++)
           {if(mm[i][j]==-1)
             {flag=-1;
             break;}}
          }
    if(flag==-1)
        printf("-1\n");
    else
    {vector<bool>bro(relevant.size(),true);
     bro[0]=false;
     flag=10000;
     fun(0,1,0,bro,relevant.size(),flag);
     printf("%d\n",flag);
    }
     scanf("%d%d",&c,&r);
   }
  return 0;}
