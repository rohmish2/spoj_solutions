// Problem: BUSYMAN
// Submission ID: 25505035
// Language: 4752

#include<bits/stdc++.h>
using namespace std;
bool fun(pair<int,int> i,pair <int,int> j)
{   if(i.second!=j.second)
    return i.second<j.second;
    else
    return i.first<j.first;
}
int main()
{ int t;
  cin>>t;
  while(t--)
  {
  // vector<pair<int,int>>a;
   int s;
   cin>>s;
   vector<pair<int,int>>a(s);
   for(int i=0;i<s;i++)
   cin>>a[i].first>>a[i].second;
   sort(a.begin(),a.end(),fun);
    int st=0,ans=0;
   for(int i=0;i<s;i++)
   { if(a[i].first>=st)
     { ans++;
       st=a[i].second;
     }

   }
 cout<<ans<<endl;
  }
return 0;}
