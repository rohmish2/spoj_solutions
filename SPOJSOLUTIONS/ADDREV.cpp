// Problem: ADDREV
// Submission ID: 25461700
// Language: 4504

#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{int t;
cin>>t;
while(t--)
{string a,b;
 cin>>a>>b;
 reverse(a.begin(),a.end());
 reverse(b.begin(),b.end());
 string ans=to_string(stoi(a)+stoi(b));
 reverse(ans.begin(),ans.end());
 cout<<to_string(stoi(ans))<<endl;




}
return 0;}
