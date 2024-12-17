// Problem: HLP_RAMS
// Submission ID: 26196356
// Language: 4824

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    { long long a;
      scanf("%lld",&a);
      long long int cnt=1;
      long long tmp=a;
       while(a>0)
       { if(a&(long long)1)
          {   //
              cnt=cnt*2;}
         // cout<<a<<" "<<cnt<<endl;

          a/=2;
       }

      printf("%lld %lld\n",tmp+1-cnt,cnt);

    }
return 0;}
