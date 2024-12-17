// Problem: RPLH
// Submission ID: 25870542
// Language: 4616

#include <bits/stdc++.h>

using namespace std;

int main()
{   int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    { double d,v,g;
      cin>>d>>v;
      g=9.806;
      double m=(d*g)/(v*v*2.00);
      double pi=acos(0.0);
      //cout<<m<<" "<<sin(pi)<<endl;
      if(m<=.5)
      {double high=pi/2.0,low=0,mid,tt=2,n=90;
      while(sin(high)*sin(pi-high)-sin(low)*sin(pi-low)>1.e-12)
      { mid=(low+high)/tt;
      // cout<<mid<<" "<<sin(mid)*sin(pi-mid)<<endl;
        if(sin(mid)*sin(pi-mid)>m)
           high=mid;
        else
           low=mid;
      }
      double sex=57.2958;
     printf("Scenario #%d: %.2f\n",i,mid*sex);}
     else
     printf("Scenario #%d: -1\n",i);
    }
   return 0;
}
