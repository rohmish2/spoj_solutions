// Problem: SUBS
// Submission ID: 26174522
// Language: 4528

#include<bits/stdc++.h>
using namespace std;
bool fun(string a,string b,int qq)
{ int cur=0,idx=0;
   if(qq==0)
    return true;
   for(auto i:b)
   {
        if(i==a[idx])
        { cur++;
          if(cur==qq)
               {idx++;
               cur=0;}
          if(idx==a.size())
            return true;
        }
   }

 return false;
}
int main()
{ int t;
  scanf("%d",&t);
  while(t--)
  {
   string x,y;
   cin>>x>>y;
   //cout<<"sex"<<fun(x,y,1)<<endl;
   int h=y.size(),l=0,ans=0,m;
   while(h>=l)
   { m=(h+l)>>1;
     //cout<<l<<" "<<h<<endl;
     if(fun(x,y,m))
     {ans=m;
     l=m+1;}
     else
     h=m-1;
   }
   printf("%d\n",ans);
  }
  return 0;}
