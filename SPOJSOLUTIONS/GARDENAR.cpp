// Problem: GARDENAR
// Submission ID: 25975950
// Language: 4632

#include<bits/stdc++.h>
using namespace std;
double area(double a,double b,double c)
{ double s=(a+b+c)/2.0;
  double q=0;
  //cout<<" fun"<<s<<" "<<s*(s-a)*(s-c)*(s-b)<<endl;
 if(s*(s-a)*(s-c)*(s-b)<0)
 return 0;
  return sqrt(s*(s-a)*(s-c)*(s-b));
}
int main()
{
   int t;
   scanf("%d",&t);

   while(t--)
   {


   double a,b,c;
   scanf("%lf%lf%lf",&a,&b,&c);
   //cin>>a>>b>>c;
   double h=a+b+c,l=0;
   double q=sqrt(3)/4;
   double arr,ar;
   int qq=500;
   while(qq--)
   { double mid=(h+l)/2.0;
      arr=q*mid*mid;
      ar=area(a,b,mid)+area(a,c,mid)+area(c,b,mid);
      //cout<<arr<<" "<<ar<<endl;
     if(arr>ar)
        h=mid;
     else
        l=mid;

   }
   printf("%.2f\n",ar);
   }
      return 0;}
