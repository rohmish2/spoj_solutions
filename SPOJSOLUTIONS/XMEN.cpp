// Problem: XMEN
// Submission ID: 26606971
// Language: 8544

#include<bits/stdc++.h>
using namespace std;
void update(vector<int>&fen,int in,int val)
{

    while(in<=110000)
      {
         fen[in]=max(fen[in],val);
         in+=(in&-in);
      }
}
 int maxi(vector<int>&fen,int in)
 { int mxi=0;

   while(in>0)
   {
    mxi=max(mxi,fen[in]);
    in-=(in&-in);
   }

 return mxi;
 }
int main()
{
    int t;
    cin>>t;
    while(t--)
    {vector<int>fen(111001,0);
     int n;
      cin>>n;
      //int sex=1;
      unordered_map<int,int>mp;
    for(int i=0;i<n;i++)
    { int tmp;
      cin>>tmp;
      mp[tmp]=i+1;
    }
    vector<int>a(n);
    for(int i=0;i<n;i++)
     {int tmp;
      cin>>tmp;
      a[i]=mp[tmp];
    // cout<<tmp<<" "<<a[i]<<endl;
     }
     int ans=0;
    for(int i=0;i<n;i++)
    { int aa=maxi(fen,a[i]-1)+1;
      ans=max(aa,ans);
      update(fen,a[i],aa);

    }
    cout<<ans<<endl;
    }
return 0;}
