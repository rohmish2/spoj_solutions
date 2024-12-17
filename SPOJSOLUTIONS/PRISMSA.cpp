// Problem: PRISMSA
// Submission ID: 25869989
// Language: 4780

#include<bits/stdc++.h>
using namespace std;
double cuberoot(double a)
{ double l=0.0,h=a,q=2,mid=(l+h)/q,t;
 // cout<<l<<" "<<h<<" "<<mid;
  while(h-l>1.e-6)
  { mid=(l+h)/q;
   // cout<<"sex\n";
    //cout<<endl<<1<<" "<<mid;
    t=mid*mid*mid;
    if(t>a)
    h=mid;
    else
    l=mid;
  }

return mid;}
int main()
{ int t;
  cin>>t;
  while(t--)
  { double v;
    cin>>v;
    double q=2,q1=3,q2=12;
     //cout<<q*q*v<<endl;
    //cout<<"sex";
    double a=cuberoot(q*q*v);

    double ans=((a*a)*sqrt(3))/q +((q2*v)/(sqrt(3)*a));
    printf("%.10f\n",ans);

  }

 return 0;}
