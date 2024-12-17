// Problem: SBANK
// Submission ID: 25501909
// Language: 28532

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    { long n;
      set<string>s;
      map<string,long>m;
      cin>>n;
      for(int i =0;i<=n;i++)
      { string a;
        getline(cin,a);
        if(s.count(a)==0)
        s.insert(a);
        m[a]=m[a]+1;
      }
     for(auto i:s)
     { if(i=="")
       continue;
        cout<<i<<"  "<<m[i]<<endl;
     }
cout<<endl;

    }
return 0;}
