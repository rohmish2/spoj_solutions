// Problem: DCEPC501
// Submission ID: 25659772
// Language: 13608

#include<bits/stdc++.h>
using namespace std;
long long int a[1000010],arr[1000010];

long long int fun(int n)
{ if(n<=0)
  return 0;
if(a[n]!=-1)
    return a[n];
else
{//v[n]=1;
 if(n>=3)
 {
   a[n]=max(arr[n-1]+fun(n-2),max(arr[n-1]+arr[n-2]+fun(n-4),arr[n-1]+arr[n-2]+arr[n-3]+fun(n-6)));
 }
 else if(n>=2)
   a[n]=max(arr[n-1]+fun(n-2),arr[n-2]+arr[n-1]+fun(n-4));
 else
   a[n]=arr[n-1]+fun(n-2);
 return a[n];
}
}
int main()
{ int t;
  scanf("%d",&t);
  //cin>>t;
  while(t--)
  { int n;
    scanf("%d",&n);
    //cin>>n;
    memset(a,-1,sizeof(a));
    for(int i=n-1;i>=0;i--)
        scanf("%lld",&arr[i]);
        //cin>>arr[i];
   printf("%lld\n",fun(n));
   //cout<<fun(n)<<endl;
  }


return 0;}
