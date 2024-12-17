// Problem: EBOXES
// Submission ID: 25639886
// Language: 4516

#include <iostream>

using namespace std;

int main()
{
  int t;
  cin>>t;
  while(t--)
  {long long n,k,t,f;
   cin>>n>>k>>t>>f;
   cout<<n+(k*(f-n))/(k-1)<<endl;
  }
    return 0;
}
