// Problem: OLOLO
// Submission ID: 25479723
// Language: 4688

#include <iostream>
#define scan(s) scanf("%d",&s)
using namespace std;

int main()
{ int t;
  scan(t);
  int ans=0;
  while(t--)
  { int a;
   scan(a);
   ans^=a;

  }
  cout<<ans;
         return 0;
}
