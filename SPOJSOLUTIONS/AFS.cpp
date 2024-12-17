// Problem: AFS
// Submission ID: 25879988
// Language: 19212

#include <bits/stdc++.h>
using namespace std;
long long int cnt[1000001],sol[1000001];
int main()
{

    for(int i=1;i*2<=1000000;i++)
       for(int j=i*2;j<=1000000;j+=i)
          cnt[j]+=i;

        sol[0]=sol[1]=0;
    for(int i=2;i<=1000000;i++)
      sol[i]=sol[i-1]+cnt[i];
    int t;
    cin>>t;
    while(t--)
    { int a;
      cin>>a;
      cout<<sol[a]<<endl;
    }

    return 0;
}
