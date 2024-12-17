// Problem: UCV2013J
// Submission ID: 26063928
// Language: 7488

#include<bits/stdc++.h>
using namespace std;
int main()
{ int s;
  scanf("%d",&s);
  while(s!=0)
  { vector<int>a(s);
    for(int i=0;i<s;i++)
        scanf("%d",&a[i]);
    int k;
    if(s%2==0)
      k=s/2;
      else
      k=(s+1)/2;
      int ans=0;
      for(int i=s-1;k>0;i--,k--)
      ans+=a[i];
      printf("%d\n",ans);
  scanf("%d",&s);}

return 0;}
