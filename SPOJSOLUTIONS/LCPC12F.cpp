// Problem: LCPC12F
// Submission ID: 26209919
// Language: 4524

#include<bits/stdc++.h>
using namespace std;
int main()
{ int t;
  scanf("%d",&t);
  int cnt=1;
  while(t--)
  {
    int x,n;
    scanf("%d%d",&x,&n);
    vector<long long int>c(n),aa(3000,0);
    for(int i=0;i<n;i++)
        scanf("%d",&c[i]);
    long long int ans=0;
    for(auto i:c)
    { if(i<=x)
        { ans+=aa[x-i];
          aa[i]++;
        }
    }
   printf("%d. %lld\n",cnt++,ans);
  }
  return 0;}
