// Problem: MAIN72
// Submission ID: 25882552
// Language: 5932

#include<bits/stdc++.h>
using namespace std;
int main()
{ int t;
  scanf("%d",&t);
  while(t--)
  {
   unordered_set<int>a;
   a.clear();
   a.insert(0);
   int n;
   scanf("%d",&n);
   vector<int>q(n);
   for(int i=0;i<n;i++)
    cin>>q[i];

   for(int i=0;i<n;i++)
   {vector<int>qi;
    for(auto k:a)
       {
        qi.push_back(k+q[i]);
       }
       for(auto j:qi)
        a.insert(j);
   }
   long long int ans=0;
    for(auto k:a)
       { //cout<<k<<endl;
           ans+=k;}
 printf("%lld\n",ans);
  }

  return 0;}
