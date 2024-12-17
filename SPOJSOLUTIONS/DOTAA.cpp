// Problem: DOTAA
// Submission ID: 25509015
// Language: 4696

#include<bits/stdc++.h>
using namespace std;
int main()
{
    long t;
    cin>>t;
    while(t--)
    { long long a,b,c;
      cin>>a>>b>>c;
      for(int i=0;i<a;i++)
      {  // cout<<b<<"  ";
          long long temp;
          cin>>temp;
          if(temp>c)
            {b-=(temp-1)/c;}
      }
      b>0?cout<<"NO\n":cout<<"YES\n";

    }
return 0;}
