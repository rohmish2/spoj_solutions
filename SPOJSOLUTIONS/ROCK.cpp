// Problem: ROCK
// Submission ID: 25650326
// Language: 4460

#include<stdio.h>
int memoize[310][310];
char b[300];
int cum[300];
int fun(int s,int e)
{  if(memoize[s][e]!=-1)
        return memoize[s][e];
    if(e==s)
    {memoize[s][e]=b[e]-'0';
           return b[e]-'0';}


    if(cum[e+1]-cum[s]>(e-s+1)/2)
       {   memoize[s][e]=e-s+1;
           return e-s+1;}
//memoize[s][e]=fun(s,s)+fun(s+1,e);
for(int i=s;i<e;i++)
    {    if(fun(s,i)+fun(i+1,e)>memoize[s][e])
        memoize[s][ e]=fun(s,i)+fun(i+1,e);
    }
 return memoize[s][e];
}
int main()
{ int t;
  //cin>>t;
  scanf("%d",&t);
  while(t--)
  {memset(memoize,-1,sizeof(memoize));

    int s;
    /*for(int i=0;i<=202;i++)
        for(int j=0;j<=202;j++)
          memoize[i][j]=-1;*/

    scanf("%d",&s);
   scanf("%s",b);
    for(int i=0;i<s;i++)
        cum[i+1]=cum[i]+(b[i]-'0');

    //for(int i=0;i<t;i++)
   printf("%d\n",fun(0,s-1));


  }
return 0;}
