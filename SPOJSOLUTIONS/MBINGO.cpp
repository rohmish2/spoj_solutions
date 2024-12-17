// Problem: MBINGO
// Submission ID: 26597578
// Language: 4656

#include<bits/stdc++.h>
using namespace std;
int main()
{ int n,b;
  cin>>n>>b;
  while(n!=0&&b!=0)
  { vector<int>a(n+1,0);
    vector<int>q(b);
    for(int i=0;i<b;i++)
        cin>>q[i];
    sort(q.begin(),q.end());
    int k=0;
   for(int i=0;i<b;i++)
      for(int j=i;j<b;j++)
         {
           if(a[abs(q[i]-q[j])]==0)
           { k++;
             a[abs(q[i]-q[j])]=1;
           }
         }


 if(k==n+1)
    cout<<"Y\n";
  else
    cout<<"N\n";
   cin>>n>>b;


  }
 return 0;}
