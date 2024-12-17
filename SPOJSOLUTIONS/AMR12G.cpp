// Problem: AMR12G
// Submission ID: 26200405
// Language: 4844

#include<bits/stdc++.h>
using namespace std;
int main()
{ int t;
  scanf("%d",&t);
  while(t--)
  { int r,c,k;
    scanf("%d%d%d",&r,&c,&k);
    vector<pair<int,int>>a;
    int diff=9999;
    for(int i=0;i<r;i++)
       { int q=0;
        for(int j=0;j<c;j++)
          { char q1;
            cin>>q1;
            if(q1=='*')
                q++;

          }
         a.push_back({q,c-q});
         diff=min(diff,abs((2*q)-c));
       }

  sort(a.begin(),a.end(),[](pair<int,int> q1,pair<int,int>q2){return q1.second>q2.second;});
  int ans=0;
  for(int i=0;i<r;i++)
    { if(a[i].second>a[i].first&&k>0)
        {k--;
        ans+=a[i].second;}
      else
        ans+=a[i].first;
    }
  if(k%2==0)
    printf("%d\n",ans);
  else
    printf("%d\n",ans-diff);
  }
  return 0;}
