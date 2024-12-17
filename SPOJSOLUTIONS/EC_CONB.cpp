// Problem: EC_CONB
// Submission ID: 25579515
// Language: 4624

#include<bits/stdc++.h>
using namespace std;
int main()
{ long t;
  long long convert(long long a);
  cin>>t;
  while(t--)
  { long long a;
    cin>>a;
    if(a%2==0)
        a=convert(a);
    cout<<a<<endl;
  }

return 0;}
long long convert(long long a)
{ int t=log2(a);
  long long b=0;
  for(int i=t;i>=0;i--)
    { //cout<<t<<" "<<a<<endl;
        if(a%2!=0)
        b+=(long long)pow(2,i);
        a=a/2;
    }
return b;
}
