// Problem: PIGBANK
// Submission ID: 25503252
// Language: 4540

#include<bits/stdc++.h>
#define MAX 10000000000000007
using namespace std;

int main()
{ int t;
  cin>>t;
  while(t--)
  { long long  e,f,w;
    cin>>e>>f;

    w=f-e;
    long long  n;
    cin>>n;
     vector<pair<long long,long long>>c(n+1);
    for(long long int i=1;i<=n;i++)
        cin>>c[i].first>>c[i].second;
     vector<long long>v(w+1,MAX);
     v[0]=0;
    for(long long int i=1;i<=w;i++)
       {for(long long int j=1;j<=n;j++)
          {
                  if(c[j].second<=i)
                 v[i]=min(v[i],  v[i-c[j].second]+(c[j].first));

          }
       }


 v[w]==MAX?printf("This is impossible."):printf("The minimum amount of money in the piggy-bank is %lld.",v[w]);
  cout<<endl;
  }

return 0;}
