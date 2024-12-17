// Problem: GIRLSNBS
// Submission ID: 25483294
// Language: 4760

#include <bits/stdc++.h>

using namespace std;

int main()
{
    while(1)
    { float a,b;
      cin>>a>>b;
      if(a==-1)
        return 0;
      float m1=max(a,b),m2=min(a,b);
      cout<<ceil(m1/(m2+1))<<endl;

    }
    return 0;
}
