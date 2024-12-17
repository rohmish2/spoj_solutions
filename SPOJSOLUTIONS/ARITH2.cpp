// Problem: ARITH2
// Submission ID: 25504525
// Language: 4668

#include<bits/stdc++.h>
using namespace std;
int main()
{int t;
 cin>>t;
 while(t--)
 { long long b=0,c=0;
   char  ch='a';
   //cout<<"sample";
   cin>>b;
   while(ch!='=')
   {
     cin>>ch;
     if(ch=='=')
        break;
     cin>>c;
     switch(ch)
     { case '+':b=b+c;
                break;
       case '-':b-=c;
                break;
       case '*':b*=c;
                break;
       case '/':b/=c;
                break;
       default: break;
     }

   }
   cout<<b<<endl;

 }
return 0;}
