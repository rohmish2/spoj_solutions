// Problem: LKS
// Submission ID: 25883147
// Language: 11508

#include<bits/stdc++.h>
using namespace std;
int k1[2000001];
int main()
{ int n,w;
  scanf("%d %d ",&w,&n);
  vector<vector<int>>a(n,vector<int>(2,0));

  for(int i=0;i<n;i++)
     { 
       scanf("%d %d ",&a[i][0],&a[i][1]);
       for(int j=w;j>=a[i][1];j--)
            k1[j]=max(k1[j],k1[j-a[i][1]]+a[i][0]);
       }

   printf("%d",k1[w]);

  return 0;}
