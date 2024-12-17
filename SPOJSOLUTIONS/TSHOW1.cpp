// Problem: TSHOW1
// Submission ID: 25640216
// Language: 4556

#include<bits/stdc++.h>
using namespace std;
int main()
{ long t;
  cin>>t;
  while(t--)
  { long long a;
    string c;
    cin>>a;
    a++;
    long long l=1;
  for(int i=0;i<floor(log2(a));i++)
     { if(a&l)
        c+="6";
       else
        c+="5";
       l*=2;
     }
     reverse(c.begin(),c.end());
  cout<<c<<endl;
  }
return 0;}
