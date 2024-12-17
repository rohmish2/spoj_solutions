// Problem: DCEPC504
// Submission ID: 25817312
// Language: 4812

#include<bits/stdc++.h>
using namespace std;
int main()
{ int t;
cin>>t;
while(t--)
{ long long a,b;
  cin>>a>>b;
  string a1="Male\n",a2="Female\n";
  int mul=1;
  while(a>1)
   { if(b%2==0)
      { b/=2;
        mul*=-1;
        a--;
      }
     else
     { b=(b+1)/2;
       a--;
     }
    }
 if(mul==1)
    cout<<a1;
 else
    cout<<a2;

}
return 0;}
