// Problem: ANARC09B
// Submission ID: 25651809
// Language: 4876

#include <iostream>
using namespace std;

unsigned long long int gcd(unsigned long long int a,unsigned long long int b)
{ if(b==0)
 return a;
    return gcd(b,a%b);
}
int main()
{   while(1)
    {
     unsigned long long int a,b;
       cin>>a>>b;
      if(a==b&&a==0)
        return 0;
      unsigned long long lcm;
     
      lcm=(a*b)/gcd(a,b);
      cout<<(lcm/a)*(lcm/b)<<endl;

    }
    return 0;
}
