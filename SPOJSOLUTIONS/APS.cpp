// Problem: APS
// Submission ID: 25654007
// Language: 120808

#include<bits/stdc++.h>
using namespace std;
int a[10000100];
long long  ans[10000010];
int main()
{  ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    for(int i=2;i*i<=10000000;i++)
   {
     if(a[i]==0)
     { for(int j=i*i;j<=10000000;j+=i)
         { if(a[j]==0)
             a[j]=i;
         }
     }
   }

   for(int i=2;i<=10000000;i++)
   { int toadd=0;
     if(a[i]==0)
        toadd=i;
     else
        toadd=a[i];
     ans[i]=ans[i-1]+toadd;
     //cout<<ans[i];
   }
   int t;
   cin>>t;
   while(t--)
   { int k;
     cin>>k;
     cout<<ans[k]<<endl;

   }
return 0;}
