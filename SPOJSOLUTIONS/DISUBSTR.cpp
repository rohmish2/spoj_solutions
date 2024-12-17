// Problem: DISUBSTR
// Submission ID: 25614747
// Language: 4676

#include<bits/stdc++.h>
using namespace std;
long common(string a,string b)
{
 long i,cnt=0;
 for( i=0;i<a.size()&&i<b.size();i++)
     {
         if(a[i]==b[i])
         {
           cnt++;
         }
         else
         break;
     }
return cnt;
}
int main()
{ int t;
  cin>>t;
  while(t--)
  {
      string a;
      set<string>s;
      cin>>a;
      for(int i=0;i<a.size();i++)
        {s.insert(a.substr(i,a.size()-i));}
      vector<long>lcp(s.size()+1,0);
      long k=0,l=0;
      auto prev=s.begin();
      for(auto i=s.begin();i!=s.end();i++)
      { if(k==0)
         { k++;
           prev=i;
           continue;}
        lcp[k++]=common(*i,*prev);
        l+=lcp[k-1];
       prev=i;
      }
      cout<<((a.size())*(a.size()+1))/2 - l<<endl;
  }
return 0;}
