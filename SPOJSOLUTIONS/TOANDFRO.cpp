// Problem: TOANDFRO
// Submission ID: 25462460
// Language: 4584

#include<bits/stdc++.h>
using namespace std;
int main()
{
 while(1)
 { int t;
   cin>>t;
   if(t==0)
    return 0;
   string a;
   cin>>a;
   vector<string>b;
   int mutex=0;
   for(int i=0;i<a.size();i+=t)
     { string bq=a.substr(i,t);
         if(mutex==0)
       {b.push_back(bq);
       mutex=1;}
       else
       { reverse(bq.begin(),bq.end());
       b.push_back(bq);
        mutex=0;
       }

    }
    string out;
    for(int i=0;i<b[0].size();i++)
        for(int j=0;j<b.size();j++)
          out+=b[j][i];
    cout<<out<<endl;
 }
return 0;}
