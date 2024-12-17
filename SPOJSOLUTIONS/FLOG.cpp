// Problem: FLOG
// Submission ID: 26140612
// Language: 4844

#include <bits/stdc++.h>

using namespace std;

int main()
{     int t;
      scanf("%d",&t);
      int c=1;
      while(t--)
      { long long a,b;
        scanf("%lld%lld",&a,&b);
         //if(b<=1||a<=1||b<a)
           //           continue;}
         double k=log(1.0*b)/log(1.0*a);
         if(k>0)
         printf("Case %d: %.5lf\n",c++,k);
         else 
        {printf("Case %d: Math Error!\n",c++);}
    

       }
      return 0;
}
