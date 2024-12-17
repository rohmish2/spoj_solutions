// Problem: SAMER08G
// Submission ID: 26197190
// Language: 4536

#include<bits/stdc++.h>
using namespace std;
int main()
{ int s;
  scanf("%d",&s);
  while(s)
    { //int s;

      vector<pair<int,int>>a(s);
      for(int i=0;i<s;i++)
         scanf("%d%d",&a[i].first,&a[i].second);
     vector<int>q(s,-1);
     int flag=1;
      for(int i=0;i<s;i++)
      { if(i+a[i].second<s&&i+a[i].second>=0&&q[i+a[i].second]==-1)
          q[i+a[i].second]=a[i].first;
        else
          {flag=0;
          break;}

      }
     if(flag==1)
      { for(auto i:q)
           {printf("%d ",i);}
      }
     else
     { printf("-1");}
    printf("\n");
    scanf("%d",&s);
    }
return 0;}
