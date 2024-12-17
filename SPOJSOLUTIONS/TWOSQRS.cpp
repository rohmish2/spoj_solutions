// Problem: TWOSQRS
// Submission ID: 25509124
// Language: 4484

#include<bits/stdc++.h>
using namespace std;
int main()
{ set<long long>m;



  int t;
  cin>>t;
  while(t--)
  { long long a,key=0;
    cin>>a;
    for(long long int i=0;i<=1000000&&i<a;i++)
    {
      if( floor(sqrt(a-(i*i)))*floor(sqrt(a-(i*i)))==a-(i*i))
        {key=1;
        break;}
    }
    key==0?cout<<"No\n":cout<<"Yes\n";

  }

return 0;}
