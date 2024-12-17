// Problem: GDCOFTI
// Submission ID: 26196377
// Language: 4832

#include<bits/stdc++.h>
using namespace std;
unsigned long long gcd(unsigned long long a,unsigned long long b )
{ if(b==0)
  return a;
  return gcd(b,a%b);
}
int main()
{ unsigned long long n1,n2,n3;
cin>>n1>>n2>>n3;
   cout<<gcd(n3,gcd(n1,n2));
return 0;}
