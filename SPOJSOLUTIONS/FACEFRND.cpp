// Problem: FACEFRND
// Submission ID: 25504158
// Language: 4524

#include<bits/stdc++.h>
using namespace std;
int main()
{   set<long>a;
    int t;
    cin>>t;
    vector<long>q;
    for(int i=0;i<t;i++)
      {
        long b,c,d;
        cin>>b;
        q.push_back(b);

       cin>>c;
       for(int i=0;i<c;i++)
       {
           cin>>d;
           a.insert(d);
       }

      }
      for(auto i:q)
        if(a.count(i)!=0)
            a.erase(a.find(i));

      cout<<a.size();
return 0;}
