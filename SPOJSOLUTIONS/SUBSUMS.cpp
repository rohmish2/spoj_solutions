// Problem: SUBSUMS
// Submission ID: 25868269
// Language: 5856

#include<bits/stdc++.h>
using namespace std;
long long ans;
long n,a,b;
vector<long long >sumreturner(vector<long long>ar,long n)
{ long k=(1<<n);
  //cout<<"k"<<k;
  vector<long long int>sumi;
  for(long int i=0;i<k;i++)//all nums b/w 1 and 2^n
  { long long int sum=0;
    for(long int j=0;j<n;j++)
    {
        if((i&(((long)1)<<j)))
            sum+=ar[j];
    }

    sumi.push_back(sum);
  }
return sumi;
}
int main()
{ //long int n,a,b;
  cin>>n>>a>>b;
  vector<long long int>ar1,ar2,v(n);
  for(int i=0;i<n;i++)
     cin>>v[i];
  sort(v.begin(),v.end());
  for(int i=0;i<n;i++)
    {
        if(i<n/2)
        ar1.push_back(v[i]);
        else
        ar2.push_back(v[i]);
    }

 vector<long long>sum1=sumreturner(ar1,ar1.size());
 vector<long long>sum2=sumreturner(ar2,ar2.size());

sort(sum2.begin(),sum2.end());
 for(auto j:sum1)
 {

   auto  w=lower_bound(sum2.begin(),sum2.end(),a-j);//correct
   auto  kq=upper_bound(sum2.begin(),sum2.end(),b-j);

         ans+=(kq-sum2.begin())-(w-sum2.begin());}


cout<<ans<<endl;
return 0;}
