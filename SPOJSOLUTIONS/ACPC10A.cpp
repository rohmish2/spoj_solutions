// Problem: ACPC10A
// Submission ID: 25462003
// Language: 4632

#include<bits/stdc++.h>
using namespace std;
int main()
{
    while(1)
    { long a,b,c;
      cin>>a>>b>>c;
      if(a==0&&b==0&&c==0)
            return 0;
      if(a+c==2*b)
        cout<<"AP "<<c+(c-b);
      else
        cout<<"GP "<<c*(c/b);
     cout<<endl;
    }


return 0;}
