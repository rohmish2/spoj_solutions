// Problem: CLONE
// Submission ID: 25841881
// Language: 5204

#include<bits/stdc++.h>
using namespace std;
int main()
{ int n,q;



   cin>>n>>q;

   while(n!=0&&q!=0)
   {vector<int>a(n,0),v(n,0);
   vector<string>s(n);
   for(int i=0;i<n;i++)
   {cin>>s[i];}
   for(int i=0;i<n;i++)
   { if(v[i]==0)
       { int cnt=0;
        for(int j=i;j<n;j++)
          { if(s[i]==s[j])
              {v[j]=1;
              cnt++;}
          }
       a[cnt-1]++;
       }
   }
   
    for(auto i:a)
        cout<<i<<endl;
     cin>>n>>q;   
        }


   return 0;}
