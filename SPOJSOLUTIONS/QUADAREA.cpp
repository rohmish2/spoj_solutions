// Problem: QUADAREA
// Submission ID: 25511957
// Language: 4788

#include<bits/stdc++.h>
using namespace std;
int main()
{ int t;
  cin>>t;
  while(t--)
  { double a,b,c,d,s,ans;
    cin>>a>>b>>c>>d;
    s=(a+b+c+d)/2.00;
    ans=(double)((s-a)*(s-b)*(s-c)*(s-d));
    //cout<<sqrt(ans)<<endl;
    printf("%.2f\n",sqrt(ans));

  }

return 0;}
