// Problem: HAMSTER1
// Submission ID: 26177199
// Language: 4672

#include <bits/stdc++.h>

using namespace std;
double ff(double m1,double a,double b,double c)
{   double t= (2.0*a*sin(m1))/10.0;
    double q=a*sin(m1);
    double h=(a*a*sin(2.0*m1)/10.0),v=(q*q)/(20.0);
 return b*h+c*v;

//  return  ;
}
int main()
{    int t;
     scanf("%d",&t);
     while(t--)
     {
       double a,b,c,ans;
       scanf("%lf%lf%lf",&a,&b,&c);
       double h=(acos(-1))/2.0,l=0,m;
       ans=ff(0,a,b,c);
       //cout<<h<<endl;
       while(h-l>1e-4)
        {  m=(h+l)/2.0;
           if(ff(m+1e-4,a,b,c)>=ff(m,a,b,c))
                l=m;
            else
                h=m;
        }
        l+=1e-4;
     printf("%.3lf %.3lf\n",l,ff(l,a,b,c));

     }
    return 0;
}
