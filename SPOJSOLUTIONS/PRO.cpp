// Problem: PRO
// Submission ID: 26640489
// Language: 12888

#include<bits/stdc++.h>
using namespace std;
int main()
{ 
 #ifndef ONLINE_JUDGE
	freopen("ip.txt","r",stdin);
	freopen("op.txt","w",stdout);
 #endif
 int n;
  multiset<int>m;
  multiset<int>::iterator f,l;
 cin>>n;
 long long int ans=0;
 while(n--)
 { int p;
   cin>>p;
   while(p--)
   { int q;
     cin>>q;
     m.insert(q);}
 f=m.begin();
 l=m.end();
 l--;
 ans+=*(l)-*(f);
  m.erase(l);
  m.erase(f);
 }
cout<<ans;
return 0;}