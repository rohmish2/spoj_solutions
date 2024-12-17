// Problem: ENIGMATH
// Submission ID: 25508920
// Language: 4664

#include <iostream>

using namespace std;
long long gcd(long long a,long long b);

int main()
{ int t;
  cin>>t;
  while(t--)
  {
    long long a,b;
    cin>>a>>b;
    long long g=gcd(a,b);
    cout<<b/g<<" "<<a/g<<endl;
  }

    return 0;
}
long long gcd(long long a,long long b)
{
  if(b==0)
  return a;
 return  gcd(b,a%b);
}