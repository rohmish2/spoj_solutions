// Problem: MAXLN
// Submission ID: 25488503
// Language: 4800

#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  for(int i=1;i<=t;i++)
  {
   double r;
   cin>>r;
   double exp=(4*r*r*(((16*r*r)-1)/(16*r*r)))+r*(1/(2*r));
   printf("Case %d: %0.2f\n",i,exp);
  }
return 0;}
