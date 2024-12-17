// Problem: AE1B
// Submission ID: 25619400
// Language: 4840

#include<bits/stdc++.h>
using namespace std;
int main()
{long a,b,c;
cin>>a>>b>>c;
vector<long>v(a+2,0);
for(int i=0;i<a;i++)
    cin>>v[i];
sort(v.begin(),v.end());
c=c*b;
long p1=0,p2=0,ans=0,sum=v[0],aq=999999;
while(p2<v.size())
{
  if(sum>=c)
  { aq=min(a,p2-p1+1);
    sum-=v[p1++];
    if(p1>p2)
        p2=p1;
  }
 else
  sum+=v[++p2];

}
cout<<aq;
return 0;}
