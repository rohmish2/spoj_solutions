// Problem: SPCQ
// Submission ID: 25808495
// Language: 4472

#include<bits/stdc++.h>
using namespace std;
int main()
{ int t;
 cin>>t;
 while(t--)
 { long long n;
   cin>>n;
   long long temp=n;
   long sun=0;
   while(temp>0)
   { sun+=temp%10;
     temp/=10;
   }
 while(n%sun!=0)
  { //n++;
   // cout<<"n%9"<<n%10<<" ";
    if(n%10!=9)
        {sun++;
        n++;}
    else
    { long long t=n;
      while(t%10==9)
       {
         sun-=9;
         t/=10;
       }
         sun++;
         n++;
    }
   //cout<<n<<" "<<sun<<endl;
  }
  cout<<n<<endl;

 }

return 0;}
