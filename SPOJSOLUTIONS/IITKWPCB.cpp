// Problem: IITKWPCB
// Submission ID: 25643062
// Language: 4776

#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    { long long a;
      cin>>a;
      if(a%2==0)
        {if(a/2%2==0)
        cout<<a/2-1<<endl;
        else
        cout<<a/2-2<<endl;}
      else
        cout<<a/2<<endl;
    }
    return 0;
}
