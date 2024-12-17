// Problem: ARBITRAG
// Submission ID: 26190751
// Language: 4596

#include<bits/stdc++.h>
using namespace std;
double a[50][50];
int main()
{ int cur;
  scanf("%d",&cur);
  int cnt=1;
  while(cur)
  {   int t=0;
      map<string,int>mp;
      string o;
      for(int i=0;i<cur;i++)
      { cin>>o;
       //if(mp.find(o)==mp.end())
          mp[o]=t++;}


      for(int i=0;i<cur;i++)
        for(int j=0;j<cur;j++)
            a[i][j]=0.00;
        int m;
        scanf("%d",&m);
        for(int i=0;i<m;i++)
        { string a1,a2;
          double sex;
          cin>>a1>>sex>>a2;
          a[mp[a1]][mp[a2]]=sex;
        }
      for(int i=0;i<cur;i++)
        for(int j=0;j<cur;j++)
          for(int k=0;k<cur;k++)
            a[i][j]=max(a[i][j],a[i][k]*a[k][j]);
   int ss=0;
   for(int i=0;i<cur;i++)
    if(a[i][i]>1)
        ss=1;

    printf("Case %d: ",cnt++);
      if(ss)
      printf("Yes\n");
    else
        printf("No\n");


 scanf("%d",&cur);
 }

return 0;}
