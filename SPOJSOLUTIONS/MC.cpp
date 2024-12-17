// Problem: MC
// Submission ID: 26072413
// Language: 6292

#include<bits/stdc++.h>
using namespace std;
int main()
{ while(1)
   { string a,b;
    cin>>a;
    if(a=="#")
        return 0;
    cin>>b;
    vector<vector<int>>ans(a.size()+1,vector<int>(b.size()+1,0));
     int ct=0;
     for(int i=0;i<=a.size();i++,ct+=15)
       ans[i][0]=ct;
         ct=0;
    for(int i=0;i<=b.size();i++,ct+=30)
       ans[0][i]=ct;

    for(int i=1;i<=a.size();i++)
        for(int j=1;j<=b.size();j++)
         {
            if(a[i-1]!=b[j-1])
             ans[i][j]=min(ans[i-1][j-1]+45,min(ans[i-1][j]+15,ans[i][j-1]+30));
            else
             ans[i][j]=min(ans[i-1][j-1],min(ans[i-1][j]+15,ans[i][j-1]+30));


         }
    

   printf("%d\n",ans[a.size()][b.size()]);
   }

return 0;}
