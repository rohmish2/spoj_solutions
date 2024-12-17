// Problem: MANGOES
// Submission ID: 25873313
// Language: 4772

#include<bits/stdc++.h>
using namespace std;
int main()
{ int t;
  cin>>t;
  while(t--)
  { long int o,n;
    cin>>o;
    n=o;
    n-=2;
    if(n%2==0)
     n--;
    long sum=(n+1)*(1+n);
    cout<<(sum/4)%o<<endl;

  }

return 0;}
