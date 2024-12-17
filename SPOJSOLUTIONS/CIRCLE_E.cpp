// Problem: CIRCLE_E
// Submission ID: 25853088
// Language: 4652

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    { double r1,r2,r3;
      cin>>r1>>r2>>r3;
      //double n=a+b+c,d=(a*b)+(a*c)+(b*c)+(2*(sqrt(a*b*c*(a+b+c))));
      double r=r = 1/((1/r1)+(1/r2)+(1/r3)+(2*sqrt( (1/(r1*r2)) + (1/(r1*r3)) + (1/(r2*r3)))));;
      printf("%.6f\n",r);
    }
    return 0;
}
