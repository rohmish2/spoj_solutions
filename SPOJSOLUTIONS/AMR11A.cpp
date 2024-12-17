// Problem: AMR11A
// Submission ID: 25980857
// Language: 5752

#include<bits/stdc++.h>
using  namespace std;
int main()
{ int t;
  scanf("%d",&t);
  while(t--)
  { int r,c;
    scanf("%d%d",&r,&c);
    vector<vector<int>>v(r,vector<int>(c)),sol(r,vector<int>(c,1000));
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
         scanf("%d",&v[i][j]);

     for(int i=r-1;i>=0;i--)
        for(int j=c-1;j>=0;j--)
         {//cout<<i<<" "<<j<<" "<<v[i][j]<<endl;
             if(j==c-1&&i==r-1)
             {sol[i][j]=1;
             continue;}
           //cout<<1;
           if(v[i][j]<0)
              { //cout<<2;
               int ans1=INT_MAX,ans2=INT_MAX;
               if(i+1!=r)
                ans1=max(1,sol[i+1][j]-v[i][j]);

              if(j+1!=c)
                ans2=max(1,sol[i][j+1]-v[i][j]);

              sol[i][j]=min(ans1,ans2);

              }
           else
           { //cout<<i<<"  qq "<<j;
               int ans1=INT_MAX,ans2=INT_MAX;
               if(i+1!=r)
                ans1=max(1,sol[i+1][j]-v[i][j]);
              if(j+1!=c)
                ans2=max(1,sol[i][j+1]-v[i][j]);

              sol[i][j]=min(ans1,ans2);

           }

         }
printf("%d\n",sol[0][0]);

   }

return 0;}
