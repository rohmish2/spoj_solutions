// Problem: EQBOX
// Submission ID: 26168241
// Language: 4680

#include <bits/stdc++.h>

using namespace std;
bool fun(double a,double b,double c,double d)
{ double ss=sqrt(c*c+d*d);
  double a1=acos(d/ss)-acos(b/ss);
  double mm=d*sin(a1)+c*cos(a1);
  if(mm<a)
        return true;
   return false;
}
int main()
{
    //cout << "Hello world!" << endl;
    int t;
    cin>>t;
    while(t--)
    {double a,b,c,d;
    cin>>a>>b>>c>>d;
    if(a<b)
    swap(a,b);
    if(d>c)
    swap(c,d);
    if(a>c&&b>d)
    printf("Escape is possible.\n");
    else if(b<=d||a*b<=c*d)
    printf("Box cannot be dropped.\n");
    else
    { if(fun(a,b,c,d))
      printf("Escape is possible.\n");
      else
      printf("Box cannot be dropped.\n");
    }
    }
    return 0;
}
