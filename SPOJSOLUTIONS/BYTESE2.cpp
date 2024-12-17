// Problem: BYTESE2
// Submission ID: 25591055
// Language: 4740

#include<bits/stdc++.h>
using namespace std;
long long int carr[2000];
int main()
{ int t;
  cin>>t;
  while(t--)
  { long long int q;
    cin>>q;
    memset(carr,0,sizeof(carr));
    vector<pair<long long,long long>>t;
    set<long long>ss;
    for(int i=0;i<q;i++)
    { long long a1,a2;
      cin>>a1>>a2;
      ss.insert(a1);
      ss.insert(a2);
      t.push_back(make_pair(a1,a2));
    }
    long int k=1;
    map<long long,int>mp;
    for(auto i:ss)
    { if(mp.find(i)==mp.end())
        mp[i]=k++;
     if(mp.find(i+1)==mp.end())
      mp[i+1]=k++;}

    for(auto i:t)
    {
        carr[mp[i.first]]++;
        carr[mp[i.second+1]]--;
    }
    //for(auto i:carr)
      //  cout<<i<<" ";
  long long maxi=0,ans=-1;
  for(int i=1;i<2000;i++)
  {
    maxi+=carr[i];
    ans=max(ans,maxi);
  }
  cout<<ans<<endl;
  }
return 0;}
