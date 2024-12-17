// Problem: MPILOT
// Submission ID: 26016716
// Language: 4784

#include<bits/stdc++.h>
using namespace std;
 int ap[2][10001];
int main()
{ int n;
  scanf("%d",&n);
  vector<int>m(n+1),a(n+1);
  for(int i=1;i<=n;i++)
    scanf("%d%d",&m[i],&a[i]);

  ap[1][1]=a[1];
  for(int i=2;i<=n;i++)
   { int mm=min(i,n/2),ii=i%2;
     ap[ii][0]=ap[1-ii][1]+m[i];
     ap[ii][mm]=ap[1-ii][mm-1]+a[i];
     for(int j=1;j<mm;j++)
        ap[ii][j]=min(ap[1-ii][j+1]+m[i],ap[1-ii][j-1]+a[i]);

   }
   printf("%d",ap[0][0]);

return 0;}
