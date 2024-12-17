// Problem: PIR
// Submission ID: 25625241
// Language: 4628

#include<stdio.h>
#include<math.h>
int main()
{
    int t;
    double  a,b,c,d,e,f,A,B,C,D,E,F;
    double vol;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lf%lf%lf%lf%lf%lf",&a,&c,&e,&b,&d,&f);
        A=a*a;
        B=b*b;
        C=c*c;
        D=d*d;
        E=e*e;
        F=f*f;
        vol = sqrt((-A*B*C - A*D*E - B*D*F - C*E*F + A*C*D + B*C*D + A*B*E + B*C*E + B*D*E +C*D*E + A*B*F + A*C*F +A*D*F + C*D*F + A*E*F + B*E*F - C*C*D - C*D*D - B*B*E - B*E*E- A*A*F - A*F*F)/144.0);
        printf("%.4lf\n",vol);   
    }
    return 0;
}