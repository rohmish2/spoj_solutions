// Problem: MRECAMAN
// Submission ID: 25606396
// Language: 34320

#include<bits/stdc++.h>
using namespace std;
long long a[500001];
int main()
{ unordered_map<long long,int>s;

 for(int i=0;i<=500000;i++)
 s[i]=0;
 s[0]=1;
 for(int i=1;i<=500000;i++)
 { long long k=a[i-1]-i;
   if(k>0&&s[k]==0)
    {a[i]=k;
    s[k]=1;}
    else
    {a[i]=a[i-1]+i;
    s[a[i]]=1;}

 }
 while(1)
 { long in;
   cin>>in;
   if(in==-1)
    return 0;
   cout<<a[in]<<endl;

 }

return 0;}
