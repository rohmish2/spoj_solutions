// Problem: ARRAYSUB
// Submission ID: 25499370
// Language: 5340

#include <bits/stdc++.h>
using namespace std;

int main()
{

multiset<long> a;
int s;
cin>>s;
vector<long>v(s);
for(int i=0;i<s;i++)
    cin>>v[i];
int k;
cin>>k;
vector<long>m(s-k+1);
for(int i=0;i<k;i++)
{a.insert(v[i]);}
auto ka=a.rbegin();
    m[0]=*ka;

for(int i=1,j=k;i<s-k+1;i++,j++)
{  auto p=a.find(v[i-1]);
    a.erase(p);
    a.insert(v[j]);
    auto kq=a.rbegin();
    m[i]=*kq;

}
for(auto i:m)
    cout<<i<<" ";
    return 0;
}
