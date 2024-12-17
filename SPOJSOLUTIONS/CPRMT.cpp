// Problem: CPRMT
// Submission ID: 25584382
// Language: 4644

#include<bits/stdc++.h>
using namespace std;
int main()
{ string a,b;
  //getline(cin,a);
  while(cin>>a>>b )
  { 
    string q;
   map<char,int>mp;
   for(auto i:a)
    mp[i]++;
   for(auto i:b)
   { if(mp[i]>=1)
       {
         q+=i;
         mp[i]--;
       }
   }
   sort(q.begin(),q.end());
   
 cout<<q<<endl;
 
  }

return 0;}
