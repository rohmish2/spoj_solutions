// Problem: AMZSEQ
// Submission ID: 25870222
// Language: 4756

#include <iostream>

using namespace std;
int a=1,b=1,c=1;
int main()
{
    int n;
    cin>>n;
    for(int i=2;i<=n;i++)
    { int ta=0,tb=0,tc=0;
      ta+=a+b;
      tb+=a+b+c;

      tc+=b+c;
       a=ta;b=tb;c=tc;
    }
    cout<<a+b+c;
    return 0;
}
