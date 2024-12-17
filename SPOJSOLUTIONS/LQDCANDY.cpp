// Problem: LQDCANDY
// Submission ID: 26033653
// Language: 4796

#include<bits/stdc++.h>
using namespace std;
int main()
{ int t;
  scanf("%d",&t);
  while(t--)
  {  long long int a;
     scanf("%lld",&a);
     long long int b=a;
     int cnt=0;
      int s=0;
      while(a>0)
       { if((a&1)&&s==0)
           { s=1;
             //cnt++;
           }
         if(s==1)
            cnt++;
         a=a>>1;
       }
      long long int k=1;
     for(int i=1;k<b;i++)
     { k*=2;

     }
     if(cnt==1)
        cout<<b<<" "<<0<<endl;
     else
        cout<<k<<" "<<cnt<<endl;
  }

return 0;}
