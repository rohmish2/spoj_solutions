// Problem: HAYBALE
// Submission ID: 26078020
// Language: 11244

#include<bits/stdc++.h>
using namespace std;
int a[1000010];
//int b[1000010];
int main()
{ int n,k;
  scanf("%d%d",&n,&k);
  while(k--)
  { int t1,t2;
    scanf("%d%d",&t1,&t2);
    a[t1-1]++;
    a[t2]--;
  }
  vector<int>q;
  int adder=0;
  for(int i=0;i<n;i++)
  { adder+=a[i];
   //cout<<adder<<" ";
    q.push_back(adder);
  }
  sort(q.begin(),q.end());
  //if(n%2==0)
  printf("%d",q[n/2]);
  return 0;}
