// Problem: MATSUM
// Submission ID: 25788168
// Language: 7564

#include<bits/stdc++.h>
using namespace std;
int sum(vector<vector<int>>&v,int x,int y)
{ int s=0;
  for(int i=x;i>0;i-=(i&(-1*i)))
             for(int j=y;j>0;j-=(j&(-1*j)))
              s+=v[i][j];
return s;}
int main()
{ int t;
    scanf("%d",&t);
  while(t--)
  { int m;
    scanf("%d",&m);
    vector<vector<int>>a(m+1,vector<int>(m+1,0));
    char ss[11];
    scanf("%s",ss);

    while(strcmp(ss,"END")!=0)
    { if(strcmp(ss,"SET")==0)
        { int x,y,val;
          scanf("%d%d%d",&x,&y,&val);
          x++;
          y++;
          val=val-(sum(a,x,y)+sum(a,x-1,y-1)-sum(a,x-1,y)-sum(a,x,y-1));
          for(int i=x;i<=m;i+=(i&(-1*i)))
             for(int j=y;j<=m;j+=(j&(-1*j)))
                a[i][j]+=val;
        }
      if(strcmp(ss,"SUM")==0)
      {  int x,y,p,o;
          scanf("%d%d%d%d",&x,&y,&p,&o);
         x++;
         y++;
         p++;
         o++;
         printf("%d\n",sum(a,p,o)+sum(a,x-1,y-1)-sum(a,p,y-1)-sum(a,x-1,o));


      }
     scanf("%s",ss);
    }
  printf("\n");
  }

return 0;}
