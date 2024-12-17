// Problem: SNGMSG
// Submission ID: 26595650
// Language: 4820

#include<bits/stdc++.h>
using namespace std;
int main()
{ int t;
  cin>>t;
  string q;
  for(char i='a';i<='z';i++)
     q+=i;
  q+=q;
  q+=q;


  while(t--)
 { string k,m;
   cin>>k>>m;
   int cur=0;
   int adder=1;
   for(auto i:m)
   {

    int qq=26+(i-'a');
    int ti=(k[cur]-'0');
    cout<<q[qq-ti];

    cur+=adder;
    if(cur==k.size()&&adder==1)
        {cur-=1;adder=-1;}
    if(cur==-1&&adder==-1)
         {cur+=1;adder=1;}
   }


cout<<endl;
 }
  return 0;}
