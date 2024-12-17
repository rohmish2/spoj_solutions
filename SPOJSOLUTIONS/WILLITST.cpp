// Problem: WILLITST
// Submission ID: 25470021
// Language: 4844

#include <iostream>

using namespace std;

int main()
{long long a;
cin>>a;
while(a>1&&(a%2==0))
    a/=2;
 if(a==1)
    cout<<"TAK";
 else
    cout<<"NIE";
    return 0;
}
