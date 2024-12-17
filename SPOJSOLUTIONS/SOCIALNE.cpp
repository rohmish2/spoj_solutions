// Problem: SOCIALNE
// Submission ID: 26199495
// Language: 4680

#include<bits/stdc++.h>
using namespace std;
int main()
{ int t;
  scanf("%d",&t);
  while(t--)
  { int s;
    //scanf("%d",&s);
    string tmp;
    cin>>tmp;
     s=tmp.size();
    vector<string>a1(s);
    a1[0]=tmp;
    for(int i=1;i<s;i++)
        cin>>a1[i];
    vector<vector<int>>a(s,vector<int>(s,10000));
    for(int i=0;i<s;i++)
         for(int j=0;j<s;j++)
         { //char ar;
           //cin>>ar;
           if(a1[i][j]=='Y')
             a[i][j]=1;
         }
   for(int k=0;k<s;k++)
    for(int i=0;i<s;i++)
         for(int j=0;j<s;j++)
            a[i][j]=min(a[i][j],a[i][k]+a[k][j]);

   int ans=-1,id;

   for(int i=0;i<s;i++)
     {
         int sol=0;
         for(int j=0;j<s;j++)
      {  if(i==j)
          continue;
          if(a[i][j]==2)
         sol++;
     }
    // cout<<i<<" "<<" "<<sol<<endl;
      if(sol>ans)
         {id=i;
         ans=sol;}
     }
     printf("%d %d\n",id,ans);


  }

return 0;}
