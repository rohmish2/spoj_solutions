// Problem: QUE2
// Submission ID: 26056754
// Language: 4720

#include<bits/stdc++.h>
using namespace std;
void put(vector<int>&s,int x)
{ while(x<=s.size()-1)
   {s[x]+=1;
   x+=(x&-x);}
}
void del(vector<int>&s,int x)
{ while(x<=s.size()-1)
   {s[x]-=1;
   x+=(x&-x);}
}
int sum(vector<int>&s,int in)
{ int sum=0;
 while(in>0)
 { sum+=s[in];
  in-=(in&-in);
 }
 return sum;
}
int main()
{ int t;
  scanf("%d",&t);
  while(t--)
  { int s;
    scanf("%d",&s);
    vector<pair<int,int>>a(s);
    for(int i=0;i<s;i++)
    {scanf("%d",&a[i].first);}
    for(int i=0;i<s;i++)
     scanf("%d",&a[i].second);
     sort(a.begin(),a.end(),[](pair<int,int> a, pair<int,int>b){return a.first<b.first;});
     vector<int>fen(s+1);
     for(int i=1;i<=s;i++)
        put(fen,i);
    vector<int>sol(s);
     for(int i=0;i<s;i++)
     { int h=s,l=0;
       int mid,ans;
       //cout<<a[i].first<<"  ";
       while(h-l>=0)
       { mid=(h+l)>>1;
         //cout<<"mid="<<mid<<" "<<k;
         int k=sum(fen,mid);
        // cout<<"mid="<<mid<<" "<<k<<endl;
         if(k<a[i].second+1)
            l=mid+1;
         else
         { ans=mid;
           //cout<<"qns changed to"<<ans<<endl;
           h=mid-1;
         }
       }
      //cout<<"ans="<<ans<<endl;
      sol[ans-1]=a[i].first;
      del(fen,ans);
     }
  for(auto i:sol)
    printf("%d ",i);
 printf("\n");
  }

return 0;}
