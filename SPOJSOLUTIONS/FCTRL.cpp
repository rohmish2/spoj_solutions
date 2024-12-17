// Problem: FCTRL
// Submission ID: 25461770
// Language: 4520

#include<bits/stdc++.h>
using namespace std;
int main()
{int t;
cin>>t;
while(t--)
    {
        long long a,ans=0;
        cin>>a;
        long long div=5;
        while(a/div!=0)
        {
            ans+=a/div;
            div*=5;
        }
    cout<<ans<<endl;}

return 0;}
