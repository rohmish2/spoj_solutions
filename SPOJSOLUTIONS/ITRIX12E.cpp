// Problem: ITRIX12E
// Submission ID: 25911066
// Language: 4248

#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
int mat[10][10]={ {1,0,0,0,0,0,0,0,0,0},
                  {1,1,1,0,1,0,1,0,0,0},
                  {1,1,0,1,0,1,0,0,0,1},
                  {1,0,1,0,1,0,0,0,1,0},
                  {1,1,0,1,0,0,0,1,0,1},
                  {1,0,1,0,0,0,1,0,1,0},
                  {1,1,0,0,0,1,0,1,0,0},
                  {1,0,0,0,1,0,1,0,0,0},
                  {1,0,0,1,0,1,0,0,0,1},
                  {1,0,1,0,1,0,0,0,1,0},
                   };
vector<vector<long>>mul(vector<vector<long>> a, vector<vector<long>> b)
{ vector<vector<long>>q(10,vector<long >(10,0));
    for(int i=0;i<10;i++)
     for(int j=0;j<10;j++)
        for(int k=0;k<10;k++)
         q[i][j]=(q[i][j]+(a[i][k]*b[k][j])%mod)%mod;

return q;
}
 vector<vector<long>>power(vector<vector<long>>mm,int q)
 { vector<vector<long>>id(10,vector<long>(10,0));
    for(int i=0;i<10;i++)
        id[i][i]=1;
    while(q>1)
    { if(q&1)
        {id=mul(id,mm);}
      mm=mul(mm,mm);
     q=q>>1;
    }
return mul(mm,id);
}
long sol(int n)
 { vector<vector<long>>mm(10,vector<long>(10));
   for(int i=0;i<10;i++)
      for(int j=0;j<10;j++)
        mm[i][j]=mat[i][j];
   if(n==0)
        return 0;
   if(n==1)
        return 4;
   if(n==2)
        return 33;
   vector<long >sample={4,4,4,3,4,3,3,2,3,3};
   vector<long>ans(10,0);
   mm=power(mm,n-2);
   for(int j=0;j<10;j++)
        for(int k=0;k<10;k++)
          {ans[j]=(ans[j]+(sample[k]*mm[k][j])%mod)%mod;}
   long int to=0;
   for(auto j:ans)
    to=(to+j)%mod;
   return to;


 }
int main()
 { int t;
  scanf("%d",&t);
   while(t--)
   { int n;
    scanf("%d",&n);
   printf("%ld\n",sol(n));
   }
 return 0;}
