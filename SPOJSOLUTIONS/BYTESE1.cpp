// Problem: BYTESE1
// Submission ID: 25979091
// Language: 4652

#include<bits/stdc++.h>
using namespace std;
struct v{
int r,c,val;
v(int a,int b,int g)
{ r=a;
  c=b;
  val=g;
}
};
struct comp{
bool operator()(v const &a1,v const &a2)
{
    return a1.val<a2.val;
}};
int main()
{ int t;
  scanf("%d",&t);
  while(t--)
  {
   int r,c;
   scanf("%d%d",&r,&c);
   vector<vector<int>>mat(r,vector<int>(c)),visi(r,vector<int>(c,0));
   for(int i=0;i<r;i++)
      for(int j=0;j<c;j++)
        scanf("%d",&mat[i][j]);
   priority_queue<v,vector<v>,comp>p;
   int tr,tc,ti;
   scanf("%d%d%d",&tr,&tc,&ti);
    p.push(v(0,0,-1*mat[0][0]));
   int ans;
   while(!p.empty())
    {  v ve=p.top();
       p.pop();
       if(ve.r==tr-1&&ve.c==tc-1)
       {ans=-1*ve.val;
       break;}
       visi[ve.r][ve.c]=1;
       if(ve.r!=r-1&&visi[ve.r+1][ve.c]==0)
        p.push(v(ve.r+1,ve.c,ve.val - mat[ve.r+1][ve.c]));
       if(ve.r!=0&&visi[ve.r-1][ve.c]==0)
        p.push(v(ve.r-1,ve.c,ve.val - mat[ve.r-1][ve.c]));
       if(ve.c!=0&&visi[ve.r][ve.c-1]==0)
        p.push(v(ve.r,ve.c-1,ve.val - mat[ve.r][ve.c-1]));
       if(ve.c!=c-1&&visi[ve.r][ve.c+1]==0)
        p.push(v(ve.r,ve.c+1,ve.val - mat[ve.r][ve.c+1]));

    }
    if(ans>ti)
        printf("NO\n");
    else
        printf("YES\n%d\n",ti-ans);

}
  return 0;}
