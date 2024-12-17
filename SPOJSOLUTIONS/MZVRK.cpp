// Problem: MZVRK
// Submission ID: 26167711
// Language: 4856

#include<bits/stdc++.h>
using namespace std;
int main()
{ long long a,b;
  scanf("%lld%lld",&a,&b);
  vector<long long>a1(62,0),b1(62,0);
  a--;
  long long ans=(b+1)/2 -(a+1)/2;

  long long q=1,sex=0;
  while(q<b)
    {q<<=1;
    sex++;}
  for(long long int i=sex+1;i>=1;i--)
  { long long q=(long long)1<<i;
    long long s=q;

    if(b/q==0)
        continue;
    a1[i]=a/q;
    b1[i]=b/q;
    for(int j=i+1;j<=50;j++)
            a1[i]-=a1[j];
    for(int j=i+1;j<=50;j++)
            b1[i]-=b1[j];


   //cout<<ans<<" "<<i<<endl;

  ans+=(b1[i]-a1[i])*q;
  }
printf("%lld",ans);

  return 0;}
