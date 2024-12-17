// Problem: MMAXPER
// Submission ID: 25850261
// Language: 4784

#include<bits/stdc++.h>
using namespace std;
int main()
{ int n;
  cin>>n;
  vector<int>h(n),b(n),bh(n),bb(n);
  for(int i=0;i<n;i++)
  cin>>h[i]>>b[i];
  bh[0]=h[0];
  bb[0]=b[0];
  for(int i=1;i<n;i++)
   { bh[i]=max(h[i]+bb[i-1]+abs(h[i-1]-b[i]),h[i]+bh[i-1]+abs(b[i-1]-b[i]));
     bb[i]=max(b[i]+bb[i-1]+abs(h[i-1]-h[i]),b[i]+bh[i-1]+abs(b[i-1]-h[i]));

     //cout<<i<<" "<<bh[i]<<" "<<bb[i]<<endl;
   }
  cout<<max(bh[n-1],bb[n-1]);
  return 0;}
