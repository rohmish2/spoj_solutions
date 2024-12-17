// Problem: HC
// Submission ID: 25827509
// Language: 4632

#include<bits/stdc++.h>
using namespace std;
int main()
{ map<string,int>a;
  a["lxh"]=1;
  a["hhb"]=0;
  int t;
  cin>>t;
  while(t--)
  { int q=0;
   int y;
   cin>>y;
   while(y--)
   { string s;
    cin>>s;
     q=q^a[s];
   }
   if(q==0)
    cout<<"hhb"<<endl;
   else
    cout<<"lxh"<<endl;
  }
return 0;}
