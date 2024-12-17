// Problem: PANCAKES
// Submission ID: 26596388
// Language: 4676

#include<bits/stdc++.h>
using namespace std;
int main()
{ int n,m;

  cin>>n>>m;
  while(n!=0&&m!=0)
  { vector<int>q(n);
         for(int i=0;i<n;i++)
             cin>>q[i];
   int k=0,h=0;

    for(int i=1;i<=m;i++)
     { int smp=10000000;
         for(int j=0;j<n;j++)
         {  int tmp;
            cin>>tmp;
            if(tmp==0)
                continue;
             smp=min((q[j]*10)/tmp,smp);
         }
         // cout<<smp<<endl;
       if(smp>k)
       {
           k=smp;
           h=i;
       }
     }
      if(k==10000000)
        k=0;
      if(h==0)
        h=1;
     cout<<h<<" "<<k<<endl;
   cin>>n>>m;}
return 0;}
