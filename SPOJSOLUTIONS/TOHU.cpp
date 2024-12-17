// Problem: TOHU
// Submission ID: 25862379
// Language: 4612

#include<bits/stdc++.h>
using namespace std;
int main()
{int t;
 cin>>t;
 while(t--)
  { double a;
    cin>>a;
    double c=1,b=4,d=2;
    double a1=c/b,a2=c/(d*(a+c)),a3=c/(d*(a+d));

    printf("%.11f\n",a1-a2+a3+c/d);
    //cout<<setprecision(12)<<;
    //printf("%lf\n",ans);

  }
return 0;}
