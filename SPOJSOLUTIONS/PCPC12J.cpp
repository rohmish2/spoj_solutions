// Problem: PCPC12J
// Submission ID: 26198757
// Language: 4636

#include<bits/stdc++.h>
using namespace std;
int main()
{ int t;
  scanf("%d",&t);
  while(t--)
  { int s;
    scanf("%d",&s);
    vector<int>a(s);
    map<int,int>mp;
    for(int i=0;i<s;i++)
         {scanf("%d",&a[i]);
         mp[a[i]]+=1;}
int     bestf=0;
    int ans=-1;
    for(auto i:mp)
    { int d=i.first,f=i.second;
       if(f%d==0&&f>bestf)
          {ans=d;
          bestf=f;}
    }
     cout<<ans<<endl;


  }

return 0;}
