// Problem: TRT
// Submission ID: 25496914
// Language: 26240

#include<bits/stdc++.h>
using namespace std;
//map<tuple<long,long,long>,long> m;
long a[2000][2000],sum[2001];
//long fun(long i,long l,long day,deque<long>&q);
int main()
{ //map<tuple<long,long,long>,long> m;
    long n;
  scanf("%ld",&n);
  deque<long>q(n);
  for(int i=0;i<n;i++)
    {scanf("%ld",&q[i]);
     sum[i+1]=sum[i]+q[i];
    }
int c=0;
for(int diff=0;diff<n;diff++)
 {   for(int i=0;i+diff<n;i++)
       {   int j=i+diff;
           if(i==i+diff)
            a[i][i+diff]=q[i];
           else
            a[i][i+diff]=max(q[i]+a[i+1][j]+((sum[j+1]-sum[i+1])*(diff-j+i+1)),q[j]+a[i][j-1]+((sum[j]-sum[i])*(diff-j+i+1)));
       }
 }
 

  cout<<a[0][n-1];

return 0;}

