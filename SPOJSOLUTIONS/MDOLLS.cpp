// Problem: MDOLLS
// Submission ID: 26635704
// Language: 4672

#include<bits/stdc++.h>
using namespace std;
bool cc(pair<int,int>q,pair<int,int>w)
{ return (q.first<w.first&&q.second<w.second);}
int main()
{ int t;
  cin>>t;
  while(t--)
  { int n;
     cin>>n;
     vector<pair<int,int>>p(n);
     for(int i=0;i<n;i++)
        cin>>p[i].first>>p[i].second;

     sort(p.begin(),p.end(),[](pair<int,int>a,pair<int,int>b){
          if(a.first!=b.first)
            return a.first<b.first;
          return a.second>b.second;});
vector<pair<int,int>>p1;
p1.push_back(p[n-1]);
int cnt=1;
//for(auto i:p)
  //  cout<<i.first<<" "<<i.second<<endl;
for(int i=n-2;i>=0;i--)
  { bool k=false;
    for(int j=0;j<p1.size();j++)
    {
      if(cc(p[i],p1[j]))
        { p1[j]=p[i];
          k=true;
          break;
        }
        }
    if(!k)
     { p1.push_back(p[i]);

      }

    }


 cout<<p1.size()<<endl;

 }

return 0;}
