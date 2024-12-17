// Problem: DQUERY
// Submission ID: 25921034
// Language: 11244

#include<bits/stdc++.h>
using namespace std;
int s[311111],kt[1111111];
int qs;
struct query{
int l,r,block,ind;
query(int a,int b,int d)
{ l=a;
  r=b;
  block=a/qs;
  ind=d;
}
};
int main()
{ int n;
  scanf("%d",&n);
  for(int i=0;i<n;i++)
    scanf("%d",&s[i]);
  int q;
  scanf("%d",&q);
  qs=ceil(sqrt(q));
  vector<query>p;
  for(int i=0;i<q;i++)
  { int l,r;
    scanf("%d%d",&l,&r);
   p.push_back(query(l-1,r-1,i));
  }
  int ans=0;
  int lptr=0,rptr=0;
  // kt[s[lptr]]++;
  sort(p.begin(),p.end(),[](query a,query b)
        { if(a.block!=b.block)
            return a.block<b.block;
          else
            return a.r<b.r;
        });
  vector<int>toprint(q);
  for(auto j:p)
  { 
    if(lptr<j.l)
       {    while(lptr<j.l)
           { kt[s[lptr]]--;
               if(kt[s[lptr]]==0)
                ans--;
               lptr++;
            }
        //rptr=max(lptr,rptr);
        }
    if(lptr>j.l)
       {   while(lptr>j.l)
           {
             kt[s[lptr-1]]++;
             if(kt[s[lptr-1]]==1)
                ans++;
             lptr--;
            }
       //rptr=max(lptr,rptr);
       }
    if(rptr<=j.r)
     {  while(rptr<=j.r)
        { //rptr++;
          kt[s[rptr]]++;
          if(kt[s[rptr]]==1)
             ans++;
          rptr++;
        }
     }
    if(rptr>(j.r)+1)
      {
        while(rptr>(j.r)+1)
        { kt[s[rptr-1]]--;
          if(kt[s[rptr-1]]==0)
            ans--;

        rptr--;
        }

      }

  toprint[j.ind]=ans;

  }
  for(auto i:toprint)
    printf("%d\n",i);
  return 0;}
