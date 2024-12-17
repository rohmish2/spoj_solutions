// Problem: TAP2013G
// Submission ID: 26078353
// Language: 4836

#include<bits/stdc++.h>
using namespace std;
int main()
{ int s;
  scanf("%d",&s);
  vector<int>a(s),q(s);
  for(int i=0;i<s;i++)
    scanf("%d",&a[i]);

  for(int i=0;i<s;i++)
    scanf("%d",&q[i]);
 sort(a.begin(),a.end());
 sort(q.begin(),q.end());
 int ans=0;
 int p1=0,p2=s-1;
 for(int i=s-1;i>=0;i--)
 { if(p2>=0&&q[p2]>a[i])
     {ans++;
     p2--;}
   else
   { p1++;}
 }
 printf("%d",ans);
return 0;}
