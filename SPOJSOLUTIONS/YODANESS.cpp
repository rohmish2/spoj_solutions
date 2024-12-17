// Problem: YODANESS
// Submission ID: 25651684
// Language: 5828

#include<bits/stdc++.h>
#define scan(a) scanf("%d",&a)
using namespace std;
long cnt;
void mer(int l,int m,int h,vector<int>&a)
{ vector<int>la,lb,ans;

  for(int j=l;j<=m;j++)
  la.push_back(a[j]);

  for(int i=m+1;i<=h;i++)
  lb.push_back(a[i]);

 int ptr1=0,ptr2=0;
 while(ptr1<la.size()&&ptr2<lb.size())
 {
  if(la[ptr1]<lb[ptr2])
    {
     ans.push_back(la[ptr1]);
     ++ptr1;
     }
   else
   { ans.push_back(lb[ptr2]);
     cnt+=la.size()-ptr1;
     ++ptr2;
    }

 }
 while(ptr1<la.size())
 {
     ans.push_back(la[ptr1]);
     ptr1++;
 }
while(ptr2<lb.size())
{
     ans.push_back(lb[ptr2]);
     ptr2++;
}


for(int i=0,j=l;j<=h;j++,i++)
    a[j]=ans[i];

}
void fun(int l,int h,vector<int>&a)
{
    if(h>l)
    {int m=(l+h)>>1;
     fun(l,m,a);
     fun(m+1,h,a);
     mer(l,m,h,a);
    }
}
int main()
{int t;
 scan(t);
 while(t--)
 { map<string,int>m;
   int n;
   scan(n);
   for(int i=0;i<n;i++)
   { string b;
     cin>>b;
     m[b]=i;
   }
  vector<int>comp(n);
  for(int i=0;i<n;i++)
   { string b;
     cin>>b;
     comp[i]=m[b];
   }
  fun(0,n-1,comp);
  cout<<cnt<<endl;
  cnt=0;
 }
return 0;}
