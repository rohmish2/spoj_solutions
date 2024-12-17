// Problem: TRIGALGE
// Submission ID: 26066366
// Language: 4832

#include<bits/stdc++.h>
using namespace std;
int main()
{ int t;
  scanf("%d",&t);
  while(t--)
  { double a,b,c;
    scanf("%lf%lf%lf",&a,&b,&c);
    double l=0,h=c*100.0,d=2;
    double m;
    while(h-l>1.e-7)
     {  m=(l+h)/d;
       //cout<<m<<endl;
       if(a*m + b*sin(m)<c)
           l=m;
       else
           h=m;
     }
   printf("%.6f\n",m);
  }
return 0;}
