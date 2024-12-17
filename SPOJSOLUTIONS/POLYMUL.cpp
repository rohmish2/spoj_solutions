// Problem: POLYMUL
// Submission ID: 26106074
// Language: 5824

#include <bits/stdc++.h>

using namespace std;
using cd=complex<double>;
const double pi=acos(-1);
void fft(vector<cd>&arr,bool invert)
{
    int n=arr.size();
   if(arr.size()==1)
     return ;


   vector<cd>arr1(n>>1),arr2(n>>1);
   for(int i=0;i*2<n;i++)
    {
      arr1[i]=arr[2*i];//stores even
      arr2[i]=arr[(2*i)+1];//stores odd
    }
   fft(arr1,invert);
   fft(arr2,invert);
   double  multi=2*pi/n *(invert?-1:1);
   cd w(1),wn(cos(multi),sin(multi));
   for(int i=0;2*i<n;i++)
    { arr[i]=arr1[i]+w*arr2[i];
      arr[i+n/2]=arr1[i]-w*arr2[i];
      if(invert)
      {arr[i]/=2;
       arr[n/2+i]/=2;}
      w*=wn;
    }

 }
vector<long long int>multi(vector<long long int>&a,vector<long long int>&b)
{ vector<cd>ar(a.begin(),a.end()),ar1(b.begin(),b.end());
  int n=1;
  while(n<ar.size()+ar1.size())
  {n=n<<1;}
  ar.resize(n);
  ar1.resize(n);
  fft(ar,false);
  fft(ar1,false);
  for(int i=0;i<n;i++)
   ar[i]*=ar1[i];
  fft(ar,true);

  vector<long long int>ans(n);
  for(int i=0;i<n;i++)
     ans[i]=round(ar[i].real());
 return ans;
}
int main()
{  int t;
   scanf("%d",&t);
   while(t--)
   { int n;
     scanf("%d",&n);
     vector<long long int>a(n+1),b(n+1);
     for(int i=0;i<=n;i++)
        scanf("%lld",&a[i]);
     for(int i=0;i<=n;i++)
        scanf("%lld",&b[i]);

    vector<long long int>c=multi(a,b);
    for(int i=0;i<=2*n;i++)
       printf("%lld ",c[i]);
       printf("\n");
   }
    return 0;
}
