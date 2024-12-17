// Problem: LASTDIG2
// Submission ID: 25498313
// Language: 4692

#include <bits/stdc++.h>

using namespace std;
string a[10]={"0","1","2486","3971","46","5","6","7931","8426","91"};
int main()
{
    int t;
    cin>>t;
    while(t--)
    {string j;
     cin>>j;

     int k=j.back()-'0';
     long long q;
     cin>>q;
     q==0?cout<<1<<endl:q%a[k].size()==0?cout<<a[k][a[k].size()-1]<<endl:cout<<a[k][(q%(a[k].size()))-1]<<endl;

    }
    return 0;
}
