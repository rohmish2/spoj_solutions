// Problem: NGM
// Submission ID: 25477608
// Language: 4828

#include <bits/stdc++.h>
using namespace std;

int main()
{
    unsigned long long a;
    cin>>a;
    if(a%10!=0)
        cout<<1<<endl<<a-((a/10)*10);
    else
        cout<<2;
    return 0;
}
