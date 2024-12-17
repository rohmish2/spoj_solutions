// Problem: AKBAR
// Submission ID: 26180443
// Language: 74232

#include<bits/stdc++.h>
using namespace std;
int main()
{ int t;
  scanf("%d",&t);
  for(int q=1;q<=t;q++)
  { int n,r,s;
    scanf("%d%d%d",&n,&r,&s);
    vector<int>city[n+1];
    for(int i=0;i<r;i++)
    {int t1,t2;
     scanf("%d%d",&t1,&t2);
     city[t1].push_back(t2);
     city[t2].push_back(t1);
    }
    vector<int>pro(n+1,-1);
    int key=1;
    for(int i=0;i<s&&key==1;i++)
    { int ci,pp;

      scanf("%d%d",&ci,&pp);
      if(pro[ci]==-1)
          pro[ci]=i;
      else
        {key=0;
         break;}
     queue<pair<int,int>>qu;

      qu.push({ci,pp});
      while(!qu.empty())
        {   if(qu.front().second>0)
            {for(auto j:city[qu.front().first])
            {
                if(pro[j]!=-1&&pro[j]!=i)
                    {key=0;
                    break;}
                else if(pro[j]==-1)
                    { pro[j]=i;
                      qu.push({j,qu.front().second-1});
                    }
            }
            }
          if(key==0)
            break;

          qu.pop(); }
    }
    for(auto j=1;j<pro.size();j++)
        if(pro[j]==-1)
         {key=0;
         break;}
  if(key==0)
  printf("No\n");
  else
  printf("Yes\n");
  }
 return 0;}
