// Problem: FASHION
// Submission ID: 25462114
// Language: 4720

#include<bits/stdc++.h>
using namespace std;
int main()
{int t;
 cin>>t;
 while(t--)
 {
 int s;
 cin>>s;
 vector<int>m,w;
 for(int i=0;i<s;i++)
 { int t;
 cin>>t;
  m.push_back(t);
 }
 for(int i=0;i<s;i++)
 { int t;
 cin>>t;
  w.push_back(t);
 }
 sort(w.begin(),w.end());
 sort(m.begin(),m.end());
 long sum=0;
 for(int i=0;i<s;i++)
 { sum+=w[i]*m[i];
 }
 cout<<sum<<endl;
 }

return 0;}
