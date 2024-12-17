// Problem: HPYNOS
// Submission ID: 25484825
// Language: 4804

#include <bits/stdc++.h>
using namespace std;
int main()
{ map<long long,bool>m;
long long a,counter=0;
  cin>>a;

  while(a!=1)
  { long long temp=0;
    counter++;
     while(a!=0)
     {
         temp+=((a%10)*(a%10));

        a/=10;
     }
    // cout<<temp<<endl;
   if(m[temp])
    break;
   m[temp]=true;
   a=temp;
  }
  a==1?cout<<counter:cout<<"-1";
return 0;
}
