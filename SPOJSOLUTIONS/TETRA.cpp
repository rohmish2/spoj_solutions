// Problem: TETRA
// Submission ID: 25862779
// Language: 4624

#include <bits/stdc++.h>
#define db double
using namespace std;
db fun(db a,db b,db c,db h)
{ db ans;
  db s=(a+b+c)/2;
  db area=sqrt(s*(s-a)*(s-b)*(s-c));
  double q=3;
  ans=(area*h)/q;
  return ans;
}
db binary(db u, db v, db w, db U, db V, db W, db b,db vol)
{
    db l=0,h=(u+v+w+U+V+W);
 db power=2;
 while(h-l>1.e-5)
 { db mid=(h+l)/power;
   db a1,a2,a3,a4;
   a1=fun(u,v,W,mid);//
   a2=fun(v,w,U,mid);
   a3=fun(u,V,w,mid);
   a4=fun(W,V,U,mid);
   if(a1+a2+a3+a4>vol)
   {
       h=mid;
   }
   else
   {
       l=mid;
   }
 }

return (l+h)/power;}
int main()
{ int t;
cin>>t;
 while(t--)
 {   double U,V,W,u,v,w;
     scanf("%lf%lf%lf%lf%lf%lf",&u,&W,&V,&v,&w,&U);
		double uu = (v*v) + (w*w) - (U*U);
		double vv = (w*w) + (u*u) - (V*V);
		double ww = (u*u) + (v*v) - (W*W);
		double vol = (4*u*u*v*v*w*w)-(u*u*uu*uu)-(v*v*vv*vv)-(w*w*ww*ww)+(uu*vv*ww);
		double volume = (sqrt(vol)) / 12;
		db b=1;
   printf("%.4f\n",binary(u,v,w,U,V,W,b,volume));


 }

    return 0;
}
