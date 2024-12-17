// Problem: SUMFOUR
// Submission ID: 25576260
// Language: 102032

#include<bits/stdc++.h>
using namespace std;
int main()
{ vector<long long>a,b,c,d;
 ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 long t;
 cin>>t;
 while(t--)
 {
   for(int i=1;i<=4;i++)
   { long q;
     cin>>q;
     if(i%4==1)
        a.push_back(q);
     else if(i%4==2)
        b.push_back(q);
     else if(i%4==3)
        c.push_back(q);
     else
        d.push_back(q);
   }
 }
 vector<long long>sum1,sum2;
 for(int i=0;i<a.size();i++)
        for(int j=0;j<b.size();j++)
          {
            sum1.push_back(a[i]+b[j]);
            sum2.push_back(c[i]+d[j]);
          }
 sort(sum1.begin(),sum1.end());
 sort(sum2.begin(),sum2.end());
 long long cnt=0;
 for(auto j:sum1)
 {
  long long k=j*-1;
  cnt+=upper_bound(sum2.begin(),sum2.end(),k)-lower_bound(sum2.begin(),sum2.end(),k);

 }
 cout<<cnt;
return 0;}
