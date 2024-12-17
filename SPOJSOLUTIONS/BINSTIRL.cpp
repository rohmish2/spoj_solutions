// Problem: BINSTIRL
// Submission ID: 26176773
// Language: 4476

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    ll t;
    cin>>t;
    while(t--){
        ll n,m;
        cin>>n>>m;
        cout<<!((n-m)&((m-1)>>1))<<endl;
    }
    return 0;
} 