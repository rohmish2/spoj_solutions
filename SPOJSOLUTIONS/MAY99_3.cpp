// Problem: MAY99_3
// Submission ID: 25842165
// Language: 4640

#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{   if(b==0)
    return a;
    return gcd(b,a%b);
}
int main()
{ int t;
  cin>>t;
  while(t--)
  {
       int x,y,z;
       cin>>x>>y>>z;
       if(max(x,y)<z)
        cout<<"NO\n";
       else
       { if(z%gcd(x,y)==0)
          cout<<"YES\n";
         else
          cout<<"NO\n";
       }
  }

return 0;}
