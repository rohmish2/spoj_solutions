// Problem: MAJOR
// Submission ID: 25573048
// Language: 4632

#include<bits/stdc++.h>
using namespace std;
int main()
{ ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
  cin>>t;
  while(t--)
  { long n,k=1,m,l;
   cin>>n;
   l=n;
   map<int,long>mpp;
   mpp.clear();
   while(n--)
   {
       long g;
       cin>>g;
       if(k==0)
       continue;
       mpp[g]++;
       if(mpp[g]>l/2)
        { //cout<<g<<" "<<mpp[g]<<" "<<l/2<<endl;
        k=0;
        m=g;}

   }
    k==0?cout<<"YES "<<m:cout<<"NO";
    cout<<endl;
  }

return 0;}
