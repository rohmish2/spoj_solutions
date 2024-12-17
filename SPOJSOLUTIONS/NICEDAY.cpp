// Problem: NICEDAY
// Submission ID: 26015273
// Language: 4732

#include<bits/stdc++.h>
using namespace std;
int siz;
int a[1000000];
struct score
{ int a,b,c;

};
bool comp(score &a1,score &b)
{
    return a1.a<b.a;
}
void update(int i,int val)
{   while(i<=siz)
      { a[i]=min(a[i],val);
        i+=i&(-i);
      }
}
int rngmin(int i)
{ int mini=siz+1;
    while(i>0)
    {  mini=min(mini,a[i]);
       i-=i&(-i);
    }
  return mini;
}
int main()
{ int t;
  scanf("%d",&t);
  while(t--)
  { scanf("%d",&siz);
    vector<score>ar(siz);
   for(int i=0;i<siz;i++)
        scanf("%d%d%d",&ar[i].a,&ar[i].b,&ar[i].c);
   for(int i=0;i<=siz;i++)
     a[i]=siz+10;
   sort(ar.begin(),ar.end(),comp);
  int ans=0;
  for(int i=0;i<siz;i++)
  {  if(ar[i].b==1)
       ans++;
     else
       {int l=rngmin(ar[i].b - 1);
        if(l>ar[i].c)
            ans++;}

      update(ar[i].b,ar[i].c);
  }
  printf("%d\n",ans);
  }

return 0;}
