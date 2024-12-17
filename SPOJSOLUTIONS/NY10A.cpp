// Problem: NY10A
// Submission ID: 25497499
// Language: 4688

#include<bits/stdc++.h>
using namespace std;
int c[8];
int main()
{
    int t;
    cin>>t;
    while(t--)
    { memset(c,0,sizeof(c));
       int k;
       cin>>k;

       string a;
       cin>>a;
    for(int i=0;i<=38;i++)
    {string s=a.substr(i,3);
    if(s=="TTT")
        c[0]++;
    if(s=="TTH")
        c[1]++;
    if(s=="THT")
        c[2]++;
    if(s=="THH")
        c[3]++;
    if(s=="HTT")
        c[4]++;
    if(s=="HTH")
        c[5]++;
    if(s=="HHT")
        c[6]++;
    if(s=="HHH")
        c[7]++;

    }
    cout<<k<<" ";
for(auto i:c)
     cout<<i<<" ";
cout<<endl;
    }
    return 0;
}
