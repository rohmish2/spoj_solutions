// Problem: AMR10C
// Submission ID: 26063855
// Language: 7616

#include<bits/stdc++.h>
using namespace std;
int a[1000001];
int main()
{
    for(int i=2;i*2<=1000000;i++)
     if(a[i]==0)
     { a[i]=i;
       for(int j=i*2;j<=1000000;j+=i)
            if(a[j]==0)
               a[j]=i;
     }
  int t;
    scanf("%d",&t);
    while(t--)
    { int a1;
      scanf("%d",&a1);
      int b=a1;
      map<int,int>mp;
      int maxi=0;
      while(b!=1)
        { mp[a[b]]++;
          maxi=max(mp[a[b]],maxi);
          //cout<<b<<" "<<a[b]<<" \n";


          b=b/a[b];
        }
     printf("%d\n",maxi);

    }
return 0;}
