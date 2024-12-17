// Problem: REBOUND
// Submission ID: 26211293
// Language: 4544

#include<bits/stdc++.h>
using namespace std;
int main()
{ int  t;
  scanf("%d",&t);
  while(t--)
  { double  x,y,h;
    scanf("%lf%lf%lf",&x,&y,&h);
     double a=(2.0*h +y),b=-2.0*x,c=-y;
     double t=(-b*h + h*sqrt( (b*b) - (4.0*a*c)))/(2.0*a);
    //double t=cot*h;
    if(t-(int)(t)==0&&t<=x)
        { long int g=t;
            printf("%ld\n",g);
       }
    else
        printf("Not this time.\n");
  }

return 0;}
