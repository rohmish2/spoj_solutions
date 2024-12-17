// Problem: NEG2
// Submission ID: 25652943
// Language: 4796

#include<bits/stdc++.h>
using namespace std;
int main()
{  long n;
   cin>>n;
    string s="";
     if(n==0)
     {
             printf("0\n");
             return 0;
     }
     int i=-2;

     while(n)
     {
             if(n%i<0)
             {

             s=(char)(((n%i)+2)+'0')+s;
             n=(n/i)+1;
             }
             else
             {
             s=(char)((n%i)+'0')+s;
             n=n/i;
             }

     }
    cout<<s;

return 0;}
