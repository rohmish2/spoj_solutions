// Problem: CISTFILL
// Submission ID: 26181082
// Language: 7096

#include<bits/stdc++.h>
using namespace std;
struct tanks
{ double base,h,l,b;
  tanks(double a,double bq,double c,double d)
    { base=a;
     h=bq;
     l=c;
     b=d;}
};
bool check(double a,vector<tanks>&tt,double&vol)
{ double vv=0;
 for(auto i:tt)
 { if(i.base < a)
    { if(i.base+i.h >a)
        {  double eff=a-(i.base);

           vv=vv+eff*(i.l*i.b);
        }
      else
        vv=vv+(i.h*i.l*i.b);
    }

 }
 //cout<<a<<"  "<<vv<<" "<<vol<<endl;
 if(vol<=vv)
    return true;
    return false;
}
int main()
{ int t;
  scanf("%d",&t);
  while(t--)
  { int t1;
    scanf("%d",&t1);
    vector<tanks>tt;
    double maxi=0;
    double mh=0;
    for(int i=0;i<t1;i++)
     {  double a,b,c,d;
        scanf("%lf%lf%lf%lf",&a,&b,&c,&d);
        tt.push_back(tanks(a,b,c,d));
        mh=max(mh,a+b);
        maxi+=b*c*d;
     }
  double vol;
  scanf("%lf",&vol);
  if(vol>maxi)
    {printf("OVERFLOW\n");
    }
  else if(vol==maxi)
    printf("%.2lf\n",mh);
  else
  { double l=0,h=mh;
     while(h-l>1.e-3)
       { double mid=(l+h)/2.0;
         if(check(mid,tt,vol))
              h=mid;
         else
              l=mid;

       }
       h=h+1.e-3;
  printf("%.2lf\n",h);

  }



  }

return 0;}
