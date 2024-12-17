// Problem: CZ_PROB1
// Submission ID: 26025148
// Language: 7672

#include<bits/stdc++.h>
using namespace std;
int sieve[1000001];
int main()
{  for(int i=2;i*i<=1000000;i++)
    if(sieve[i]==0)
        for(int j=i*i;j<=1000000;j+=i)
           sieve[j]=1;
//cout<<"s";
 vector<int>p;
 //p.push_back(2);
 for(int i=1;i<=7994;i++)
    for(int j=i;(i*i)+(j*j)<=7994;j++)
      if(i*i +j*j <=1000000&&sieve[i*i +j*j]==0)
         {p.push_back(i*i +j*j);}
sort(p.begin(),p.end());
 

 int t;
 scanf("%d",&t);
 while(t--)
 { int a,b;
   scanf("%d%d",&a,&b);
   vector<int>ans(p[a-1]+1,1);
   for(int i=2;i<=b;i++)
      for(int j=i;j<=p[a-1];j++)
          ans[j]+=ans[j-i];
   printf("%d\n",ans[p[a-1]]);
 }
return 0;}
