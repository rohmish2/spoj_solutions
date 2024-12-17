// Problem: MARBLES
// Submission ID: 25511826
// Language: 4684

#include<bits/stdc++.h>
using namespace std;
unsigned long long  bc(unsigned long long  n, unsigned long long  k)
{
    unsigned long long  res = 1;


    if ( k > n - k )
        k = n - k;


    for (unsigned long long  i = 0; i < k; ++i)
    {
        res *= (n - i);
        res /= (i + 1);
    }

    return res;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    { unsigned long long a,b;
      cin>>a>>b;
      cout<<bc(a-1,b-1)<<endl;

    }
return 0;}
