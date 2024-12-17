// Problem: EIGHTS
// Submission ID: 25469267
// Language: 4736

#include <iostream>
#include<string.h>
using namespace std;
string arr[4]={"192","442","692","942"};
int main()
{
  int t;
  cin>>t;
  while(t--)
  { unsigned long long a;
     cin>>a;
     long long len=(a-1)/4;
     if(len>0)
     cout<<len<<arr[(a-1)%4]<<endl;
     else
     cout<<arr[(a-1)%4]<<endl;
  }
    return 0;
}
